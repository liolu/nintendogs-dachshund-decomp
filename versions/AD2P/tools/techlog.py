"""techlog.py - one technique journal PER FUNCTION: every technique tried on a function, failed or successful.
Run from a project dir (e.g. projets/tom-and-jerry-tales). Files: build/hunt/techlog/NAME.md (one file per function,
so parallel agents never write the same file). Technique ids = the slugs of TECHNIQUES.md (same id = same stats).

  techlog.py history NAME [--files]   EVERYTHING done before on NAME, to read BEFORE working on it: its journal,
                                      the hunt ledger notes, the best C so far (+ its header comment), the missdb
                                      misses, techniques that matched OTHER functions but were never tried on NAME;
                                      --files also lists every NAME*.c under build/hunt (slow on big hunt dirs)
  techlog.py add NAME TECH RESULT [--diffs N] [--profile P] [--file F.c] [--note "..."] [--by WHO]
                                      RESULT: ok (match) | better (fewer diffs) | fail | skip
  techlog.py stats [--min 1]          per technique: functions tried / ok / better / fail (all functions of the game)
                                      -> a prototype with ok results is ready to be promoted (protorun.py promote)
  techlog.py show NAME                the raw journal
"""
import argparse, collections, json, os, re, sys, time
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from project import ROOT  # noqa: E402  (the game: DSD_PROJECT or the current folder)

HUNT = ROOT / 'build' / 'hunt'
LOG = HUNT / 'techlog'
TECHFILE = Path(__file__).resolve().parent / 'TECHNIQUES.md'
RESULTS = ('ok', 'better', 'fail', 'skip')


def path(name):
    return LOG / f'{name}.md'


def add(name, tech, result, diffs=None, profile=None, file=None, note=None, by=None):
    """append one line; used by protorun.py and by hand / agents through the CLI."""
    if result not in RESULTS:
        raise SystemExit(f'RESULT must be one of {RESULTS}')
    LOG.mkdir(parents=True, exist_ok=True)
    p = path(name)
    new = not p.exists()
    cells = [time.strftime('%Y-%m-%d %H:%M'), result, tech, '' if diffs is None else f'{diffs} diffs',
             profile or '', (note or '').replace('|', '/').replace('\n', ' '), str(file or ''), by or os.environ.get('TECHLOG_BY', '')]
    with open(p, 'a', encoding='utf-8', newline='\n') as f:
        if new:
            f.write(f'# {name}\n\nTechniques tried (date | result | technique | diffs | profile | note | file | by)\n\n')
        f.write('- ' + ' | '.join(cells) + '\n')


def entries(name):
    p = path(name)
    if not p.exists(): return []
    out = []
    for l in p.read_text(encoding='utf-8', errors='replace').splitlines():
        if not l.startswith('- '): continue
        c = l[2:].split(' | ')
        c += [''] * (8 - len(c))
        out.append(dict(zip(('date', 'result', 'tech', 'diffs', 'profile', 'note', 'file', 'by'), c)))
    return out


def all_entries():
    if not LOG.exists(): return {}
    return {p.stem: entries(p.stem) for p in LOG.glob('*.md')}


def known_techniques():
    """{id: the TECHNIQUES.md line} for every `**id**` of TECHNIQUES.md."""
    if not TECHFILE.exists(): return {}
    out = {}
    for l in TECHFILE.read_text(encoding='utf-8').splitlines():
        for t in re.findall(r'\*\*([a-z0-9][\w.:-]*)\*\*', l):
            out.setdefault(t, l.strip('- ')[:110])
    return out


def cmd_add(a):
    add(a.name, a.tech, a.result, a.diffs, a.profile, a.file, a.note, a.by)
    known = known_techniques()
    if a.tech not in known and not a.tech.startswith('proto:'):
        print(f'note: "{a.tech}" is not an id of TECHNIQUES.md (add it there, or reuse an existing id)')
    print('logged ->', path(a.name))


def cmd_show(a):
    p = path(a.name)
    print(p.read_text(encoding='utf-8') if p.exists() else f'no journal for {a.name}')


