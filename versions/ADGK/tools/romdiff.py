#!/usr/bin/env python3
"""Where the rebuilt ROM differs from the original one, region by region: header fields, ARM9 / ARM7, overlay
tables, file name table, FAT, banner, each file of the file system, padding.

    python tools/romdiff.py                      # extract/baserom_<game>_<ver>.nds against <game>_<ver>.nds
    python tools/romdiff.py <original> <rebuilt>

For the games whose modules all pass `dsd check` but whose ROM SHA-1 differs (the difference is outside the code).

Disassembled diff of one module (idea from pret/ds_disassembly_tools asmdiff.sh, rewritten): both ROMs are read,
the module is decompressed (BLZ), split into its autoloads (ITCM/DTCM...), and each differing run is shown as an
objdump diff of the function around it (ARM or Thumb from symbols.txt; data is shown as words).
    python ../../studio/gametools/romdiff.py --disasm arm9                 # also: arm7, ov12, ov012
    python ../../studio/gametools/romdiff.py --disasm ov3 --from 0x021c0000 --to 0x021c2000 --max 30
Needs arm-none-eabi-objdump in PATH (dot-source env.ps1).
"""
import argparse
import bisect
import difflib
import os
import re
import shutil
import struct
import subprocess
import sys
import tempfile
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from project import ROOT  # noqa: E402  (the game: DSD_PROJECT or the current folder)
sys.path.insert(0, str(Path(__file__).resolve().parent))

HEADER_FIELDS = [  # (offset, size, name)
    (0x00, 12, "title"), (0x0C, 4, "game code"), (0x10, 2, "maker"), (0x12, 1, "unit code"), (0x14, 1, "card size"),
    (0x1E, 1, "rom version"), (0x1F, 1, "autostart"),
    (0x20, 4, "arm9 rom offset"), (0x24, 4, "arm9 entry"), (0x28, 4, "arm9 ram address"), (0x2C, 4, "arm9 size"),
    (0x30, 4, "arm7 rom offset"), (0x34, 4, "arm7 entry"), (0x38, 4, "arm7 ram address"), (0x3C, 4, "arm7 size"),
    (0x40, 4, "fnt offset"), (0x44, 4, "fnt size"), (0x48, 4, "fat offset"), (0x4C, 4, "fat size"),
    (0x50, 4, "arm9 overlay table offset"), (0x54, 4, "arm9 overlay table size"),
    (0x58, 4, "arm7 overlay table offset"), (0x5C, 4, "arm7 overlay table size"),
    (0x60, 4, "card control normal"), (0x64, 4, "card control key1"), (0x68, 4, "banner offset"),
    (0x6C, 2, "secure area crc"), (0x6E, 2, "secure area delay"), (0x70, 4, "arm9 autoload callback"),
    (0x74, 4, "arm7 autoload callback"), (0x78, 8, "secure area disable"), (0x80, 4, "rom size used"),
    (0x84, 4, "header size"), (0x88, 4, "arm9 module params offset"), (0x8C, 4, "arm7 module params offset"),
    (0x94, 2, "nand end of rom"), (0x96, 2, "nand start of rw"), (0x15C, 2, "logo crc"), (0x15E, 2, "header crc"),
]


def u32(b, o):
    return struct.unpack_from("<I", b, o)[0]


