"""j.py NAME FILE.c [PROFILE...] : compact judge (in-process, via hunt._judge). Prints one summary line
`NAME profile P diffs N size A / B` then only the differing lines. Used by tryc.py. Run from the game dir."""
import sys
from pathlib import Path
sys.path.insert(0, str(Path(__file__).resolve().parent))
import hunt  # noqa: E402

name, path, profs = sys.argv[1], sys.argv[2], [x for x in sys.argv[3:] if x not in ('-p', '--profile')]
src = Path(path).read_text(encoding='utf-8', errors='replace')
hunt._init()
best = None
for p in (profs or [None]):
    r = hunt._judge((name, src, p))
    if best is None or hunt.score(r) < hunt.score(best): best = r
    if r.get('match'): break
r = best
print(f"{name} profile {r.get('profile')} diffs {r.get('diffs')} size {r.get('size')} / {r.get('target_size')}" + (' MATCH' if r.get('match') else f" {r['status']}"))
print('\n'.join(l for l in (r.get('diff') or r.get('errors') or '').split('\n') if ' * ' in l[:6] or r['status'] == 'compile')[:2500])
