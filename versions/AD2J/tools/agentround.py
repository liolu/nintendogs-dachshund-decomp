"""agentround.py ROUND [--dry-run] : collect + judge + submit the work of an agent round (run from the game dir).

ROUND = build/hunt/<round> holding one sub dir per agent (a1/, a2/...) with NAME.c files written by agents
(AGENT-BRIEF-hom.md). Steps, all automatic:
 1. copy every NAME.c whose NAME is an unmatched function into ROUND/all/ (agent scratch/.tmp files are ignored)
 2. symfix.py on them (stale func_ovNNN_ names renamed by profrename -> "ROM differs" otherwise)
 3. fj.py ROUND/all with AUTO_EXTRA_PROFILES set to every profile agents may have used (also records the misses)
 4. split matches: overlay/ITCM ones -> ROUND/ovl + `workbench submit-many`; main-module ones -> `workbench submit`
    one by one (submit-many crashes when a main func follows overlay ones).
Then `workbench.py commit` is up to the caller. Prints a summary (matched / submitted / rejected)."""
import argparse, functools, json, os, shutil, subprocess, sys, time
print = functools.partial(print, flush=True)  # progress visible in a redirected log
from pathlib import Path

HERE = Path(__file__).resolve().parent
sys.path.insert(0, str(HERE))
PROFILES = ('1.2/sp3,1.2/sp2p3,1.2/b56,1.2/b56 -O4,s,1.2/sp3 -O2,p,2.0/sp1p5 -O2,p,2.0/sp1p5 -profile,1.2/sp3 -profile,1.2/sp2p3 -profile,'
            '1.2/sp2p3 -thumb,2.0/sp1p5 -thumb,1.2/sp2p3 -proc arm7tdmi,1.2/sp3 -proc arm7tdmi,2.0/sp1p5 -O1,2.0/sp1p5 -O2,2.0/sp1p5 -O4,s,'
            '1.2/sp2p3 -nointerworking,2.0/sp1p5 -nointerworking,1.2/sp3 -nointerworking,1.2/sp3 -O1,1.2/sp3 -profile -O1,1.2/sp2p3 -O1,1.2/b56 -O1')

ap = argparse.ArgumentParser()
ap.add_argument('round'); ap.add_argument('--dry-run', action='store_true'); ap.add_argument('--no-judge', action='store_true', help='reuse ROUND/all/results.json (fj.py pool can hang on Windows: judge the stragglers alone with workbench judge and add them)'); ap.add_argument('-j', type=int, default=8)
ap.add_argument('--no-fj', action='store_true', help='skip fj.py and judge one by one what results.json does not have')
ap.add_argument('--fj-minutes', type=int, default=10, help='cap on fj.py, then the rest is judged one by one')
a = ap.parse_args()
R = Path(a.round); ALL = R / 'all'; ALL.mkdir(parents=True, exist_ok=True)
import hunt  # noqa: E402
unmatched = set(hunt.unmatched_sizes()) - hunt.matched_names()

names = []
for d in sorted(p for p in R.iterdir() if p.is_dir() and p.name not in ('all', 'ovl')):
    for f in d.glob('*.c'):
        if f.stem in unmatched and f.stem not in names:
            shutil.copy2(f, ALL / f.name); names.append(f.stem)  # own #include lines are allowed (fakematch)
print(f'{len(names)} agent files collected')
if not names: sys.exit()
files = [str(ALL / f'{n}.c') for n in names]
for i in range(0, len(files), 150):  # Windows command line limit (r32: 841 files)
    subprocess.run([sys.executable, str(HERE / 'symfix.py'), *files[i:i + 150]], check=False)
env = dict(os.environ, AUTO_EXTRA_PROFILES=PROFILES)
if not a.no_judge and not a.no_fj:
    try:  # fj.py's Pool can hang forever on Windows (seen on -profile funcs): cap it, judge stragglers alone
        (ALL / 'names.txt').write_text(chr(10).join(names), encoding='utf-8')  # @file: Windows command line limit
        fj = subprocess.Popen([sys.executable, str(HERE / 'fj.py'), str(ALL), '-j', str(a.j), '@' + str(ALL / 'names.txt')], env=env)
        t0 = time.time()  # stall = results.json (written as fj goes) unchanged for 2 min: the Pool hung, stop waiting
        while fj.poll() is None:
            time.sleep(5)
            rp0 = ALL / 'results.json'
            last = max(t0, rp0.stat().st_mtime if rp0.exists() else t0)
            if time.time() - last > 120 or time.time() - t0 > 60 * a.fj_minutes:
                raise subprocess.TimeoutExpired('fj.py', 120)
    except subprocess.TimeoutExpired:
        try:  # the venv python.exe is a launcher: taskkill /T misses the Pool workers, psutil finds them all
            import psutil
            for q in [*psutil.Process(fj.pid).children(recursive=True), psutil.Process(fj.pid)]:
                q.kill()
        except Exception:
            subprocess.run(['taskkill', '/F', '/T', '/PID', str(fj.pid)], capture_output=True)
        print(f'fj.py stopped (stalled 2 min or {a.fj_minutes} min cap)')