def cmd_history(a):
    name = a.name
    print(f'==================== {name}: everything done before')
    mine = entries(name)
    print(f'--- technique journal ({len(mine)} entries, {path(name)})')
    for e in mine:
        print(f"  {e['date']} {e['result']:6s} {e['tech']:22s} {e['diffs']:10s} {e['profile']:14s} {e['note'][:90]} {e['file']}")
    try:
        led = json.loads((HUNT / 'ledger.json').read_text(encoding='utf-8')).get(name)
    except (OSError, ValueError):
        led = None
    print('--- hunt ledger')
    if led:
        print('  ', json.dumps({k: v for k, v in led.items() if k != 'notes'}))
        for n in led.get('notes', []): print('   -', n)
    else:
        print('   (nothing)')
    best = HUNT / 'best' / f'{name}.c'
    print('--- best C so far:', best if best.exists() else '(none)')
    if best.exists():
        src = best.read_text(encoding='utf-8', errors='replace')
        m = re.match(r'\s*(?:#include[^\n]*\n\s*)*(/\*.*?\*/|(?://[^\n]*\n)+)', src, re.S)
        if m: print('  ', m.group(1).strip()[:1500].replace('\n', '\n   '))
    proto = HUNT / 'proto' / name
    if proto.exists():
        print('--- prototype outputs:', proto, sorted(p.name for p in proto.glob('*.c')))
    print('--- missdb (best misses)')
    try:
        import missdb
        c = missdb.db()
        rows = c.execute('SELECT status, diffs, total, profile, source FROM misses WHERE func = ? AND game = ? '
                         "ORDER BY status != 'near', diffs LIMIT 6", (name, ROOT.name)).fetchall()
        n = c.execute('SELECT COUNT(*) FROM misses WHERE func = ? AND game = ?', (name, ROOT.name)).fetchone()[0]
        print(f'   {n} misses recorded' + ('' if not rows else ': ' + ', '.join(f'{st} {d}/{t} {p} ({s})' for st, d, t, p, s in rows)))
    except Exception as e:  # noqa: BLE001  (db locked / missing: history must still print)
        print('   (missdb unavailable:', str(e)[:120], ')')
    if a.files:
        print('--- C files under build/hunt named like the function')
        for d, _, fs in os.walk(HUNT):
            for f in fs:
                if f.startswith(name) and f.endswith('.c'):
                    print('  ', os.path.join(d, f))
    tried = {e['tech'] for e in mine}
    stats = tech_stats()
    sugg = [(t, s) for t, s in stats.items() if (s['ok'] or s['better']) and t not in tried]
    sugg.sort(key=lambda ts: (-ts[1]['ok'], -ts[1]['better']))
    print('--- techniques that worked on OTHER functions, never tried here')
    for t, s in sugg[:20]:
        print(f"   {t:24s} ok {s['ok']} better {s['better']} fail {s['fail']}")
    if not sugg: print('   (none yet)')
    print('--- next: python ../../studio/gametools/protorun.py', name, '(runs every prototype, logs here; max one run per hour)')


def tech_stats():
    st = collections.defaultdict(lambda: {'funcs': set(), 'ok': 0, 'better': 0, 'fail': 0, 'skip': 0})
    for fn, es in all_entries().items():
        for e in es:
            s = st[e['tech']]; s['funcs'].add(fn)
            if e['result'] in RESULTS: s[e['result']] += 1
    return st


def cmd_stats(a):
    st = tech_stats(); known = known_techniques()
    print(f"{'technique':26s} funcs    ok better  fail  skip")
    for t, s in sorted(st.items(), key=lambda ts: (-ts[1]['ok'], -ts[1]['better'], ts[0])):
        if len(s['funcs']) < a.min: continue
        flag = '' if t in known or t.startswith('proto:') else '  (not in TECHNIQUES.md)'
        print(f"{t:26s} {len(s['funcs']):5d} {s['ok']:5d} {s['better']:6d} {s['fail']:5d} {s['skip']:5d}{flag}")


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    sp = ap.add_subparsers(dest='cmd', required=True)
    p = sp.add_parser('history'); p.add_argument('name'); p.add_argument('--files', action='store_true')
    p = sp.add_parser('add'); p.add_argument('name'); p.add_argument('tech'); p.add_argument('result', choices=RESULTS)
    p.add_argument('--diffs', type=int); p.add_argument('--profile'); p.add_argument('--file'); p.add_argument('--note')
    p.add_argument('--by')
    p = sp.add_parser('stats'); p.add_argument('--min', type=int, default=1)
    p = sp.add_parser('show'); p.add_argument('name')
    a = ap.parse_args()
    {'history': cmd_history, 'add': cmd_add, 'stats': cmd_stats, 'show': cmd_show}[a.cmd](a)


if __name__ == '__main__':
    main()
