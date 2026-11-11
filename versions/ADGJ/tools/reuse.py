"""reuse.py scan|apply : functions a game can gain with no AI, from the clones of our other games and the external decomps.

    python ../../studio/gametools/reuse.py scan      # dry-run of clone_match --other-games and donor_match: changes no source
    python ../../studio/gametools/reuse.py apply     # donor_match, then clone_match, each kept only after VERIFY PASSED; local commits

Run from the game dir, at Idle priority (it and its compilers). `scan` writes build/reuse/estimate.json, which the Studio reads for
the grey part of the progress bar and the time per game: gain and bytes are the names both tools found, without the overlap;
eta_s comes from the source files (the link and the verify take the time, not the functions gained) until `apply` has measured it.
`apply` leaves a game alone when src/, include/ or config/ have changes: a commit would take someone's unfinished work along."""
import json, re, subprocess, sys, time
from pathlib import Path

G = Path(__file__).resolve().parent
OUT = Path('build/reuse/estimate.json')
SYM = re.compile(r'^(\S+) kind:function\(\w+,size=0x([0-9a-f]+)\)', re.M)
CLONE_HIT = re.compile(r'^\s+(\S+) <- (\S+) \((\w+), \d+ bytes\)', re.M)
DONOR_HIT = re.compile(r'^\s*match \d+: (\S+) <- (\S+)', re.M)
BASE_S, FILE_S = 45, 0.12  # one verify pass: dawn-of-heroes 88 files 55 s, rayman-rr 3885 files 466 s, club-house-games 20615 files > 2900 s


def idle():
    if sys.platform == 'win32':
        import ctypes
        ctypes.windll.kernel32.SetPriorityClass(ctypes.windll.kernel32.GetCurrentProcess(), 0x40)


def git(*a):
    return subprocess.run(['git', *a], capture_output=True, text=True, errors='replace').stdout


def git_ok(*a) -> bool:
    r = subprocess.run(['git', *a], capture_output=True, text=True, errors='replace')
    if r.returncode:
        print(f"git {a[0]} a echoue : {(r.stderr or r.stdout).strip()[-400:]}", flush=True)
    return r.returncode == 0


GENERATED = {'include/m2c_protos.h'}  # rewritten by auto_match / gen_context: never someone's unfinished work


def changes():
    """Real changes in src, include, config: not the generated headers, not a file that only differs by its line ends."""
    out = []
    for l in git('status', '--porcelain', '--', 'src', 'include', 'config').splitlines():
        f = l[3:].strip().strip('"')
        if not l.strip() or f in GENERATED:
            continue
        if l[:2].strip() == 'M' and subprocess.run(['git', 'diff', '--ignore-cr-at-eol', '--quiet', 'HEAD', '--', f]).returncode == 0:
            continue
        out.append(l)
    return out


def run(*a):
    """Runs a tool, prints its output as it comes (the Studio's log), returns (exit code, output, seconds)."""
    t0 = time.time()
    p = subprocess.Popen([sys.executable, *map(str, a)], stdout=subprocess.PIPE, stderr=subprocess.STDOUT, text=True, errors='replace')
    out = []
    for line in p.stdout:
        print(line, end='', flush=True)
        out.append(line)
    return p.wait(), ''.join(out), round(time.time() - t0)


def load():
    try:
        return json.loads(OUT.read_text(encoding='utf-8'))
    except (OSError, ValueError):
        return {}


def save(d):
    OUT.parent.mkdir(parents=True, exist_ok=True)
    OUT.write_text(json.dumps(d, indent=1), encoding='utf-8', newline='\n')


def sizes():
    out = {}
    for p in Path('config').glob('*/arm9/symbols.txt'):
        out.update((n, int(s, 16)) for n, s in SYM.findall(p.read_text(encoding='utf-8', errors='replace')))
    return out


def blocked():
    c = changes()
    return f'{len(c)} changements non commites dans src, include, config' if c else ''


