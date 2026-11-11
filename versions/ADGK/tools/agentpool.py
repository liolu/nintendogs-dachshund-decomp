"""agentpool.py : read-only census of what is left to hand out to agents (run from the game dir).

Prints the compile/size functions not yet in build/hunt/assigned.json per size band (agentrefill bands) and the near
misses not yet in near_assigned.json per diff bucket (agentnear). Use it before a round to choose agentrefill vs
agentnear --max-diffs N, instead of probing agentdeal (which marks names as assigned)."""
import json
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import hunt  # noqa: E402

H = hunt.HUNT
assigned = set(json.loads((H / 'assigned.json').read_text())) if (H / 'assigned.json').exists() else set()
near_done = set(json.loads((H / 'near_assigned.json').read_text())) if (H / 'near_assigned.json').exists() else set()
led, have, sizes = hunt.load(), hunt.matched_names(), hunt.unmatched_sizes()
unmatched = set(sizes) - have

bands = [(40, 170), (171, 300), (301, 500), (501, 800), (801, 1200), (1201, 2000), (2001, 10 ** 9)]
cnt = {b: [0, 0] for b in bands}  # [free, assigned]
for n in unmatched:
    e = led.get(n) or {}
    if (e.get('status') not in ('compile', 'size') or e.get('parked') or n.startswith('__sinit')
            or '-thumb' in (e.get('profile') or '') or (sizes[n] <= 28 and 'ov123' in n)):  # same filter as agentdeal
        continue
    for b in bands:
        if b[0] <= sizes[n] <= b[1]:
            cnt[b][n in assigned] += 1
print('compile/size by size band (free / already handed out):')
for b in bands:
    print(f'  {b[0]:>5}-{b[1] if b[1] < 10 ** 9 else "...":<5} {cnt[b][0]:>5} / {cnt[b][1]}')

best = {}
for res in H.glob('*/all/results.json'):
    for name, r in json.loads(res.read_text()).items():
        k = r.get('k') or [9e9, 9e9]
        if r.get('status') == 'near' and name in unmatched and name not in near_done and k[1] > 0:
            best[name] = min(best.get(name, 9e9), k[1])
print('near misses not yet handed out, by diff count:')
for lo, hi in [(1, 9), (10, 20), (21, 40), (41, 80), (81, 10 ** 9)]:
    print(f'  {lo:>3}-{hi if hi < 10 ** 9 else "...":<4} {sum(lo <= d <= hi for d in best.values()):>5}')
print(f'unmatched total {len(unmatched)}')
