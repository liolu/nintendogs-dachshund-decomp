"""profpad.py : adds "end4" (record end rounded up to 4) to build/profnames.json for every -profile record whose 1-3
alignment bytes in the ROM are zero (what the original linker inserts after each object's .data). workbench then
delinks the record as [start, end4), which is what links byte-identically; `match.py verify` accepts the resulting
trailing-padding difference of the .data section (see PROFILE PADDING there). Records followed by non-zero bytes
(not a record, or data glued to it) get no end4 and keep the unrounded range. Run in the project dir."""
import json
import re
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from project import ROOT  # noqa: E402  (the game: DSD_PROJECT or the current folder)
f = ROOT / "build" / "profnames.json"
d = json.loads(f.read_text(encoding="utf-8"))
mods = []
for cfg in sorted((ROOT / "config" / "eu" / "arm9" / "overlays").glob("ov*/delinks.txt")):
    head = cfg.read_text(encoding="utf-8").split("\n\n")[0]
    base = int(re.search(r"start:0x([0-9a-f]+)", head).group(1), 16)
    b = (ROOT / "extract" / "eu" / "arm9_overlays" / (cfg.parent.name + ".bin")).read_bytes()
    mods.append((base, base + len(b), b))
ok = bad = 0
for n, v in d.items():
    s, e = v["rec"]
    r = (e + 3) // 4 * 4
    v.pop("end4", None)
    m = next((m for m in mods if m[0] <= s and r <= m[1]), None)
    if m is None or any(m[2][e - m[0]:r - m[0]]):
        bad += 1
        continue
    if r != e:
        v["end4"] = r
    ok += 1
f.write_text(json.dumps(d, indent=1), encoding="utf-8")
print(f"{ok} records with zero padding, {bad} left unrounded")
