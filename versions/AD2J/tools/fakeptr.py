"""Find (and remove) false pointers that dsd found in data: byte tables whose 4 bytes happen to look like an address.

Such a relocation creates a fake symbol in the middle of an array (data_0203ffff), which splits the array and keeps
datagen/bssgen from giving it to C. A relocation is called fake when it sits in a .data/.rodata section, its target is
NOT 4-aligned, and no code (.text pool) points to that target. With --apply the relocations go away from relocs.txt,
the fake symbols (no reference left) from symbols.txt, and src/ files that name them get the plain value back.

    python tools/fakeptr.py [--apply] [--all-odd]
"""
import argparse
import collections
import re
import struct
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import project  # noqa: E402
from bssgen import SECTION, modules  # noqa: E402
from datagen import image, module_key  # noqa: E402

ROOT = project.ROOT
REL = re.compile(r"^from:0x([0-9a-f]+) kind:(\w+) to:0x([0-9a-f]+) module:(\S+).*$", re.M)


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--apply", action="store_true")
    a = ap.parse_args()
    mods = modules()
    secs, bins, syms = {}, {}, {}
    for n, f in mods.items():
        head = (f / "delinks.txt").read_text(encoding="utf-8").split("\n\n", 1)[0]
        secs[module_key(n)] = [(sc, int(s, 16), int(e, 16)) for sc, s, e in SECTION.findall(head)]
        bins[n] = image(n, f)
        syms[module_key(n)] = {int(ad, 16): nm for nm, ad in re.findall(r"^(\S+) kind:(?:data|bss)\S* addr:0x([0-9a-f]+)",
                                                                       (f / "symbols.txt").read_text(encoding="utf-8"), re.M)}

    def sec_of(mod, ad):
        return next((sc for sc, s, e in secs[mod] if s <= ad < e), None)

    refs = collections.defaultdict(list)  # (target mod, addr) -> [(src mod name, from, line, from section)]
    relocated = collections.defaultdict(set)
    for n, f in mods.items():
        for mt in REL.finditer((f / "relocs.txt").read_text(encoding="utf-8")):
            frm, kind, to, tmod = int(mt[1], 16), mt[2], int(mt[3], 16), mt[4]
            relocated[n].add(frm)
            if kind != "load":
                continue
            refs[(tmod, to)].append((n, frm, mt[0], sec_of(module_key(n), frm)))
    fake = {}
    for (tmod, to), lst in refs.items():
        if to % 4 == 0 or (tmod in syms and to not in syms[tmod]) or (tmod not in syms and "," not in tmod):
            continue  # an ambiguous overlays(a,b) target at an odd address from data is fake too
        if any(s in (".text", ".init", None) for _n, _f, _l, s in lst):
            continue
        if any(f + d in relocated[n] for n, f, _l, _s in lst for d in (-4, 4)):
            continue  # inside a table of real pointers
        fake[(tmod, to)] = lst
    for (tmod, to), lst in sorted(fake.items()):
        b, base = bins[lst[0][0]]
        ctx = b[lst[0][1] - base - 4:lst[0][1] - base + 8].hex(" ")
        print(f"{syms.get(tmod, {}).get(to, tmod + hex(to)):28} {len(lst):3} refs  e.g. {lst[0][0]}:0x{lst[0][1]:08x}  [{ctx}]")
    print(len(fake), "fake targets,", sum(len(v) for v in fake.values()), "relocations")
    if not a.apply:
        return
    drop = collections.defaultdict(set)
    for lst in fake.values():
        for n, _f, line, _s in lst:
            drop[n].add(line)
    for n, lines in drop.items():
        p = mods[n] / "relocs.txt"
        p.write_text("".join(l for l in p.read_text(encoding="utf-8").splitlines(True) if l.rstrip("\n") not in lines),
                     encoding="utf-8", newline="\n")
    names = {}
    for (tmod, to) in fake:
        if tmod in syms and (tmod, to) in refs and all(r in fake.get((tmod, to), []) for r in refs[(tmod, to)]):
            names[syms[tmod][to]] = (tmod, to)
    for n, f in mods.items():
        p = f / "symbols.txt"
        mine = {nm for nm, (tm, _t) in names.items() if tm == module_key(n)}
        if mine:
            p.write_text("".join(l for l in p.read_text(encoding="utf-8").splitlines(True) if l.split(" ", 1)[0] not in mine),
                         encoding="utf-8", newline="\n")
    # C files that wrote a fake pointer as (u32)&sym get the raw value back
    pat = re.compile(r"\(u32\) ?(?:\(\(u8 \*\) ?)?&(" + "|".join(map(re.escape, names)) + r")(?: \+ 0x([0-9a-f]+)\))?") if names else None
    fixed = 0
    for c in (list((ROOT / "src").rglob("*.c")) + list((ROOT / "src").rglob("*.cpp"))) if pat else []:
        t = c.read_text(encoding="utf-8")
        if not pat.search(t):
            continue
        t = pat.sub(lambda m: f"0x{names[m[1]][1] + int(m[2] or '0', 16):08X}", t)
        t = re.sub(r"^extern u8 (" + "|".join(map(re.escape, names)) + r")\[\];\n", "", t, flags=re.M)
        c.write_text(t, encoding="utf-8", newline="\n")
        fixed += 1
    print(f"removed {sum(len(v) for v in drop.values())} relocations, {len(names)} symbols, fixed {fixed} C files")


if __name__ == "__main__":
    main()
