"""Fold "interior" data symbols back into the object they belong to, so datagen/bssgen can give the object to C.

dsd names every address the code loads, so a struct array gets one symbol per field it touches (data_X, data_X+2,
...). mwcc puts every array of 4+ bytes at a 4-byte boundary, so a symbol that is NOT 4-aligned and spans 4+ bytes
cannot be an object of its own: it is a field of the symbol before it. So is an unaligned symbol smaller than the one
before it (one file's objects are sorted by size, smallest first). Such a symbol is removed from symbols.txt and
every relocation to it becomes `to:<object> add:<offset>`. C files that write a pointer to it get `(u8 *)&obj + off`.
Only uncovered data (not in any delinks file) is touched, and a symbol named by C code (not data) is kept.

    python tools/symmerge.py [--apply] [--mods ov117,...] [--min-size 4]
"""
import argparse
import collections
import re
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import project  # noqa: E402
from bssgen import SECTION, modules  # noqa: E402
from datagen import module_key  # noqa: E402

ROOT = project.ROOT
SYM = re.compile(r"^(\S+) kind:(data|bss)\S* addr:0x([0-9a-f]+)", re.M)


def code_names() -> collections.Counter:
    """Identifiers used by C code outside src/data (data files are rewritten instead)."""
    c = collections.Counter()
    for p in list((ROOT / "src").rglob("*.c")) + list((ROOT / "src").rglob("*.cpp")) + list((ROOT / "include").rglob("*.h")):
        if p.parent.name == "data":
            continue
        c.update(set(re.findall(r"\b(data_\w+)\b", p.read_text(encoding="utf-8", errors="replace"))))
    return c


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--apply", action="store_true")
    ap.add_argument("--mods", default="")
    ap.add_argument("--min-size", type=int, default=4)
    a = ap.parse_args()
    mods = modules()
    want = set(a.mods.split(",")) if a.mods else None
    used = code_names()
    merge = {}  # (module key, addr) -> (name, base name, base addr)
    kept = 0
    for n, f in mods.items():
        if want and n not in want:
            continue
        head, _s, body = (f / "delinks.txt").read_text(encoding="utf-8").partition("\n\n")
        secs = [(int(s, 16), int(e, 16)) for sc, s, e in SECTION.findall(head) if sc in (".data", ".rodata", ".bss")]
        taken = [(int(s, 16), int(e, 16)) for _sc, s, e in SECTION.findall(body)]
        syms = sorted((int(ad, 16), nm) for nm, _k, ad in SYM.findall((f / "symbols.txt").read_text(encoding="utf-8")))
        for ss, se in secs:
            inside = [(ad, nm) for ad, nm in syms if ss <= ad < se]
            base = None
            for i, (ad, nm) in enumerate(inside):
                nxt = inside[i + 1][0] if i + 1 < len(inside) else se
                if any(s <= ad < e for s, e in taken):
                    base = None
                    continue
                prev = inside[i - 1][0] if i else ss
                # smaller than the symbol before it: the linker would have put it first (size sort) -> a field too
                if ad % 4 and (nxt - ad >= a.min_size or nxt - ad < ad - prev) and base and base[0] != ad:
                    if nm in used:
                        kept += 1
                        base = None  # the object is not whole either way
                        continue
                    merge[(module_key(n), ad)] = (nm, base[1], base[0])
                    continue
                base = (ad, nm) if ad % 4 == 0 else None
    print(f"{len(merge)} interior symbols to fold, {kept} kept (named by C code)")
    for (mk, ad), (nm, bn, ba) in sorted(merge.items())[:15]:
        print(f"  {nm} -> {bn} + 0x{ad - ba:x}")
    if not a.apply or not merge:
        return
    names = {nm: (bn, ad - ba) for (mk, ad), (nm, bn, ba) in merge.items()}
    nrel = 0
    rel = re.compile(r"^(from:0x[0-9a-f]+ kind:\w+ )to:0x([0-9a-f]+)((?: add:\S+)?)( module:(\S+))(.*)$", re.M)
    for n, f in mods.items():
        p = f / "relocs.txt"
        t = p.read_text(encoding="utf-8")

        def fix(m):
            nonlocal nrel
            to = int(m[2], 16)
            hit = merge.get((m[5], to))
            if not hit:
                return m[0]
            nrel += 1
            off = to - hit[2] + (int(m[3][5:], 0) if m[3] else 0)
            return f"{m[1]}to:0x{hit[2]:08x} add:0x{off:x}{m[4]}{m[6]}"
        t2 = rel.sub(fix, t)
        if t2 != t:
            p.write_text(t2, encoding="utf-8", newline="\n")
        mine = {nm for (mk, _ad), (nm, _b, _ba) in merge.items() if mk == module_key(n)}
        if mine:
            s = f / "symbols.txt"
            s.write_text("".join(l for l in s.read_text(encoding="utf-8").splitlines(True)
                                 if l.split(" ", 1)[0] not in mine), encoding="utf-8", newline="\n")
    # clang-format may have written `(u32) &sym` / `(u32) ((u8 *) &sym + 0x2)`: the spaces are optional
    pat = re.compile(r"\(u32\) ?(?:\(\(u8 \*\) ?)?&(" + "|".join(map(re.escape, names)) + r")\b(?: \+ 0x([0-9a-f]+)\))?")
    fixed = 0
    for c in (ROOT / "src" / "data").glob("*.c"):
        t = c.read_text(encoding="utf-8")
        if not pat.search(t):
            continue
        bases = set()

        def sub(m):
            bn, off = names[m[1]]
            bases.add(bn)
            return f"(u32)((u8 *)&{bn} + 0x{off + int(m[2] or '0', 16):x})"
        t = pat.sub(sub, t)
        t = re.sub(r"^extern u8 (" + "|".join(map(re.escape, names)) + r")\[\];\n", "", t, flags=re.M)
        for bn in sorted(bases):
            if not re.search(rf"\b{bn}\[", t):
                t = re.sub(r'(#include "m2c.h"\n)', lambda m: m[1] + f"extern u8 {bn}[];\n", t, count=1)
        c.write_text(t, encoding="utf-8", newline="\n")
        fixed += 1
    print(f"rewrote {nrel} relocations, fixed {fixed} data files")


if __name__ == "__main__":
    main()
