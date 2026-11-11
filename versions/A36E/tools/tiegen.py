"""Give to C the data runs that datagen/bssgen leave because of equal sizes (ties): u8 flags, u16 pairs...

The linker sorts the objects of a file by size; for equal sizes the order is not the address order of the names,
so the order of definition that lands each name at its address has to be found by building:

    python tools/tiegen.py gen [--mods ...]    # one file per uncovered run (address order), build/tiegen.json
    ninja                                      # (or match.py verify)
    python tools/tiegen.py check               # reads build/<ver>/arm9.o.xMAP: right files are kept, wrong ones
                                               # get the definition order that undoes the observed permutation
    ninja; python tools/tiegen.py check --drop # still wrong after that: removed

Objects of 1-2 bytes are written as scalars: mwcc packs scalars into one section, while every array gets a section of
its own that the linker aligns to 4. A run qualifies when it covers a whole uncovered range, starts and ends 4-aligned, has distinct addresses, sizes that
never decrease, and (initialized data) every symbol is expressible by datagen without a forward reference.
"""
import argparse
import json
import re
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import project  # noqa: E402
from bssgen import SECTION, modules  # noqa: E402
from datagen import Mod, declare, load_symbols, module_key  # noqa: E402
from datagap import holes  # noqa: E402

ROOT = project.ROOT
STATE = ROOT / "build" / "tiegen.json"


def write(rel: str, decls: list[str], ext: set[str]) -> None:
    src = ["/* compiler: 2.0/sp1p5 */", '#include "m2c.h"', ""]
    if ext:
        src += [f"extern u8 {x}[];" for x in sorted(ext)] + [""]
    (ROOT / rel).write_text("\n".join(src + decls) + "\n", encoding="utf-8", newline="\n")


def gen(a) -> None:
    mods = modules()
    targets = {module_key(n): load_symbols(f) for n, f in mods.items()}
    pj = ROOT / "build" / "profnames.json"
    prof = [tuple(v["rec"]) for v in json.loads(pj.read_text(encoding="utf-8")).values()] if pj.exists() else []
    want = set(a.mods.split(",")) if a.mods else None
    state = json.loads(STATE.read_text(encoding="utf-8")) if STATE.exists() else {}
    made = 0
    for n, f in mods.items():
        if want and n not in want:
            continue
        m = Mod(n, f, targets)
        body = (f / "delinks.txt").read_text(encoding="utf-8").partition("\n\n")[2]
        entries = []
        for sec in (".data", ".rodata", ".bss"):
            if sec not in m.sections:
                continue
            start, end = m.sections[sec]
            taken = [(int(x, 16), int(y, 16)) for sc, x, y in SECTION.findall(body) if sc == sec]
            kind = "bss" if sec == ".bss" else "data"
            for s, e in holes(start, end, taken):
                if s % 4 or e % 4 or any(s < pe and ps < e for ps, pe in prof):
                    continue
                syms = [(ad, nm) for ad, nm, k in m.symbols if s <= ad < e]
                if not syms or syms[0][0] != s or any(k != kind for ad, nm, k in m.symbols if s <= ad < e):
                    continue
                addrs = [ad for ad, _ in syms]
                if len(set(addrs)) != len(addrs):
                    continue
                sizes = [(addrs[i + 1] if i + 1 < len(addrs) else e) - ad for i, ad in enumerate(addrs)]
                if any(sizes[i + 1] < sizes[i] for i in range(len(sizes) - 1)) or len(set(sizes)) == len(sizes):
                    continue  # not one file / no tie (datagen's business)
                decls, ext = [], set()
                for (ad, nm), sz in zip(syms, sizes):
                    if sz == 1 or (sz == 2 and ad % 2 == 0):  # scalars share one packed section; arrays do not
                        ty = "u8" if sz == 1 else "u16"
                        if sec == ".bss":
                            decls.append(f"{ty} {nm};")
                            continue
                        if any(fr in m.relocs for fr in range(ad, ad + sz)):
                            decls = None
                            break
                        v = int.from_bytes(m.bin[ad - m.base:ad - m.base + sz], "little")
                        decls.append(f"{'const ' if sec == '.rodata' else ''}{ty} {nm} = 0x{v:0{sz * 2}X};")
                        continue
                    if sec == ".bss":
                        decls.append(f"u32 {nm}[{sz // 4}];" if sz % 4 == 0 and ad % 4 == 0 else f"u8 {nm}[{sz}];")
                        continue
                    d, x = declare(None, m, targets, ad, nm, sz, sec)
                    if d is None or x & {nm2 for _a, nm2 in syms}:
                        decls = None
                        break
                    decls.append(d)
                    ext |= x
                if not decls:
                    continue
                rel = f"src/data/{n}_{sec.strip('.')}_{s:08x}.c"
                write(rel, decls, ext)
                state[rel] = {"mod": n, "want": [nm for _a, nm in syms], "addr": {nm: ad for ad, nm in syms},
                              "decls": dict(zip([nm for _a, nm in syms], decls)), "ext": sorted(ext),
                              "order": [nm for _a, nm in syms], "tries": 0}
                entries.append(f"\n{rel}:\n    complete\n    {sec:<11} start:0x{s:08x} end:0x{e:08x}\n")
                made += 1
        if entries:
            d = f / "delinks.txt"
            d.write_text(d.read_text(encoding="utf-8").rstrip("\n") + "\n" + "".join(entries), encoding="utf-8",
                         newline="\n")
    STATE.write_text(json.dumps(state, indent=1), encoding="utf-8")
    print(f"{made} tie files written")