rp = ALL / 'results.json'
res = json.loads(rp.read_text(encoding='utf-8')) if rp.exists() else {}
late = [n for n in names if n not in res or (ALL / f'{n}.c').stat().st_mtime > res[n].get('mt', 0) + 1]
def judge_alone(n):
    try:
        p = subprocess.run([sys.executable, str(HERE / 'workbench.py'), 'judge', n, str(ALL / f'{n}.c')], env=env,
                           capture_output=True, text=True, timeout=300)
        r = json.loads(p.stdout[p.stdout.index('{'):])
        return n, {k: r.get(k) for k in ('status', 'match', 'profile')} | {'mt': time.time()}
    except (subprocess.TimeoutExpired, ValueError):
        return n, {'status': 'timeout', 'match': False, 'mt': time.time()}


from concurrent.futures import ThreadPoolExecutor
with ThreadPoolExecutor(a.j) as pool:  # results saved one by one: a killed run resumes where it stopped
    for n, r in pool.map(judge_alone, [] if a.no_judge else late):
        res[n] = r
        print(f'{n} {r["status"]} (judged alone)', flush=True)
        rp.write_text(json.dumps(res, indent=1), encoding='utf-8')
rp.write_text(json.dumps(res, indent=1), encoding='utf-8')
win = {n: r for n, r in res.items() if n in names and r.get('match')}
print(f'MATCHED {len(win)}/{len(names)}: {" ".join(sorted(win))}')
if a.dry_run or not win: sys.exit()

import workbench  # noqa: E402
main, ovl = [], {}
for n, r in win.items():
    (main.append(n) if workbench.select_module(n) == 'main' else ovl.__setitem__(n, r))
WB = [sys.executable, str(HERE / 'workbench.py')]
if ovl:
    O = R / 'ovl'
    if O.exists(): shutil.rmtree(O)
    O.mkdir()
    for n in ovl: shutil.copy2(ALL / f'{n}.c', O / f'{n}.c')
    (O / 'results.json').write_text(json.dumps(ovl, indent=1), encoding='utf-8')
    subprocess.run([*WB, 'submit-many', str(O), '--who', 'claude'], env=env, check=False)
    ovl = json.loads((O / 'results.json').read_text(encoding='utf-8'))
if len(main) > 5:  # one link per `submit` = hours for hundreds of main funcs (Nintendogs swp: 217): one submit-many
    M = R / 'main'
    if M.exists(): shutil.rmtree(M)
    M.mkdir()
    for n in main: shutil.copy2(ALL / f'{n}.c', M / f'{n}.c')
    (M / 'results.json').write_text(json.dumps({n: win[n] for n in main}, indent=1), encoding='utf-8')
    subprocess.run([*WB, 'submit-many', str(M), '--who', 'claude'], env=env, check=False)
    mres = json.loads((M / 'results.json').read_text(encoding='utf-8'))
    for n in main: win[n]['submit'] = mres.get(n, {}).get('submit', 'not submitted')
    main_loop = []
else:
    main_loop = main
for n in main_loop:
    p = subprocess.run([*WB, 'submit', n, str(ALL / f'{n}.c'), '--profile', win[n]['profile'], '--who', 'claude'],
                       env=env, capture_output=True, text=True)
    win[n]['submit'] = True if p.returncode == 0 else (p.stdout + p.stderr).strip()[-200:]
ok = [n for n in ovl if ovl[n].get('submit') is True] + [n for n in main if win[n].get('submit') is True]
bad = {n: ovl[n].get('submit') for n in ovl if ovl[n].get('submit') is not True}
bad.update({n: win[n]['submit'] for n in main if win[n].get('submit') is not True})
print(f'SUBMITTED {len(ok)}: {" ".join(sorted(ok))}')
for n, why in bad.items(): print(f'REJECTED {n}: {why}')
