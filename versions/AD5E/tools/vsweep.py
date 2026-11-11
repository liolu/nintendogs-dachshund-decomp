"""vsweep.py [--src DIR] [--max-diffs N] [-j N] [--flags="F1;F2;..."] [names]  (run from the game dir)

Compiler VERSION sweep: judges every unmatched function's best draft (build/hunt/best/NAME.c, or --src DIR)
against EVERY installed mwccarm version (tools/mwccarm/<family>/<ver>) x a set of extra flags.
The normal judge only tries 2.0/sp1p5 and 1.2/sp2p3/sp3: register-permutation / scheduling near misses are
often a different compiler build. Phase A keeps drafts that are near (<= --max-diffs) at their default profile,
phase B sweeps them. Results: build/hunt/vsweep.json (best per function) + build/hunt/vsweep/NAME.c for matches
(first line of each match file is a comment with the winning profile). Prints a per-profile match histogram:
a version that wins several functions is probably the game's real compiler.
"""
import argparse, json, os, sys, time
from multiprocessing import Pool
from pathlib import Path
sys.path.insert(0, str(Path(__file__).resolve().parent))
import hunt  # noqa: E402

ROOT = Path.cwd()
MWCC = Path(__file__).resolve().parents[2] / 'tools' / 'mwccarm'


def versions():
    out = []
    for fam in ('2.0', '1.2', 'dsi'):
        d = MWCC / fam
        if d.is_dir():
            out += [f'{fam}/{v.name}' for v in sorted(d.iterdir()) if (v / 'mwccarm.exe').exists()]
    return out


def job(j):
    name, src, prof = j
    r = hunt._judge((name, src, prof))
    return name, prof, r.get('status'), r.get('diffs'), r.get('size'), r.get('target_size')


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--src', default='build/hunt/best')
    ap.add_argument('--max-diffs', type=int, default=60)
    ap.add_argument('-j', type=int, default=12)
    ap.add_argument('--flags', default=';-O4,s;-O3,p;-O2,p;-O1,p;-inline auto;-inline off',
                    help='extra-flag variants separated by ; (empty item = no extra flag), pass as --flags="..."')
    ap.add_argument('names', nargs='*')
    a = ap.parse_args()
    have = hunt.matched_names()
    unmatched = hunt.unmatched_sizes()
    src = Path(a.src)
    names = a.names or sorted(n for n in unmatched if n not in have and (src / f'{n}.c').exists())
    drafts = {n: (src / f'{n}.c').read_text(encoding='utf-8', errors='replace') for n in names}
    t0 = time.time()
    with Pool(a.j, initializer=hunt._init, initargs=(True,)) as pool:
        # phase A: default profile
        res = pool.map(job, [(n, drafts[n], '2.0/sp1p5') for n in names], chunksize=1)
        keep = [n for n, p, st, d, s, ts in res if st in ('near', 'match') and (d or 0) <= a.max_diffs]
        print(f'phase A: {len(names)} drafts, {len(keep)} near <= {a.max_diffs} ({time.time() - t0:.0f}s)', flush=True)
        profs = [f'{v} {f}'.strip() for v in versions() for f in a.flags.split(';')]
        jobs = [(n, drafts[n], p) for n in keep for p in profs]
        print(f'phase B: {len(jobs)} judges ({len(profs)} profiles)', flush=True)
        best, wins = {}, {}
        out = ROOT / 'build' / 'hunt' / 'vsweep'; out.mkdir(parents=True, exist_ok=True)
        for k, (n, p, st, d, s, ts) in enumerate(pool.imap_unordered(job, jobs, chunksize=4)):
            sc = 0 if st == 'match' else (d if st == 'near' else 10 ** 6)
            if n not in best or sc < best[n]['score']:
                best[n] = {'profile': p, 'status': st, 'diffs': d, 'score': sc}
            if st == 'match':
                wins.setdefault(p, []).append(n)
                if not (out / f'{n}.c').exists():
                    (out / f'{n}.c').write_text(f'/* vsweep match: {p} */\n' + drafts[n], encoding='utf-8')
                    print(f'MATCH {n} with {p}', flush=True)
            if k % 500 == 0:
                print(f'  {k}/{len(jobs)} {time.time() - t0:.0f}s', flush=True)
    (ROOT / 'build' / 'hunt' / 'vsweep.json').write_text(json.dumps({'best': best, 'wins': wins}, indent=1), encoding='utf-8')
    print('== wins per profile')
    for p, ns in sorted(wins.items(), key=lambda kv: -len(kv[1])):
        print(f'{len(ns):3} {p}: {" ".join(sorted(set(ns)))}')
    print('== best per function')
    for n, b in sorted(best.items(), key=lambda kv: kv[1]['score']):
        print(f'{n:16} {b["status"]:6} {b["diffs"]} {b["profile"]}')
    print(f'done {time.time() - t0:.0f}s', flush=True)


if __name__ == '__main__':
    main()
    os._exit(0)
