"""judgemany.py NAME FILE.c... [-p PROFILE] [-v] : judge many variants of one function in-process (one init, ~1 s
per variant). Prints `file diffs N size A/B [MATCH]`, sorted by diffs; -v prints the diff lines of the best.
Run from the project dir. Technique id: variant-batch. Origin: TnJ build/hunt/w/jm.py (r21-r28, most hand matches)."""
import os, sys
from pathlib import Path
sys.path.insert(0, str(Path(__file__).resolve().parent))
import hunt  # noqa: E402

args = sys.argv[1:]
verbose = '-v' in args
args = [a for a in args if a != '-v']
prof = None
if '-p' in args:
    i = args.index('-p'); prof = args[i + 1]; del args[i:i + 2]
name, files = args[0], args[1:]
hunt._init()
res = []
for f in files:
    src = Path(f).read_text(encoding='utf-8', errors='replace')
    r = hunt._judge((name, src, prof))
    res.append((r.get('diffs') if r.get('diffs') is not None else 9999, f, r))
res.sort(key=lambda t: (t[0], t[1]))
for d, f, r in res:
    print(f"{os.path.basename(f):28s} diffs {r.get('diffs')} size {r.get('size')}/{r.get('target_size')} {r.get('profile')}"
          + (' MATCH' if r.get('match') else ' ' + r['status']))
if verbose and res:
    r = res[0][2]
    print('\n'.join(l for l in (r.get('diff') or r.get('errors') or '').split('\n') if ' * ' in l[:6] or r['status'] == 'compile')[:3000])
sys.stdout.flush()
os._exit(0)