def drop(rel: str, mod: str) -> None:
    d = modules()[mod] / "delinks.txt"
    t = re.sub(r"\n" + re.escape(rel) + r":\n(?:[ \t]+\S.*\n?)*", "\n", d.read_text(encoding="utf-8"))
    d.write_text(t.rstrip("\n") + "\n", encoding="utf-8", newline="\n")
    (ROOT / rel).unlink(missing_ok=True)


def check(a) -> None:
    state = json.loads(STATE.read_text(encoding="utf-8"))
    xmap = (ROOT / "build" / project.VERSION / "arm9.o.xMAP").read_text(encoding="utf-8", errors="replace")
    placed = {nm: int(ad, 16) for ad, nm in re.findall(r"^  ([0-9A-F]{8}) [0-9A-F]{8} \.\w+\s+(\S+)\t", xmap, re.M)}
    ok = fixed = dropped = 0
    for rel, st in list(state.items()):
        if st.get("done"):
            continue
        got = {nm: placed.get(nm) for nm in st["order"]}
        # judged on the layout inside the file: a wrong file earlier in the section shifts every later one, which
        # is no fault of theirs (the final `match.py verify` checks the absolute addresses once the wrong ones are gone)
        first = st["order"][0]
        delta = (got[first] - st["addr"][first]) if got[first] is not None else None
        if delta is not None and all(got[nm] is not None and got[nm] - delta == st["addr"][nm] for nm in st["order"]):
            st["done"] = True
            ok += 1
            continue
        if a.drop or st["tries"] >= 2 or None in got.values():
            drop(rel, st["mod"])
            del state[rel]
            dropped += 1
            continue
        # placed position k came from definition index j: put at j the name that must land at position k
        order = st["order"]
        by_place = sorted(order, key=lambda nm: got[nm])
        want = sorted(order, key=lambda nm: st["addr"][nm])
        new = [None] * len(order)
        for k, nm in enumerate(by_place):
            new[order.index(nm)] = want[k]
        st["order"], st["tries"] = new, st["tries"] + 1
        write(rel, [st["decls"][nm] for nm in new], set(st["ext"]))
        fixed += 1
    STATE.write_text(json.dumps(state, indent=1), encoding="utf-8")
    print(f"{ok} right, {fixed} reordered (build again and re-check), {dropped} dropped")


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("cmd", choices=["gen", "check"])
    ap.add_argument("--mods", default="")
    ap.add_argument("--drop", action="store_true", help="check: remove every file still wrong")
    a = ap.parse_args()
    gen(a) if a.cmd == "gen" else check(a)


if __name__ == "__main__":
    main()
