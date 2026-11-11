"""nearperm.py ROUND [--max-diffs 6] [--n 300] [-j 6] [--only aK,aJ] : token-free pass over an agent round's near misses.

Judges every ROUND/aK/NAME.c (profile from its `near start` header, else hunt's best profile, else 2.0/sp1p5), and for
those at 1..--max-diffs diffs runs permrand.py (random local declaration orders = register allocation shuffles) on a
copy in ROUND/perm/. A permutation that MATCHES replaces aK/NAME.c (the old one is kept as NAME.c.prev), so the next
agentround/roundpush picks it up. Run from the game dir after (or while) the agents work; it uses no LLM."""
import argparse
import json
import re
import shutil
import subprocess
import sys
from pathlib import Path

HERE = Path(__file__).resolve().parent
sys.path.insert(0, str(HERE))
import hunt  # noqa: E402

ap = argparse.ArgumentParser()
ap.add_argument('round'); ap.add_argument('--max-diffs', type=int, default=6); ap.add_argument('--n', type=int, default=300)
ap.add_argument('-j', type=int, default=6); ap.add_argument('--only', default='')
a = ap.parse_args()
R = hunt.HUNT / a.round if not Path(a.round).exists() else Path(a.round)
P = R / 'perm'; P.mkdir(exist_ok=True)
led = hunt.load()
unmatched = set(hunt.unmatched_sizes()) - hunt.matched_names()


def judge(name, f, prof):
    r = subprocess.run([sys.executable, str(HERE / 'workbench.py'), 'judge', name, str(f), '--profile', prof],
                       capture_output=True, text=True)
    try:
        return json.loads(r.stdout)
    except ValueError:
        return {}


dirs = [d for d in sorted(R.iterdir()) if re.fullmatch(r'a\d+', d.name) and (not a.only or d.name in a.only.split(','))]
todo = []
for d in dirs:
    for f in d.glob('*.c'):
        if f.stem not in unmatched:
            continue
        m = re.search(r'profile "([^"]+)"', f.read_text(errors='replace')[:200])
        profs = [m.group(1)] if m else []
        profs += [p for p in [(led.get(f.stem) or {}).get('profile'), '2.0/sp1p5', '1.2/sp3'] if p and p not in profs]
        best = None
        for p in profs:
            r = judge(f.stem, f, p)
            if r.get('match'):
                best = (0, p); break
            if r.get('status') == 'near' and (best is None or r['diffs'] < best[0]):
                best = (r['diffs'], p)
        if best and best[0] == 0:
            print(f'{f.stem}: already MATCH ({best[1]})', flush=True)
        elif best and best[0] <= a.max_diffs:
            todo.append((best[0], f, best[1]))
todo.sort(key=lambda t: t[0])
print(f'{len(todo)} near misses <= {a.max_diffs} diffs to permute', flush=True)
won = []
for dif, f, prof in todo:
    c = P / f.name; shutil.copy2(f, c)
    out = subprocess.run([sys.executable, str(HERE / 'permrand.py'), f.stem, str(c), '--n', str(a.n), '-j', str(a.j),
                          '--profile', prof], capture_output=True, text=True).stdout
    b = c.with_suffix('.best.c')
    ok = b.exists() and judge(f.stem, b, prof).get('match')
    print(f'{f.stem}: {dif} diffs -> {"MATCH" if ok else (out.strip().splitlines() or ["?"])[-1]}', flush=True)
    if ok:
        shutil.copy2(f, str(f) + '.prev'); shutil.copy2(b, f); won.append(f.stem)
    for t in P.glob(f'{f.name}.*.tmp.c'):
        t.unlink()
print(f'nearperm: {len(won)} new matches: {" ".join(won)}')
