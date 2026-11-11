"""Family 'hidden arg0 + strh field': push {r4,lr}; mov r4,r0; add r1,r4,#B; mov r2,#K; strh r2,[r1,#O]; bl A; mov r0,r4; bl B.
Writes build/hunt/fam3/NAME.c for every unmatched function of sizes 40/44 with that shape."""
import json, re, subprocess, sys, os
sys.path.insert(0, '../../studio/gametools'); import hunt
sz = hunt.unmatched_sizes(); done = hunt.matched_names()
n_w = 0
for n, s in sz.items():
    if n in done or s not in (36, 40, 44, 48): continue
    try: d = json.loads(subprocess.run(['python', '../../studio/gametools/workbench.py', 'info', n], capture_output=True, text=True).stdout)
    except Exception: print('info failed', n); continue
    L = [l.strip() for l in d['asm'].split('\n')[1:] if l.strip() and not l.strip().startswith('arm_func_end')]
    t = '\n'.join(L)
    m = re.match(r'push \{r4, lr\}\nmov r4, r0\n(?:add r1, r4, #(0x[0-9a-f]+)\n)?(?:mov r2, #(\S+)|ldr r2, (\S+))\nstr(h|b)? r2, \[(r1|r4), #(0x[0-9a-f]+)\]\nbl (\w+)\nmov r0, r4\nbl (\w+)\npop \{r4, lr\}\nbx lr', t)
    if not m: continue
    base, k, lit, w, reg, off, A, B = m.groups()
    if lit:
        ws = re.findall(r'\.word (\S+)', t)
        if not ws: continue
        k = ws[0]
    o = int(off, 16) + (int(base, 16) if base else 0)
    ty = {'h': 's16', 'b': 'u8', None: 's32'}[w]
    c = (f'#include "m2c.h"\n\nextern void {A}(void *);\nextern void {B}(void *);\n\n'
         f'void {n}(void *arg0) {{\n    *({ty} *)((u8 *)arg0 + {hex(o)}) = {k};\n    {A}(arg0);\n    {B}(arg0);\n}}\n')
    open(f'build/hunt/fam3/{n}.c', 'w').write(c); n_w += 1
print('wrote', n_w)
