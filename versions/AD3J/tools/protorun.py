"""protorun.py - run EVERY prototype (and every functional tool that offers it) on one function, BEFORE working on it
by hand, and log each result in the function's technique journal (techlog.py, technique id `proto:<tool>`).
Run from a project dir. Outputs: build/hunt/proto/NAME/<tool>.c (only variants that beat the starting C).

  protorun.py NAME [FILE.c] [-p PROFILE] [--only a,b] [--skip a,b] [--list] [--by WHO]
        FILE.c defaults to the best C so far (build/hunt/best, near, drafts; else the m2c starting draft)
  protorun.py --list                 what would run (prototypes/*.py and gametools/*.py that define proto_run)
  protorun.py promote TOOL           prototypes/TOOL.py -> gametools/TOOL.py, only if the journals hold at least one
                                     `ok` for proto:TOOL (a real match); then mark it "functional" in TECHNIQUES.md

A tool joins the run by defining `proto_run(ctx) -> dict`. ctx: name, src, profile, base (judge result of src),
judge(src, profile=None) -> result dict, out (Path of this tool's output .c), log(text).
It returns {'result': 'ok'|'better'|'fail'|'skip', 'diffs': N, 'profile': P, 'src': best C or None, 'note': '...'}.
ok = match, better = fewer diffs than base, skip = does not apply to this function (not logged as a failure).

User rule (2026-11-01): at most ONE run per hour on this PC, all games, agents and --only runs included (a run costs
about 2 min and parallel runs overloaded the PC). Another run in that hour is refused, exit code 2. --list and promote
are not limited. The clock is the date of the file `decomp ds/protorun.last`.
"""
import argparse, importlib.util, re, shutil, sys, time, traceback
from pathlib import Path

HERE = Path(__file__).resolve().parent
PROTO = HERE / 'prototypes'
LAST_RUN = HERE.parents[1] / 'protorun.last'
MIN_INTERVAL = 3600
sys.path.insert(0, str(HERE))
import hunt  # noqa: E402
import techlog  # noqa: E402


def claim_hourly_run():
    """refuse the run if another one started less than MIN_INTERVAL ago, else start the clock."""
    if LAST_RUN.exists():
        left = LAST_RUN.stat().st_mtime + MIN_INTERVAL - time.time()
        if left > 0:
            print(f'protorun refused: max one run per hour, next one in {left / 60:.0f} min. Work on the function by hand.')
            sys.stdout.flush()
            sys.exit(2)
    LAST_RUN.write_text(time.strftime('%Y-%m-%d %H:%M:%S\n'), encoding='utf-8')


def runners():
    """[(tool, path, 'prototype'|'functional')] of every file defining proto_run, prototypes first."""
    out = []
    for kind, d in (('prototype', PROTO), ('functional', HERE)):
        for p in sorted(d.glob('*.py')):
            if p.name in ('protorun.py',): continue
            try: txt = p.read_text(encoding='utf-8', errors='replace')
            except OSError: continue
            if re.search(r'^def proto_run\(', txt, re.M): out.append((p.stem, p, kind))
    return out


def load(path):
    spec = importlib.util.spec_from_file_location(f'proto_{path.stem}', path)
    mod = importlib.util.module_from_spec(spec); spec.loader.exec_module(mod)
    return mod


def score(r):
    if r.get('match'): return 0
    if r.get('status') in ('near', 'size'):
        return (r.get('diffs') or 0) + 1000 * abs((r.get('size') or 0) - (r.get('target_size') or 0)) + 1
    return 10 ** 9


def cmd_run(a):
    name = a.name
    hunt._init()
    p = hunt.find_c(name, a.file)
    if p is None:
        hunt._module(name); src, _ = hunt.WB.starting_draft(name); src = src or ''
        origin = 'm2c starting draft'
    else:
        src = p.read_text(encoding='utf-8', errors='replace'); origin = str(p)
    led = hunt.load().get(name, {})
    prof = a.p or led.get('profile')
    judge = lambda s, pr=None: hunt._judge((name, s, pr if pr is not None else prof))  # noqa: E731
    base = judge(src)
    print(f'{name}: start = {origin}: {base["status"]} {base.get("diffs")} diffs ({base.get("profile")})', flush=True)
    out_dir = hunt.HUNT / 'proto' / name
    only = set(a.only.split(',')) if a.only else None
    skip = set(a.skip.split(',')) if a.skip else set()
    for tool, path, kind in runners():
        if (only and tool not in only) or tool in skip: continue
        t0 = time.time()
        try:
            mod = load(path)
            ctx = dict(name=name, src=src, profile=base.get('profile') or prof, base=base, judge=judge,
                       out=out_dir / f'{tool}.c', log=lambda m, t=tool: print(f'   [{t}] {m}', flush=True))
            r = mod.proto_run(ctx) or {'result': 'skip', 'note': 'returned nothing'}
        except Exception as e:  # noqa: BLE001  (a broken prototype must not stop the others)
            r = {'result': 'fail', 'note': 'CRASH ' + repr(e)[:150]}
            traceback.print_exc(limit=2)
        res = r.get('result', 'fail')
        f = None
        if r.get('src') and res in ('ok', 'better'):
            out_dir.mkdir(parents=True, exist_ok=True); f = out_dir / f'{tool}.c'
            f.write_text(r['src'], encoding='utf-8', newline='\n')
        print(f'{tool:14s} {kind:10s} {res:6s} {r.get("diffs", "")!s:>5} {r.get("profile") or "":16s} '
              f'{time.time() - t0:5.0f}s {r.get("note", "")[:100]}' + (f' -> {f}' if f else ''), flush=True)
        if res != 'skip' or a.log_skips:
            techlog.add(name, f'proto:{tool}', res, r.get('diffs'), r.get('profile'), f, r.get('note'), a.by)
    print(f'journal: {techlog.path(name)}')


def cmd_promote(tool):
    src = PROTO / f'{tool}.py'
    if not src.exists(): raise SystemExit(f'no prototype {src}')
    oks = [fn for fn, es in techlog.all_entries().items() for e in es if e['tech'] == f'proto:{tool}' and e['result'] == 'ok']
    if not oks: raise SystemExit(f'proto:{tool} has no `ok` in any journal of this game: it stays a prototype')
    dst = HERE / f'{tool}.py'
    if dst.exists(): raise SystemExit(f'{dst} already exists')
    shutil.move(src, dst)
    print(f'promoted {tool} ({len(oks)} matches: {", ".join(oks[:6])}) -> {dst}\n'
          f'now move its line in TECHNIQUES.md from "Prototypes" to "Functional tools"')


def main():
    if len(sys.argv) > 2 and sys.argv[1] == 'promote':
        return cmd_promote(sys.argv[2])
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('name', nargs='?'); ap.add_argument('file', nargs='?'); ap.add_argument('-p')
    ap.add_argument('--only'); ap.add_argument('--skip'); ap.add_argument('--list', action='store_true')
    ap.add_argument('--by'); ap.add_argument('--log-skips', action='store_true')
    a = ap.parse_args()
    if a.list or not a.name:
        for tool, path, kind in runners(): print(f'{tool:14s} {kind:10s} {path}')
        return
    claim_hourly_run()
    cmd_run(a)


if __name__ == '__main__':
    main()
    sys.stdout.flush()
    import os; os._exit(0)  # multiprocessing pools of prototypes can hang the exit on Windows
