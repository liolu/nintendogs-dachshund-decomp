"""List the data (.data/.rodata/.bss) that no C file covers yet, with the reason each piece was left to the gap.

    python tools/datagap.py [--mods main,ov004] [--sections .data,.rodata,.bss] [--list REASON] [--json OUT]

Reasons (first that applies to the uncovered range): profile (a -profile name record), nosym (no data symbol
starts in it), alias (two names at one address), zero (all-zero .data: mwcc puts it in .bss; const zero stays in .rodata),
thumbptr / oddptr / noname (a pointer a u32 table cannot hold), odd (starts or ends off a 4-byte boundary), other.
"""
import argparse
import collections
import json
import re
import struct
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import project  # noqa: E402
from bssgen import SECTION, modules  # noqa: E402
from datagen import Mod, load_symbols, module_key, target_name  # noqa: E402

ROOT = project.ROOT


def holes(start: int, end: int, taken: list[tuple[int, int]]) -> list[tuple[int, int]]:
    out, cur = [], start
    for s, e in sorted(taken):
        if e <= cur or s >= end:
            continue
        if s > cur:
            out.append((cur, s))
        cur = max(cur, e)
    if cur < end:
        out.append((cur, end))
    return out


def reason(m: Mod, targets, sec: str, s: int, e: int, prof) -> str:
    if any(s < pe and ps < e for ps, pe in prof):
        return "profile"
    kind = "bss" if sec == ".bss" else "data"
    syms = [(a, n) for a, n, k in m.symbols if s <= a < e and k == kind]
    if not syms:
        return "nosym"
    addrs = [a for a, _ in syms]
    if len(set(addrs)) != len(addrs):
        return "alias"
    if sec != ".bss":
        raw = m.bin[s - m.base:e - m.base]
        ptrs = [f for f in range(s, e) if f in m.relocs]
        if not ptrs and not any(raw) and sec == ".data":
            return "zero"
        for f in ptrs:
            if f % 4:
                return "oddptr"
            w, = struct.unpack_from("<I", m.bin, f - m.base)
            if w & 1:
                return "thumbptr"
            if target_name(targets, *m.relocs[f]) is None:
                return "noname"
    if s % 4 or e % 4:
        return "odd"
    return "other"


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--mods", default="")
    ap.add_argument("--sections", default=".data,.rodata,.bss")
    ap.add_argument("--list", default="", help="print every range with this reason")
    ap.add_argument("--json", default="")
    ap.add_argument("--name-nosym", action="store_true", help="add a data symbol at the start of every nosym range "
                    "(unreferenced data), so datagen can give it to C")
    a = ap.parse_args()
    mods = modules()
    targets = {module_key(n): load_symbols(f) for n, f in mods.items()}
    pj = ROOT / "build" / "profnames.json"
    prof = [tuple(v.get("rec", (0, 0))[:2]) for v in json.loads(pj.read_text(encoding="utf-8")).values()] \
        if pj.exists() else []
    want = set(a.mods.split(",")) if a.mods else None
    tot, cnt, rows = collections.Counter(), collections.Counter(), []
    for name, folder in mods.items():
        if want and name not in want:
            continue
        m = Mod(name, folder, targets)
        body = (folder / "delinks.txt").read_text(encoding="utf-8").partition("\n\n")[2]
        for sec in a.sections.split(","):
            if sec not in m.sections:
                continue
            start, end = m.sections[sec]
            taken = [(int(x, 16), int(y, 16)) for sc, x, y in SECTION.findall(body) if sc == sec]
            for s, e in holes(start, end, taken):
                r = reason(m, targets, sec, s, e, prof)
                tot[(sec, r)] += e - s
                cnt[(sec, r)] += 1
                rows.append({"mod": name, "sec": sec, "start": s, "end": e, "reason": r})
                if a.name_nosym and r == "nosym" and s % 4 == 0 and not any(s <= ad < e for ad, _n, _k in m.symbols):
                    tag = "" if name == "main" or name in ("itcm", "dtcm") else f"{name}_"
                    p = folder / "symbols.txt"
                    p.write_text(p.read_text(encoding="utf-8").rstrip("\n") +
                                 f"\ndata_{tag}{s:08x} kind:{'bss' if sec == '.bss' else 'data(any)'} addr:0x{s:08x}\n",
                                 encoding="utf-8", newline="\n")
                if a.list and r == a.list:
                    syms = [f"{n}@{ad - s:x}" for ad, n, k in m.symbols if s <= ad < e][:8]
                    print(f"{name} {sec} 0x{s:08x}-0x{e:08x} ({e - s}) {' '.join(syms)}")
    for (sec, r), b in sorted(tot.items(), key=lambda x: -x[1]):
        print(f"{sec:8} {r:9} {b:7} bytes  {cnt[(sec, r)]:4} ranges")
    print("total", sum(tot.values()))
    if a.json:
        Path(a.json).write_text(json.dumps(rows), encoding="utf-8")


if __name__ == "__main__":
    main()
