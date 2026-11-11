"""structxfer.py - technique **typed-struct** by transplant: an unmatched function whose techtag family (same SHAPE or
same SKELETON, any game) has matched members written with typed structs gets that member's C file, renamed.
Run from a project dir (projets/<game>). HoM 2026-10-30: 23 judged matches / 57, 16 committed
(cross-game SDK donors kept their whole file -> ROM differs). Reads decomp ds/techtags.sqlite (techtag.py build).

    python ../../studio/gametools/structxfer.py list  [--min 0.6]        # candidates + donors
    python ../../studio/gametools/structxfer.py sweep [--min 0.6] [-j 12] [--names a,b]
        judges every donor transplant on every profile hunt knows; matches -> build/hunt/structxfer/matched/
        (+ results.json, ready for `workbench.py submit-many`), better-than-ledger C -> build/hunt/best/NAME.c,
        one techlog line per function (id typed-struct, by structxfer)

Renames: donor function name -> target; bl targets and pool symbols positionally (donor asm of its own game vs
target asm), like hunt.py sibs. The donor's whole file is kept (its struct typedefs, externs, inlines).
A second variant also remaps the immediates that differ between the aligned donor and target instructions
(struct offsets, pad sizes, constants) in the function and in the [array sizes] before it.
proto_run: same thing for one function inside protorun.py.
"""
import argparse, json, re, sqlite3, sys, time
from multiprocessing import Pool
from pathlib import Path

HERE = Path(__file__).resolve().parent
sys.path.insert(0, str(HERE))
import hunt  # noqa: E402
from project import ROOT  # noqa: E402

DS = HERE.parent.parent  # decomp ds
DB = DS / 'techtags.sqlite'
GAMES = DS / 'projets'
OUT = ROOT / 'build' / 'hunt' / 'structxfer'
_ASM = {}


def game_shapes(game):
    """hunt.shapes() of another game (its own build/<ver>/asm), cached per process."""
    if game in _ASM: return _ASM[game]
    out = {}
    for asm in (GAMES / game / 'build').glob('*/asm'):
        for p in asm.rglob('*.s'):
            for m in hunt.FUNC.finditer(p.read_text(encoding='utf-8', errors='replace')):
                body = m.group(3)
                bls = re.findall(r'^\s+blx?(?:eq|ne|lt|gt|le|ge|hi|ls|cc|cs|mi|pl)?\s+([A-Za-z_]\w*)\s*$', body, re.M)
                bs = re.findall(r'^\s+b(?:eq|ne|lt|gt|le|ge|hi|ls|cc|cs|mi|pl)?\s+([A-Za-z_]\w*)\s*$', body, re.M)
                words = re.findall(r'\.word\s+([A-Za-z_]\w*)', body)
                ins = [l.split('@')[0].split(';')[0].strip() for l in body.split('\n') if l.startswith('    ')]
                out[m.group(1)] = [[], list(dict.fromkeys(bls + [b for b in bs if not b.startswith('_L')])),
                                   list(dict.fromkeys(words)), True, [i for i in ins if i and not i.startswith('.')]]
    _ASM[game] = out
    return out


IMM = re.compile(r'#(-?(?:0x[0-9a-fA-F]+|\d+))')


def imm_map(dins, tins):
    """{donor immediate: target immediate} from the aligned instructions (same shape = same count), only the
    values that always map to the same target value; small values (< 4) are too ambiguous in C text."""
    if len(dins) != len(tins): return {}
    pairs = {}
    for a, b in zip(dins, tins):
        xa, xb = IMM.findall(a), IMM.findall(b)
        if len(xa) != len(xb) or a.split()[0] != b.split()[0]: continue
        for p, q in zip(xa, xb):
            p, q = int(p, 0), int(q, 0)
            if p != q: pairs.setdefault(p, set()).add(q)
    return {p: qs.pop() for p, qs in pairs.items() if len(qs) == 1 and abs(p) >= 4}


