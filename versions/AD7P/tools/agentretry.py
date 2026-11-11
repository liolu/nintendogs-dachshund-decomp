"""agentretry.py ROUND [--per 40] [--lists 5] [--max-size 800] [--no-near] [--census] : second pass on functions earlier agents failed.

agentdeal/agentnear never hand a name out twice, so once the fresh pools are dry (agentpool.py) nothing reaches the
functions agents already tried. This tool ignores assigned.json + near_assigned.json and takes the unmatched functions
by best known diff count (every build/hunt/*/all/results.json, then the ledger), smallest diff first, then smallest
size. Skips: parked, ITCM hand asm (func_01ff*), __sinit, thumb, ov123 <= 28 B thunks, judged matches rejected at
submit ("ROM differs": 0 diffs, an agent cannot fix them), and names already dealt by this tool (retry_assigned.json).
Writes ROUND/listK.txt + ROUND/aK/NAME.c (best file as the start, header = profile + diffs), like agentnear.
Prints the K values. --census prints the buckets and changes nothing. Run from the game dir."""
import argparse
import json
import sys
from pathlib import Path

HERE = Path(__file__).resolve().parent
sys.path.insert(0, str(HERE))
import hunt  # noqa: E402

ap = argparse.ArgumentParser()
ap.add_argument('round'); ap.add_argument('--per', type=int, default=40); ap.add_argument('--lists', type=int, default=1)
ap.add_argument('--max-size', type=int, default=800); ap.add_argument('--census', action='store_true')
ap.add_argument('--no-near', action='store_true', help='only functions with no near miss on file, smallest first')
a = ap.parse_args()

H = Path('build/hunt'); R = H / a.round
RA = H / 'retry_assigned.json'
done = set(json.loads(RA.read_text())) if RA.exists() else set()
led, sizes = hunt.load(), hunt.unmatched_sizes()
unmatched = set(sizes) - hunt.matched_names()
best, zero = {}, set()  # name -> (diffs, file, profile)
for res in H.glob('*/all/results.json'):
    for name, r in json.loads(res.read_text()).items():
        if name not in unmatched:
            continue
        k = r.get('k') or [9e9, 9e9]
        if r.get('status') == 'match' or k[1] == 0:
            zero.add(name)
            continue
        f = res.parent / f'{name}.c'
        if r.get('status') == 'near' and f.exists() and k[1] < best.get(name, (9e9,))[0]:
            best[name] = (k[1], f, r.get('profile', ''))


def usable(n):
    e = led.get(n) or {}
    return not (n in done or n in zero or e.get('parked') or n.startswith(('func_01ff', '__sinit'))
                or '-thumb' in (e.get('profile') or '') or (sizes[n] <= 28 and 'ov123' in n)
                or sizes[n] > a.max_size)


pool = sorted((n for n in unmatched if usable(n)), key=lambda n: (best.get(n, (9e9,))[0], sizes[n]))
if a.no_near:  # no near miss on file = a full rewrite from the asm, not a register puzzle
    pool = [n for n in pool if n not in best]
if a.census:
    print(f'unmatched {len(unmatched)}, usable <= {a.max_size} B: {len(pool)}, rejected at submit: {len(zero)}')
    for lo, hi in [(1, 9), (10, 20), (21, 40), (41, 80), (81, 8e9), (9e9, 9e9)]:
        part = [n for n in pool if lo <= best.get(n, (9e9,))[0] <= hi]
        print(f'  diffs {lo}-{hi}: {len(part)} funcs, {sum(sizes[n] for n in part)} B')
    sys.exit()
K = 1
for i in range(a.lists):
    take = pool[i::a.lists][:a.per]  # round-robin: every list gets easy and hard ones
    if not take:
        break
    while (R / f'list{K}.txt').exists():
        K += 1
    d = R / f'a{K}'; d.mkdir(parents=True, exist_ok=True)
    (R / f'list{K}.txt').write_text(''.join(n + '\n' for n in take), newline='\n')
    for n in take:
        if n in best:
            dif, f, prof = best[n]
            (d / f'{n}.c').write_text(f'/* near start: {dif} diffs with profile "{prof}" */\n' + f.read_text(errors='replace'))
        done.add(n)
    print(K)
RA.write_text(json.dumps(sorted(done)))