def scan():
    t0 = time.time()
    r1, o1, _ = run(G / 'clone_match.py', '--other-games', '--dry-run')
    r2, o2, _ = run(G / 'donor_match.py', '--dry-run', '-j', '4')
    if r1 or r2:  # a tool that failed (or found the game busy) measured nothing: keep the last estimate
        print(f"reuse scan: clone_match code {r1}, donor_match code {r2} : estimation precedente gardee", flush=True)
        return 1
    # hits: what each function would be copied from; the Studio puts them in the level Portable
    hits = {n: ['donor:' + repo, '', ''] for n, repo in DONOR_HIT.findall(o2)}
    for n, frm, kind in CLONE_HIT.findall(o1):
        g, _, f = frm.rpartition(':')
        hits[n] = [g, f, ''] if g else ['clone:', f, '']
    clones, donors = {m[0] for m in CLONE_HIT.findall(o1)}, {m[0] for m in DONOR_HIT.findall(o2)}
    size = sizes()
    names = clones | donors
    files = git('ls-files', 'src').count('\n')
    old = load()
    pass_s = old.get('pass_s') or round(BASE_S + FILE_S * (files + len(names)))
    d = {'at': round(time.time()), 'gain': len(names), 'clones': len(clones), 'donors': len(donors),
         'bytes': sum(size.get(n, 0) for n in names), 'files': files, 'pass_s': pass_s, 'measured': bool(old.get('measured')),
         'eta_s': pass_s * ((1 if donors else 0) + (1 if clones else 0)), 'scan_s': round(time.time() - t0),
         'blocked': blocked(), 'last': old.get('last'), 'hits': hits}
    save(d)
    print(f"reuse scan: +{d['gain']} functions ({d['clones']} clones, {d['donors']} donors, {d['bytes']} bytes), about {d['eta_s']} s", flush=True)


def apply():
    """Takes this game's pipeline lock for the whole run (donor_match, its commit, clone_match): the Studio's
    scheduler and the other pipelines see the game busy; donor_match and clone_match inherit the lock."""
    sys.path.insert(0, str(G))
    from pipeline_lock import pipeline_lock
    with pipeline_lock('reuse'):
        return _apply()


def _apply():
    d = load()
    why = blocked()
    if why:
        d['blocked'] = why
        save(d)
        print('reuse apply: skipped,', why, flush=True)
        return 0
    head = git('rev-parse', 'HEAD').strip()
    t0 = time.time()
    verify_s = []
    gained = 0
    rc, text, s = run(G / 'donor_match.py', '-j', '4')
    if rc:  # crashed or the game is busy (pipeline lock): the estimate stays, the Studio shows the step failed
        print(f'reuse apply: donor_match code {rc}, rien de commite', flush=True)
        return 1
    m = re.search(r'OK: (\d+) functions reused', text)
    if m and 'VERIFY PASSED' in text and changes():
        if not (git_ok('add', 'src', 'include', 'config') and git_ok('reset', '-q', '--', *GENERATED)
                and git_ok('commit', '-q', '-m', f'donors: {m.group(1)} functions reused from other decompilations')):
            print('reuse apply: commit des donneurs echoue', flush=True)
            return 1
        gained += int(m.group(1))
        verify_s.append(s)
    elif changes():
        print('reuse apply: donor_match left changes, not committed', flush=True)
        return 1
    # the donor matches are new sources for the clones: they go second
    rc, text, s = run(G / 'clone_match.py', '--other-games', '--commit')
    if rc:
        print(f'reuse apply: clone_match code {rc}', flush=True)
        return 1
    m = re.search(r'OK: (\d+) functions matched by cloning', text)
    if m and int(m.group(1)):
        gained += int(m.group(1))
        verify_s.append(s)
    if changes():
        print('reuse apply: clone_match left changes', flush=True)
        return 1
    d.update(gain=0, clones=0, donors=0, bytes=0, eta_s=0, blocked='', hits={},
             last={'at': round(time.time()), 'gained': gained, 'seconds': round(time.time() - t0),
                   'commits': git('log', '--oneline', f'{head}..HEAD').count('\n')})
    if verify_s:
        d.update(pass_s=max(verify_s), measured=True)
    save(d)
    print(f"reuse apply: +{gained} functions in {d['last']['seconds']} s", flush=True)
    return 0


if __name__ == '__main__':
    idle()
    sys.exit({'scan': scan, 'apply': apply}[sys.argv[1]]() or 0)