def remap_imms(src, mp):
    """replace C integer literals equal to a mapped donor immediate (hex or decimal) by the target value."""
    if not mp: return src
    def rep(m):
        v = int(m.group(0).rstrip('uUlL'), 0)
        return hex(mp[v]) if v in mp else m.group(0)
    return re.sub(r'(?<![\w.])(?:0[xX][0-9a-fA-F]+|\d+)[uUlL]*(?![\w.])', rep, src)


def candidates(min_score, game=None):
    """[(target, score, why, [(donor game, donor name, donor path, donor profile)])] best first."""
    game = game or ROOT.name
    c = sqlite3.connect(DB)
    rows = c.execute("""select f.name, w.score, w.why from funcs f join why w on w.fid = f.id where f.game = ?
                        and f.matched = 0 and w.tag = 'try:typed-struct' and w.score >= ? order by w.score desc, f.size""",
                     (game, min_score)).fetchall()
    out = []
    for name, sc, why in rows:
        m = re.search(r'\b(shape|skel) family ([sk])-(\w+)', why)
        if not m: continue
        col = 'shape' if m.group(2) == 's' else 'skel'
        ds = c.execute(f"select game, name, path, profile from funcs where {col} = ? and matched = 1 and path is not null"
                       " and tags like '% tech:typed-struct %'", (m.group(3),)).fetchall()
        if ds: out.append((name, sc, why, ds))
    return out


def transplant(target, donor, sh_target):
    """[C texts] for target from the donor's file (plain rename, then + immediates remapped), and the donor profile."""
    dgame, dname, dpath, dprof = donor
    f = GAMES / dgame / dpath
    if not f.exists(): return [], dprof
    src = f.read_text(encoding='utf-8', errors='replace')
    src = re.sub(r'^/\* compiler: .*?\*/\n', '', src)
    dsh = game_shapes(dgame).get(dname)
    if dsh is None or target not in sh_target: return [src.replace(dname, target)], dprof
    sh = {dname: dsh, target: sh_target[target]}
    out = hunt.transplant(src, dname, target, sh)
    tsh = game_shapes(ROOT.name).get(target)
    if not tsh: return [out], dprof
    # remap only inside the transplanted function and the type definitions, not in other functions of the file
    mp = imm_map(dsh[4], tsh[4])
    span = hunt.body_span(out, target)
    if not mp or not span: return [out], dprof
    head = out[:span[0]]
    head = re.sub(r'\[([^\]]+)\]', lambda m: '[' + remap_imms(m.group(1), mp) + ']', head)  # struct pads / arrays
    return [out, head + remap_imms(out[span[0]:span[2]], mp) + out[span[2]:]], dprof


def jobs_for(name, donors, sh):
    out, seen = [], set()
    for d in donors:
        srcs, prof = transplant(name, d, sh)
        profs = [prof] + [p for p in hunt._profiles(name) if p != prof]
        for src in srcs:
            if src in seen: continue
            seen.add(src)
            out += [(name, src, p, f'{d[0]}/{d[1]}') for p in profs]
    return out


def _j(job):
    name, src, prof, who = job
    r = hunt._judge((name, src, prof))
    return name, src, prof, who, r


def cmd_list(a):
    for name, sc, why, ds in candidates(a.min):
        print(f'{name:28} {sc:.1f} {len(ds)} donor(s): ' + ', '.join(f'{g}/{n}' for g, n, _, _ in ds[:3]))


