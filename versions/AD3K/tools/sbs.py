"""sbs.py NAME FILE.c [START END] [-p PROFILE] : side-by-side full target | candidate listing (`*` = differs),
optionally only lines START..END. Technique id: side-by-side. Origin: TnJ build/hunt/w/sbs.py."""
import json, os, subprocess, sys
from pathlib import Path

a = sys.argv[1:]
prof = '2.0/sp1p5'
if '-p' in a:
    i = a.index('-p'); prof = a[i + 1]; del a[i:i + 2]
name, f = a[0], a[1]
s0 = int(a[2]) if len(a) > 2 else 0
s1 = int(a[3]) if len(a) > 3 else 10 ** 9
env = dict(os.environ, WB_FULL='1')
wb = Path(__file__).resolve().parent / 'workbench.py'
r = subprocess.run([sys.executable, str(wb), 'judge', name, f, '--profile', prof], capture_output=True, text=True, env=env)
d = json.loads(r.stdout.lstrip('﻿'))
if 'full' not in d:
    print(d.get('status'), d.get('diffs'), d.get('profile'), str(d.get('errors') or d.get('why') or '')[:500]); sys.exit(0)
T, C = d['full']['t'], d['full']['c']
print(d['status'], d['diffs'], d['size'], d['target_size'])
for i in range(s0, min(s1, max(len(T), len(C)))):
    t = T[i] if i < len(T) else ''
    c = C[i] if i < len(C) else ''
    print(f'{i:4d} {"*" if t != c else " "} {t[:44]:44s} | {c[:44]}')
