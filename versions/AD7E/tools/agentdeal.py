"""agentdeal.py N PER [--max-score S] [--max-size B] [--status compile,size --min-size B] : split the hunt queue into N agent work lists of PER functions.

Writes build/hunt/agentlists/agentI.txt (one NAME per line) and prints, per agent, the line to paste in
AGENT-BRIEF-hom.md ({NAMES}). Functions already handed out are recorded in build/hunt/assigned.json so a relaunch
round gets fresh ones (`--reset` forgets them). Skips parked, matched, 24-byte this-adjust thunks (unsolved) and
names whose asm is an `ldr ip,=0xfffffffc` thunk (size <= 28 in ov123).
Run from the game dir (like hunt.py)."""
import argparse, json, sys
from pathlib import Path
sys.path.insert(0, str(Path(__file__).resolve().parent))
import hunt  # noqa: E402

ap = argparse.ArgumentParser()
ap.add_argument('n', type=int); ap.add_argument('per', type=int)
ap.add_argument('--max-score', type=float, default=45); ap.add_argument('--max-size', type=int, default=400)
ap.add_argument('--reset', action='store_true')
ap.add_argument('--status', help='e.g. compile,size: ignore score, take these statuses by ascending size (pool of near exhausted)')
ap.add_argument('--min-size', type=int, default=0)
a = ap.parse_args()
AS = hunt.HUNT / 'assigned.json'
done = set() if a.reset or not AS.exists() else set(json.loads(AS.read_text()))
led, have, sizes = hunt.load(), hunt.matched_names(), hunt.unmatched_sizes()
a.all = False
rows = hunt.ranked(a, led, have, sizes) if hasattr(a, 'max_size') else []
if a.status:
    want = set(a.status.split(','))
    rows = sorted(((sizes[n], n, e) for _, n, e in rows if e.get('status') in want and sizes[n] >= a.min_size
                   and not n.startswith('__sinit') and '-thumb' not in (e.get('profile') or '')), key=lambda r: r[0])
    a.max_score = 10 ** 9
pick = []
for sc, n, e in rows:
    if sc > a.max_score: break
    if n in done or sizes[n] > a.max_size: continue
    if sizes[n] <= 28 and 'ov123' in n: continue  # this-adjust thunks
    if not (hunt.BEST / f'{n}.c').exists() and hunt.find_c(n) is None: continue
    pick.append(n)
    if len(pick) >= a.n * a.per: break
out = hunt.HUNT / 'agentlists'; out.mkdir(exist_ok=True)
for i in range(a.n):
    part = pick[i::a.n]  # deal round-robin so every agent gets easy and hard ones
    (out / f'agent{i + 1}.txt').write_text('\n'.join(part) + '\n')
    print(f'agent{i + 1}: {", ".join(part)}')
AS.write_text(json.dumps(sorted(done | set(pick))))
print(f'{len(pick)} functions handed out')
