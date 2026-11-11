"""asmconv over every unmatched function using an asm-only instruction (swp/swpb, swi, mrs...). Matches -> swp/a1/NAME.c."""
import os, sys, json
sys.path.insert(0, '../../studio/gametools'); sys.path.insert(0, '../../studio/gametools/prototypes')
import hunt, asmconv
hunt._init()
done = hunt.matched_names(); res = {}
for n, s in sorted(hunt.unmatched_sizes().items()):
    if n in done: continue
    try: src = asmconv.convert(n)
    except Exception as e: print(n, 'error', e); continue
    if not src: continue
    r = hunt._judge((n, src, None))
    print(f"{n:40} {r.get('status')} {r.get('diffs')} {r.get('size')}/{r.get('target_size')} {r.get('profile')}", flush=True)
    if r.get('match'):
        open(f'build/hunt/swp/a1/{n}.c', 'w').write(src)
        res[n] = {'status': 'match', 'match': True, 'profile': r.get('profile')}
json.dump(res, open('build/hunt/swp/a1/results.json', 'w'), indent=1)
print('matches', len(res)); sys.stdout.flush(); os._exit(0)
