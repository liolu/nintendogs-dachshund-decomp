"""relcheck.py NAME FILE.c [PROFILE] : compile FILE.c and compare the order/addresses of its .text ABS32 relocations
(literal pool) with the target's .word list. The judge MASKS pool words (and bl targets), so a judge MATCH with a
different pool order / addend / swapped arguments links to a different ROM ("ROM differs", silently undone by
workbench commit). Run it on every match before submitting. In protorun it runs only when the start C matches.
Technique id: pool-check. Origin: TnJ build/hunt/w/relcheck.py (func_02032c40 `b = a = 0`, func_02040094 +0x18)."""
import json, re, subprocess, sys
from pathlib import Path
sys.path.insert(0, str(Path(__file__).resolve().parent))
from project import ROOT  # noqa: E402

HERE = Path(__file__).resolve().parent


def symbols():
    syms = {}
    for f in sorted(ROOT.glob('config/*/*/symbols.txt')) + sorted(ROOT.glob('config/*/*/*/symbols.txt')):
        for line in open(f, encoding='utf-8', errors='replace'):
            m = re.match(r'(\S+)\s.*addr:0x([0-9a-fA-F]+)', line)
            if m: syms.setdefault(m.group(1), int(m.group(2), 16))
    return syms


def check(name, src, prof):
    """(same?, target pool, candidate relocs, message)"""
    import workbench as wb
    objbytes, msg, obj, tmp = wb.compile_one(src, prof)
    if obj is None: return None, [], [], 'compile failed: ' + msg[:300]
    r = subprocess.run(['arm-none-eabi-objdump', '-r', str(obj)], capture_output=True, text=True)
    cand, sec = [], ''
    for line in r.stdout.splitlines():
        ms = re.match(r'RELOCATION RECORDS FOR \[(\S+)\]', line)
        if ms: sec = ms.group(1)
        m = re.match(r'([0-9a-f]+)\s+R_ARM_ABS32\s+(\S+)', line)
        if m and sec == '.text': cand.append(m.group(2))
    info = json.loads(subprocess.run([sys.executable, str(HERE / 'workbench.py'), 'info', name], capture_output=True,
                                     text=True, cwd=ROOT).stdout.lstrip('﻿'))
    if not (info.get('asm') or '').strip():
        return None, [], cand, 'no target asm: the function is already matched (relcheck is for candidates)'
    words = [w for w in re.findall(r'\.L_[0-9a-f]+: \.word (\S+)', info['asm']) if not w.startswith('0x')]
    syms = symbols()

    def addr(expr):
        m = re.match(r'(.+?)([+-]0x[0-9a-fA-F]+)?$', expr)
        a = syms.get(m.group(1))
        if a is None:
            m2 = re.match(r'0x([0-9a-fA-F]+)$', m.group(1)); a = int(m2.group(1), 16) if m2 else None
        return None if a is None else a + (int(m.group(2), 16) if m.group(2) else 0)
    ta = [addr(w) for w in words]
    ca = [addr(c) for c in cand if not c.startswith('.')]
    return ta == ca, words, cand, ''


def proto_run(ctx):
    if not ctx['base'].get('match'): return {'result': 'skip', 'note': 'start C does not match yet'}
    same, words, cand, msg = check(ctx['name'], ctx['src'], ctx['profile'])
    if same is None: return {'result': 'skip', 'note': msg[:200]}
    if same: return {'result': 'ok', 'diffs': 0, 'profile': ctx['profile'], 'note': 'pool identical'}
    return {'result': 'fail', 'diffs': 0, 'profile': ctx['profile'], 'note': msg or f'POOL DIFFERS target {words} cand {cand}'[:200]}


if __name__ == '__main__':
    name, path = sys.argv[1], sys.argv[2]
    prof = sys.argv[3] if len(sys.argv) > 3 else '2.0/sp1p5'
    same, words, cand, msg = check(name, open(path, encoding='utf-8').read(), prof)
    if msg: print(msg); sys.exit(1)
    print('target pool :', words)
    print('cand relocs :', cand)
    print('SAME' if same else 'DIFFERENT')
