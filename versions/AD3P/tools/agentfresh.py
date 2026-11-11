"""agentfresh.py ROUND [--per 40] [--lists 1] [--max-size 1200] [--census] : deal the functions agents tried least.

agentdeal/agentnear/agentretry skip parked names, but hunt parks after 3 sweep runs ("auto: 3 try runs"), so functions
no agent ever saw stay out of every list (r30). This tool sorts all unmatched functions by the number of agent files
already written for them (build/hunt/*/a*/NAME.c), then by size. Skips: ITCM hand asm, __sinit, this-adjust thunks,
thumb, judged matches rejected at submit ("ROM differs": 0 diffs, an agent cannot fix them), names already dealt by
this tool (fresh_assigned.json). Writes ROUND/listK.txt + ROUND/aK/NAME.c when a near miss exists (best file as the
start, header = profile + diffs), like agentnear. Prints the K values. Run from the game dir."""
import argparse
import glob
import json
import os
import sys
from collections import Counter
from pathlib import Path

HERE = Path(__file__).resolve().parent
sys.path.insert(0, str(HERE))
import hunt  # noqa: E402

ap = argparse.ArgumentParser()
ap.add_argument('round'); ap.add_argument('--per', type=int, default=40); ap.add_argument('--lists', type=int, default=1)
ap.add_argument('--max-size', type=int, default=1200); ap.add_argument('--min-size', type=int, default=0, help='skip tiny stubs (template/fj sweeps catch them)'); ap.add_argument('--census', action='store_true')
ap.add_argument('--untried', action='store_true', help='deal again names dealt before but with no agent file (r32)')
ap.add_argument('--max-tries', type=int, default=0, help='with --untried: also deal again names with up to N agent files')
a = ap.parse_args()

H = Path('build/hunt'); R = H / a.round
FA = H / 'fresh_assigned.json'
done = set(json.loads(FA.read_text())) if FA.exists() else set()
led, sizes = hunt.load(), hunt.unmatched_sizes()
unmatched = set(sizes) - hunt.matched_names()
tries = Counter(os.path.basename(f)[:-2] for f in glob.glob(str(H / '*/a*/*.c')))
if a.untried:
    done = {n for n in done if tries[n] > a.max_tries} | {n for f in R.glob('list*.txt') for n in f.read_text().split()}
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
    parked = str(e.get('parked') or '')
    return not (n in done or n in zero or parked.startswith(('ITCM', 'this-adjust'))
                or n.startswith(('func_01ff', '__sinit')) or '-thumb' in (e.get('profile') or '')
                or (sizes[n] <= 28 and 'ov123' in n) or sizes[n] > a.max_size or sizes[n] < a.min_size)


pool = sorted((n for n in unmatched if usable(n)), key=lambda n: (tries[n], sizes[n]))
if a.census:
    print(f'unmatched {len(unmatched)}, usable <= {a.max_size} B: {len(pool)}, rejected at submit: {len(zero)}')
    for t, c in sorted(Counter(min(tries[n], 3) for n in pool).items()):
        print(f'  agent files {t}{"+" if t == 3 else ""}: {c} funcs')
    sys.exit()
K = 1
for i in range(a.lists):
    take = pool[:a.per * a.lists][i::a.lists]  # round-robin over the head of the pool: least tried first
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
FA.write_text(json.dumps(sorted(done)))
