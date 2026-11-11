"""bytematch_upload.py [ID...] : sends versions/<ID>/progress/report.json.gz to ByteMatch as version "<game> (<region>)" (versions.py) of liolu/nintendogs
(commit = HEAD, already pushed). Token: studio/data/bytematch.json (key liolu/nintendogs, else the old repo name)."""
import json, subprocess, sys, urllib.parse, urllib.request
from versions import VERSIONS
LABEL = {v: f'{t} ({r})' for v, t, r, _n in VERSIONS}  # ByteMatch shows the version string: the game name, not the code
from pathlib import Path
ROOT = Path(__file__).resolve().parent
TOK = json.loads((ROOT.parent.parent / 'studio' / 'data' / 'bytematch.json').read_text())
REPO = 'liolu/nintendogs'
token = TOK.get(REPO) or TOK.get('liolu/nintendogs-dachshund-decomp')
git = lambda *a: subprocess.run(['git', *a], cwd=ROOT, capture_output=True, text=True).stdout.strip()
sha, msg, when = git('rev-parse', 'HEAD'), git('log', '-1', '--format=%s'), git('log', '-1', '--format=%cI')
ids = sys.argv[1:] or sorted(p.parent.parent.name for p in ROOT.glob('versions/*/progress/report.json.gz'))
for vid in ids:
    f = ROOT / 'versions' / vid / 'progress' / 'report.json.gz'
    if not f.exists():
        print(vid, 'no report'); continue
    q = urllib.parse.urlencode({'version': LABEL.get(vid, vid), 'commit': sha, 'commit_message': msg, 'commit_timestamp': when})
    req = urllib.request.Request(f'https://bytematch.dev/api/v1/projects/{REPO}/reports?{q}', data=f.read_bytes(),
                                 method='POST', headers={'Authorization': f'Bearer {token}', 'Content-Encoding': 'gzip',
                                 'Content-Type': 'application/json', 'User-Agent': 'ds-decomp-studio (+https://github.com/liolu/ds-decomp-studio)'})
    try:
        with urllib.request.urlopen(req, timeout=120) as r:
            print(LABEL.get(vid, vid), 'sent', json.loads(r.read() or b'{}').get('url', ''))
    except urllib.error.HTTPError as e:
        print(vid, 'refused', e.code, e.read()[:300].decode('utf-8', 'replace'))