def cmd_sweep(a):
    import techlog
    cands = candidates(a.min)
    if a.names: cands = [c for c in cands if c[0] in a.names.split(',')]
    have = hunt.matched_names(); cands = [c for c in cands if c[0] not in have]
    print(len(cands), 'targets', flush=True)
    hunt._init(True); sh = hunt.shapes()
    jobs = []
    for name, _, _, ds in cands:
        hunt._module(name); jobs += jobs_for(name, ds, sh)
    print(len(jobs), 'judges', flush=True)
    best = {}
    with Pool(a.j, initializer=hunt._init, initargs=(True,)) as pool:
        for name, src, prof, who, r in pool.imap_unordered(_j, jobs, chunksize=2):
            s = hunt.score(r)
            if name not in best or s < best[name][0]: best[name] = (s, src, prof, who, r)
    (OUT / 'matched').mkdir(parents=True, exist_ok=True)
    resf = OUT / 'matched' / 'results.json'
    res = json.loads(resf.read_text(encoding='utf-8')) if resf.exists() else {}
    led = hunt.load(); hunt.BEST.mkdir(parents=True, exist_ok=True)
    n_ok = 0
    for name, (s, src, prof, who, r) in sorted(best.items(), key=lambda kv: kv[1][0]):
        st = 'ok' if r.get('match') else ('better' if s < led.get(name, {}).get('score', 10 ** 9) else 'fail')
        print(f'{name:28} {r["status"]:8} {r.get("diffs")} ({prof}) <- {who}', flush=True)
        if r.get('match'):
            n_ok += 1
            (OUT / 'matched' / f'{name}.c').write_text(f'/* compiler: {prof} */\n' + src, encoding='utf-8', newline='\n')
            res[name] = {'status': 'match', 'match': True, 'profile': prof}
        if st in ('ok', 'better'):
            (hunt.BEST / f'{name}.c').write_text(src, encoding='utf-8', newline='\n')
            e = led.setdefault(name, {'tries': 0, 'notes': []})
            e.update(score=s, status=r['status'], best=r.get('diffs'), profile=prof)
            e['notes'].append(time.strftime('%m-%d %H:%M ') + f'structxfer from {who}: {r["status"]} {r.get("diffs")}')
        try: techlog.add(name, 'typed-struct', st, diffs=r.get('diffs'), profile=prof,
                         note=f'structxfer transplant of {who}: {r["status"]}', by='structxfer')
        except Exception: pass
    resf.write_text(json.dumps(res, indent=1), encoding='utf-8')
    hunt.save(led)
    print(f'{n_ok} match(es) / {len(best)} -> {OUT / "matched"}')


def proto_run(ctx):
    name = ctx['name']
    cs = [c for c in candidates(0.3) if c[0] == name]
    if not cs: return {'result': 'skip', 'note': 'no typed-struct family donor'}
    sh = hunt.shapes(); bs, bsrc, bprof = hunt.score(ctx['base']), None, None
    for d in cs[0][3]:
        srcs, prof = transplant(name, d, sh)
        for src, p in ((s, p) for s in srcs for p in dict.fromkeys([prof, ctx['profile']])):
            r = ctx['judge'](src, p); s = hunt.score(r)
            if r.get('match'): return {'result': 'ok', 'diffs': 0, 'profile': p, 'src': src, 'note': f'from {d[0]}/{d[1]}'}
            if s < bs: bs, bsrc, bprof = s, src, p
    if bsrc: return {'result': 'better', 'diffs': bs - 1, 'profile': bprof, 'src': bsrc, 'note': 'donor transplant'}
    return {'result': 'fail', 'diffs': ctx['base'].get('diffs'), 'profile': ctx['profile'], 'note': 'donor transplants not better'}


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    sp = ap.add_subparsers(dest='cmd', required=True)
    p = sp.add_parser('list'); p.add_argument('--min', type=float, default=0.6)
    p = sp.add_parser('sweep'); p.add_argument('--min', type=float, default=0.6); p.add_argument('-j', type=int, default=12)
    p.add_argument('--names')
    a = ap.parse_args()
    {'list': cmd_list, 'sweep': cmd_sweep}[a.cmd](a)
    sys.stdout.flush(); import os; os._exit(0)  # Windows pool hang at exit (see hunt.py)


if __name__ == '__main__':
    main()