def regions(rom: bytes) -> list[tuple[int, int, str]]:
    """[(start, end, name)] of everything the header and the FAT point to."""
    out = [(0, 0x4000, "header + secure area")]
    for off, size, name in ((0x20, 0x2C, "ARM9"), (0x30, 0x3C, "ARM7"), (0x40, 0x44, "file name table"),
                            (0x48, 0x4C, "FAT"), (0x50, 0x54, "ARM9 overlay table"), (0x58, 0x5C, "ARM7 overlay table")):
        a, n = u32(rom, off), u32(rom, size)
        if n:
            out.append((a, a + n, name))
    if u32(rom, 0x68):
        b = u32(rom, 0x68)
        out.append((b, b + 0x23C0 if b + 0x23C0 <= len(rom) else len(rom), "banner"))
    fat, fat_size = u32(rom, 0x48), u32(rom, 0x4C)
    names = file_names(rom)
    ov9 = {u32(rom, u32(rom, 0x50) + i * 32 + 24): i for i in range(u32(rom, 0x54) // 32)}
    for i in range(fat_size // 8):
        s, e = u32(rom, fat + i * 8), u32(rom, fat + i * 8 + 4)
        if e > s:
            label = names.get(i) or (f"ARM9 overlay {ov9[i]}" if i in ov9 else f"file id {i}")
            out.append((s, e, label))
    return sorted(out)


def file_names(rom: bytes) -> dict[int, str]:
    """{file id: path} from the file name table."""
    fnt = u32(rom, 0x40)
    out = {}

    def walk(dir_id: int, prefix: str):
        entry = fnt + (dir_id & 0xFFF) * 8
        off, first = u32(rom, entry), struct.unpack_from("<H", rom, entry + 4)[0]
        p, fid = fnt + off, first
        while True:
            ln = rom[p]
            p += 1
            if ln == 0:
                break
            name = rom[p: p + (ln & 0x7F)].decode("latin-1")
            p += ln & 0x7F
            if ln & 0x80:
                sub = struct.unpack_from("<H", rom, p)[0]
                p += 2
                walk(sub, f"{prefix}{name}/")
            else:
                out[fid] = prefix + name
                fid += 1

    try:
        walk(0xF000, "")
    except (IndexError, struct.error):
        pass
    return out


def diff_runs(a: bytes, b: bytes, gap: int = 16) -> list[tuple[int, int]]:
    n = min(len(a), len(b))
    runs, i = [], 0
    while i < n:
        if a[i] != b[i]:
            j = i
            last = i
            while j < n and j - last <= gap:
                if a[j] != b[j]:
                    last = j
                j += 1
            runs.append((i, last + 1))
            i = last + 1
        else:
            i += 1
    return runs


def blz_decompress(data: bytes) -> bytes:
    """Nintendo's backward LZ (compressed ARM9 and overlays); same as rom_build.blz_decompress."""
    from rom_build import blz_decompress as blz
    return blz(data)


MODULE_PARAMS_MAGIC = b"\x21\x06\xc0\xde"  # 0xDEC00621, 28 bytes after the start of _start_ModuleParams


def module_segments(rom: bytes, module: str) -> list[tuple[str, int, bytes]]:
    """[(name, ram address, decompressed bytes)] of one module of a ROM: 'arm9' (main + its autoloads), 'arm7',
    'ovN' (ARM9 overlay N)."""
    m = re.fullmatch(r"ov(\d+)", module)
    if m:
        ov_id = int(m.group(1))
        table, n, fat = u32(rom, 0x50), u32(rom, 0x54) // 32, u32(rom, 0x48)
        if ov_id >= n:
            raise SystemExit(f"no overlay {ov_id}: the ROM has {n}")
        e = table + ov_id * 32
        vma, fid, flag = u32(rom, e + 4), u32(rom, e + 24), u32(rom, e + 28)
        data = rom[u32(rom, fat + fid * 8): u32(rom, fat + fid * 8 + 4)]
        return [(f"ov{ov_id:03d}", vma, blz_decompress(data) if flag & 0x01000000 else data)]
    if module == "arm7":
        off, vma, size = u32(rom, 0x30), u32(rom, 0x38), u32(rom, 0x3C)
        return [("arm7", vma, rom[off:off + size])]
    if module != "arm9":
        raise SystemExit(f"unknown module {module!r}: arm9, arm7 or ovN")
    off, vma, size = u32(rom, 0x20), u32(rom, 0x28), u32(rom, 0x2C)
    data = rom[off:off + size]
    x = data.find(MODULE_PARAMS_MAGIC)
    if x < 28:
        return [("arm9", vma, data)]
    params = x - 28
    comp_end = u32(data, params + 20)
    if comp_end:
        data = blz_decompress(data[:comp_end - vma]) + data[comp_end - vma:]
    atab_start, atab_end, aload = struct.unpack_from("<III", data, params)
    if not (vma <= aload <= vma + len(data) and vma <= atab_start <= atab_end <= vma + len(data)):
        return [("arm9", vma, data)]
    out = [("arm9", vma, data[:aload - vma])]
    pos = aload - vma
    for start, seg_size, _bss in struct.iter_unpack("<III", data[atab_start - vma: atab_end - vma]):
        name = "itcm" if start < 0x02000000 else "dtcm" if 0x027E0000 <= start < 0x02800000 else f"autoload_{start:08x}"
        out.append((name, start, data[pos:pos + seg_size]))
        pos += seg_size
    return out


SYM = re.compile(r"^(\S+) kind:(function|data|bss)\(([^)]*)\) addr:0x([0-9a-fA-F]+)")


def load_symbols(module: str) -> list[tuple[int, int, str, str]]:
    """[(addr, end, name, 'arm'|'thumb'|'data')] sorted, from the game's dsd symbols.txt files of the module."""
    try:
        import project
    except Exception:  # noqa: BLE001  (no game folder: no names, everything is guessed as ARM)
        return []
    arm9 = project.CONFIG / "arm9"
    m = re.fullmatch(r"ov(\d+)", module)
    if m:
        files = [arm9 / "overlays" / f"ov{int(m.group(1)):03d}" / "symbols.txt"]
    elif module == "arm9":
        files = [arm9 / "symbols.txt", *sorted(arm9.glob("*/symbols.txt"))]
        files = [f for f in files if f.parent.name != "overlays"]
    else:
        files = [project.CONFIG / "arm7" / "symbols.txt"]
    out = []
    for f in files:
        if not f.exists():
            continue
        for line in f.read_text(encoding="utf-8", errors="replace").splitlines():
            s = SYM.match(line)
            if not s:
                continue
            name, kind, args, addr = s.group(1), s.group(2), s.group(3), int(s.group(4), 16)
            size = re.search(r"size=0x([0-9a-fA-F]+)", args)
            end = addr + (int(size.group(1), 16) if size else 0)
            mode = ("thumb" if "thumb" in args else "arm") if kind == "function" else "data"
            out.append((addr, end, name, mode))
    return sorted(out)


def objdump_lines(objdump: str, code: bytes, vma: int, thumb: bool, arch: str) -> list[str]:
    fd, tmp = tempfile.mkstemp(suffix=".bin")
    try:
        with os.fdopen(fd, "wb") as f:
            f.write(code)
        cmd = [objdump, "-D", "-z", "-b", "binary", f"-m{arch}", f"--adjust-vma=0x{vma:x}", tmp]
        if thumb:
            cmd.insert(2, "-Mforce-thumb")
        text = subprocess.run(cmd, capture_output=True, text=True).stdout
    finally:
        os.unlink(tmp)
    return [ln.rstrip() for ln in text.splitlines() if re.match(r"^\s*[0-9a-f]+:\t", ln)]


def word_lines(data: bytes, vma: int) -> list[str]:
    return [f"{vma + i:8x}:\t{data[i:i + 4].hex(' ')}" for i in range(0, len(data), 4)]


def disasm_diff(a: bytes, b: bytes, module: str, lo: int | None, hi: int | None, max_runs: int, context: int):
    objdump = shutil.which("arm-none-eabi-objdump")
    if objdump is None:
        raise SystemExit("arm-none-eabi-objdump not found in PATH: dot-source env.ps1 (or source env.sh) first")
    arch = "armv4t" if module == "arm7" else "armv5te"
    sa, sb = module_segments(a, module), module_segments(b, module)
    syms = load_symbols(module)
    starts = [s[0] for s in syms]
    if [s[:2] for s in sa] != [s[:2] for s in sb]:
        print("segments differ: " + ", ".join(f"{n}@{v:08x}" for n, v, _ in sa) + "  ->  "
              + ", ".join(f"{n}@{v:08x}" for n, v, _ in sb))
    shown = total = 0
    for (name, vma, da), (_, vb, db) in zip(sa, sb):
        if vb != vma:
            print(f"{name}: loaded at 0x{vma:08x} in the original, 0x{vb:08x} in the rebuilt ROM")
        if len(da) != len(db):
            print(f"{name}: {len(da)} bytes -> {len(db)} bytes (everything after the first difference may be shifted)")
        runs = [(vma + s, vma + e) for s, e in diff_runs(da, db)]
        runs = [(s, e) for s, e in runs if (lo is None or e > lo) and (hi is None or s < hi)]
        if len(da) != len(db) and not runs:
            n = min(len(da), len(db))
            runs = [(vma + n, vma + n + 4)]
        total += len(runs)
        print(f"{name} @ 0x{vma:08x}: {len(runs)} differing run(s)")
        printed_to = 0
        for s, e in runs:
            if e <= printed_to:  # already inside the window printed for the previous run
                total -= 1
                continue
            if shown >= max_runs:
                break
            shown += 1
            k = bisect.bisect_right(starts, s) - 1
            sym = syms[k] if k >= 0 and syms[k][0] <= s < max(syms[k][1], syms[k][0] + 1) else None
            mode = sym[3] if sym else "arm"
            step = 2 if mode == "thumb" else 4
            w0 = max(vma, (s - context) & ~3)
            w1 = min(vma + max(len(da), len(db)), (e + context + 3) & ~3)
            if sym and mode != "data":  # the whole function when it is small, else the context window inside it
                if sym[1] - sym[0] <= 4 * context:
                    w0, w1 = max(vma, sym[0]), sym[1]
                else:
                    w0, w1 = max(w0, sym[0]), min(w1, sym[1]) if sym[1] > e else w1
            w0 &= ~(step - 1)
            cut = w1 - w0 > 512
            if cut:
                w1 = w0 + 512
            printed_to = w1
            ca, cb = da[w0 - vma:w1 - vma], db[w0 - vma:w1 - vma]
            where = f"{sym[2]} ({mode})" if sym else "no symbol (shown as ARM)"
            if name == "arm9" and s < vma + 0x800:
                where += ", secure area (encrypted in some dumps)"
            print(f"\n=== {name} 0x{s:08x}-0x{e:08x} ({e - s} bytes) in {where}"
                  + (f", first 512 bytes from 0x{w0:08x}" if cut else ""))
            if mode == "data":
                la, lb = word_lines(ca, w0), word_lines(cb, w0)
            else:
                la = objdump_lines(objdump, ca, w0, mode == "thumb", arch)
                lb = objdump_lines(objdump, cb, w0, mode == "thumb", arch)
            for ln in difflib.unified_diff(la, lb, "original", "rebuilt", n=3, lineterm=""):
                print(ln)
    if total > shown:
        print(f"\n... {total - shown} more run(s): --max N to see them, --from/--to to pick a range")


def rom_paths(paths: list[str]) -> tuple[Path, Path]:
    if len(paths) == 2:
        return Path(paths[0]), Path(paths[1])
    import project
    orig = ROOT / "extract" / f"baserom_{project.GAME}_{project.VERSION}.nds"
    if not orig.exists():
        orig = next((ROOT / "extract").glob("baserom*.nds"))
    return orig, ROOT / project.ROM_NAME


def main():
    ap = argparse.ArgumentParser(description="Where the rebuilt ROM differs from the original one")
    ap.add_argument("roms", nargs="*", help="<original> <rebuilt> (default: the game's baserom and built ROM)")
    ap.add_argument("--disasm", metavar="MODULE", help="disassembled diff of arm9, arm7 or ovN")
    ap.add_argument("--from", dest="lo", type=lambda x: int(x, 0), help="first RAM address to look at")
    ap.add_argument("--to", dest="hi", type=lambda x: int(x, 0), help="RAM address where to stop")
    ap.add_argument("--max", type=int, default=10, help="differing runs shown (default 10)")
    ap.add_argument("--context", type=int, default=32, help="bytes shown around a run in a big function (default 32)")
    args = ap.parse_args()
    if len(args.roms) not in (0, 2):
        ap.error("give both ROMs or none")
    orig, new = rom_paths(args.roms)
    a, b = orig.read_bytes(), new.read_bytes()
    if args.disasm:
        print(f"original {orig.name}, rebuilt {new.name}, module {args.disasm}")
        disasm_diff(a, b, args.disasm.lower(), args.lo, args.hi, args.max, args.context)
        return
    print(f"original {orig.name}: {len(a)} bytes, rebuilt {new.name}: {len(b)} bytes")
    for off, size, name in HEADER_FIELDS:
        if a[off:off + size] != b[off:off + size]:
            fa = int.from_bytes(a[off:off + size], "little") if size <= 4 else a[off:off + size]
            fb = int.from_bytes(b[off:off + size], "little") if size <= 4 else b[off:off + size]
            print(f"  header {name} (0x{off:03x}): {fa:#x} -> {fb:#x}" if size <= 4 else f"  header {name}: {fa} -> {fb}")
    ra = regions(a)
    runs = diff_runs(a, b)
    print(f"{len(runs)} differing runs, {sum(e - s for s, e in runs)} bytes")
    shown = 0
    for s, e in runs:
        owners = [n for rs, re_, n in ra if rs < e and s < re_] or ["padding / unused"]
        if shown < 40:
            print(f"  0x{s:08x}-0x{e:08x} ({e - s} bytes): {', '.join(owners[:3])}")
        shown += 1
    if len(a) != len(b):
        tail = a[len(b):] if len(a) > len(b) else b[len(a):]
        print(f"size differs; the extra bytes are {'all 0xFF' if set(tail) == {0xFF} else 'all 0' if set(tail) == {0} else 'data'}")


if __name__ == "__main__":
    main()
