"""Give the -profile name records of not-yet-matched functions to C data files: src/data/<mod>_profrec_<addr>.c.

A -profile function owns a `.data` record = its name, padded to 4 (build/profnames.json, end4 from profpad.py).
While the function is unmatched the record sits in a gap; here it becomes `char data_ovNNN_X[N] = "Name";` (N = padded
size, so the padding is exact; the symbol stays kind:label, labels are global for dsd). When the function gets
matched, `release(start)` (called by auto_match.integrate) drops the delinks entry, because the function's own TU
then makes the record; `clean_orphans()` (workbench commit) deletes the file.

    python tools/profrec.py [--mods ov000,...] [--dry-run]
"""
import argparse
import json
import re
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import project  # noqa: E402
from bssgen import SECTION, modules  # noqa: E402
from datagen import c_string, image  # noqa: E402

ROOT = project.ROOT


def _mod_of(start: int, mods: dict[str, Path]) -> tuple[str, Path] | None:
    for n, f in mods.items():
        head = (f / "delinks.txt").read_text(encoding="utf-8").split("\n\n", 1)[0]
        for sc, s, e in SECTION.findall(head):
            if sc == ".data" and int(s, 16) <= start < int(e, 16):
                return n, f
    return None


def release(start: int) -> bool:
    """Drop the delinks entry of the record at `start` (its function is being matched and its TU makes the record).
    The file itself stays until clean_orphans() (workbench commit), so a rolled-back delinks.txt stays consistent."""
    for n, f in modules().items():
        rel = f"src/data/{n}_profrec_{start:08x}.c"
        d = f / "delinks.txt"
        t = d.read_text(encoding="utf-8")
        if f"\n{rel}:\n" not in t:
            continue
        t = re.sub(r"\n" + re.escape(rel) + r":\n(?:[ \t]+\S.*\n?)*", "\n", t)
        d.write_text(t.rstrip("\n") + "\n", encoding="utf-8", newline="\n")
        return True
    return False


def clean_orphans() -> list[str]:
    """Delete the record files no delinks.txt lists any more; returns their paths (for git add)."""
    listed = set()
    for f in modules().values():
        listed |= set(re.findall(r"^(src/data/\S+_profrec_[0-9a-f]+\.c):",
                                 (f / "delinks.txt").read_text(encoding="utf-8"), re.M))
    gone = []
    for p in (ROOT / "src" / "data").glob("*_profrec_*.c"):
        rel = p.relative_to(ROOT).as_posix()
        if rel not in listed:
            p.unlink()
            gone.append(rel)
    return gone


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--mods", default="")
    ap.add_argument("--dry-run", action="store_true")
    a = ap.parse_args()
    prof = json.loads((ROOT / "build" / "profnames.json").read_text(encoding="utf-8"))
    mods = modules()
    want = set(a.mods.split(",")) if a.mods else None
    taken = {}
    for n, f in mods.items():
        taken[n] = [(int(s, 16), int(e, 16)) for _sc, s, e in
                    SECTION.findall((f / "delinks.txt").read_text(encoding="utf-8").partition("\n\n")[2])]
    plan = {}
    for fname, v in prof.items():
        start, end = v["rec"]
        end4 = v.get("end4", end if end % 4 == 0 else None)  # profpad writes end4 only where padding is needed
        hit = _mod_of(start, mods) if end4 else None
        if not hit:
            continue
        n, f = hit
        if (want and n not in want) or any(s < end4 and start < e for s, e in taken[n]):
            continue
        b, base = image(n, f)
        raw = b[start - base:end4 - base]
        s = c_string(raw)
        if s is None or raw[:end - start - 1].decode("latin-1") != fname:
            continue
        plan.setdefault(n, []).append((start, end4, s))
    print(f"{sum(map(len, plan.values()))} records, {sum(e - s for v in plan.values() for s, e, _ in v)} bytes")
    if a.dry_run:
        return
    for n, recs in plan.items():
        f = mods[n]
        sym = (f / "symbols.txt").read_text(encoding="utf-8")
        entries = []
        for start, end4, s in recs:
            m = re.search(rf"^(\S+) kind:label\(arm\) addr:0x{start:08x}$", sym, re.M)
            if not m:
                continue
            rel = f"src/data/{n}_profrec_{start:08x}.c"
            (ROOT / rel).write_text(f'/* compiler: 2.0/sp1p5 */\n#include "m2c.h"\n\nchar {m[1]}[{end4 - start}] = "{s}";\n',
                                    encoding="utf-8", newline="\n")
            entries.append(f"\n{rel}:\n    complete\n    .data       start:0x{start:08x} end:0x{end4:08x}\n")
        d = f / "delinks.txt"
        d.write_text(d.read_text(encoding="utf-8").rstrip("\n") + "\n" + "".join(entries), encoding="utf-8", newline="\n")


if __name__ == "__main__":
    main()
