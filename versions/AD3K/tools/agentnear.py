"""agentnear.py ROUND [--per 15] [--max-diffs 9] [--lists N] : hand out the near misses of past agent rounds.

Reads every build/hunt/*/all/results.json (written by agentround/fj), keeps the functions still unmatched whose best
judge was `near` with at most --max-diffs differing lines, best first, minus the ones already handed out by this
tool (build/hunt/near_assigned.json). Writes N lists build/hunt/ROUND/listK.txt (K = next free indexes, agentrefill
layout) and copies the best file of each function into ROUND/aK/NAME.c as the agent's starting point (the file
header says the profile and diff count). Prints the K values. Run from the game dir.
Near-miss rounds matched ~44% (1-9 diffs) against ~35% for fresh 500-800 B compile/size functions."""
import argparse
import json
import shutil
import sys
from pathlib import Path

HERE = Path(__file__).resolve().parent
sys.path.insert(0, str(HERE))
import hunt  # noqa: E402

ap = argparse.ArgumentParser()
ap.add_argument('round'); ap.add_argument('--per', type=int, default=15)
ap.add_argument('--max-diffs', type=int, default=9); ap.add_argument('--lists', type=int, default=1)
ap.add_argument('--again', action='store_true', help='ignore near_assigned.json, skip only the names of this round (r32)')
a = ap.parse_args()

H = Path('build/hunt'); R = H / a.round; R.mkdir(parents=True, exist_ok=True)
NA = H / 'near_assigned.json'
done = set(json.loads(NA.read_text())) if NA.exists() else set()
assigned = set(done)
if a.again:
    done = {n for f in R.glob('list*.txt') for n in f.read_text().split()}
unmatched = set(hunt.unmatched_sizes()) - hunt.matched_names()
best = {}  # name -> (diffs, file, profile)
for res in H.glob('*/all/results.json'):
    for name, r in json.loads(res.read_text()).items():
        k = r.get('k') or [9e9, 9e9]
        if r.get('status') != 'near' or name not in unmatched or name in done or not 0 < k[1] <= a.max_diffs:
            continue
        f = res.parent / f'{name}.c'
        if f.exists() and (name not in best or k[1] < best[name][0]):
            best[name] = (k[1], f, r.get('profile', ''))
order = sorted(best, key=lambda n: best[n][0])
K = 1
for i in range(a.lists):
    take = order[i * a.per:(i + 1) * a.per]
    if not take:
        break
    while (R / f'list{K}.txt').exists():
        K += 1
    d = R / f'a{K}'; d.mkdir(exist_ok=True)
    (R / f'list{K}.txt').write_text(''.join(n + '\n' for n in take), newline='\n')
    for n in take:
        dif, f, prof = best[n]
        dst = d / f'{n}.c'
        dst.write_text(f'/* near start: {dif} diffs with profile "{prof}" */\n' + f.read_text(errors='replace'))
        done.add(n)
    print(K)
NA.write_text(json.dumps(sorted(done | assigned)))
print(f'{len(order)} near misses <= {a.max_diffs} diffs available before this call', file=sys.stderr)
