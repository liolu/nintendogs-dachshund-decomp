"""agentrelease.py ROUND : give back to the agentdeal pool the names an agent was handed but never tried.

ROUND = build/hunt/<round> with listK.txt + aK/ (agentrefill.sh layout). A name of listK.txt with no aK/NAME.c
(agent hit a rate limit, quit early, ran out of time) is removed from build/hunt/assigned.json, so the next
agentdeal/agentrefill call hands it out again. Run from the game dir. Prints the released names."""
import json
import sys
from pathlib import Path

R = Path(sys.argv[1])
A = Path('build/hunt/assigned.json')
assigned = json.loads(A.read_text())
untried = set()
for lst in R.glob('list*.txt'):
    d = R / ('a' + lst.stem[4:])
    for name in lst.read_text().split():
        if not (d / f'{name}.c').exists():
            untried.add(name)
keep = [n for n in assigned if n not in untried]
A.write_text(json.dumps(keep))
print(f'{len(assigned) - len(keep)} released:', ' '.join(sorted(untried & set(assigned))))
