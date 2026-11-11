"""Index-based archives (Amaze engine: Lego Star Wars II, The Sims 2 DS...): files/rom.bin = a table of u32 offsets
(entry n starts at offset[n], the last one is the end), no names. The game loads "file n", so names come from code.

    python ../../studio/gametools/romarc.py list [--magic]          # entries: size, packing, content magic
    python ../../studio/gametools/romarc.py extract [N ...]         # unpacked to build/romarc/<n>.<ext>
    python ../../studio/gametools/romarc.py users [N ...] [--json]  # which functions load file n (const / table)

Entry packing (game function that unpacks, Lego func_02059efc): u32 header, bits 4-7 = kind, bits 8-31 = size.
kind & 7: 0 raw copy, 1 SDK LZ77, 2 SDK Huffman, 3 SDK run-length, 6 the game's own bit coder in ITCM (func_01ff8000,
hand-written ARM, run in the unicorn ARM emulator: pip install unicorn; left packed without it).
kind & 8: 16-bit delta filter after unpacking (a[i] += a[i-1]).

`users` finds the loaders by itself: the function naming "rom.bin" opens a file handle; the readers of that
handle that seek to index*4 are the loaders; functions passing their own r0 to a loader are loaders too. At each
call of a loader, the value of r0 is read back from the instructions before the call: a constant (mov #imm, a
literal) or a u16 field of a data table (ldrh from a table symbol), whose values are then all file numbers.
"""
import argparse
import json
import re
import struct
import sys
from collections import defaultdict
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))


# ---------------------------------------------------------------- archive

def find_archive(ext: Path) -> Path | None:
    for name in ("rom.bin",):
        hits = sorted((ext / "files").rglob(name))
        if hits:
            return hits[0]
    return None


def entries(data: bytes) -> list[tuple[int, int]]:
    """(offset, size) of every entry; [] if data is not an offset table."""
    if len(data) < 8:
        return []
    first = struct.unpack_from("<I", data, 0)[0]
    if first % 4 or first < 8 or first > len(data):
        return []
    offs = struct.unpack_from(f"<{first // 4}I", data, 0)
    if any(b < a for a, b in zip(offs, offs[1:])) or offs[-1] > len(data):
        return []
    return [(a, b - a) for a, b in zip(offs, offs[1:])]


def header(blob: bytes):
    """(kind, unpacked size) of a packed entry, or None when the u32 header does not fit the blob."""
    if len(blob) < 4:
        return None
    h = struct.unpack_from("<I", blob, 0)[0]
    kind, size = (h >> 4) & 0xF, h >> 8
    k = kind & 7
    if k not in (0, 1, 2, 3, 6) or not size or size > 64 * len(blob) + 64:
        return None
    if k in (1, 3) and (blob[0] & 0xF or size < len(blob) - 8):  # SDK LZ77 / RLE: 0x10 / 0x30, they expand
        return None
    if k == 0 and not len(blob) - 8 < size <= len(blob) - 4:  # stored: the size is the blob's (+ padding)
        return None
    if k == 2 and (blob[0] & 0xF not in (4, 8) or size < len(blob) - 8  # Huffman 4/8 bits, it expands,
                   or len(blob) < 8 + size * (blob[0] & 0xF) // 64):  # but by 8 times at most

        return None
    if k == 6 and size < len(blob) - 8:  # the coder expands too
        return None
    if kind & 8 and size % 2:  # the delta filter works on u16
        return None
    return kind, size


def huffman(src: bytes) -> bytes:
    """Nintendo Huffman (BIOS/SDK MI_UncompressHuffman): header 0x2N, N = bits per symbol (4 or 8)."""
    bits, size = src[0] & 0xF, struct.unpack_from("<I", src, 0)[0] >> 8
    tree = 4
    tree_end = tree + (src[4] + 1) * 2
    out, cur, nib = bytearray(), 0, 0
    pos, node = tree_end, tree + 1  # root node at tree+1
    while len(out) < size and pos + 4 <= len(src):
        word = struct.unpack_from("<I", src, pos)[0]
        pos += 4
        for b in range(31, -1, -1):
            bit = (word >> b) & 1
            off = src[node]
            child = (node & ~1) + (off & 0x3F) * 2 + 2 + bit
            leaf = off & (0x40 if bit else 0x80)
            if leaf:
                sym = src[child]
                if bits == 8:
                    out.append(sym)
                else:
                    cur |= (sym & 0xF) << (4 * nib)
                    nib += 1
                    if nib == 2:
                        out.append(cur)
                        cur, nib = 0, 0
                node = tree + 1
                if len(out) >= size:
                    break
            else:
                node = child
    return bytes(out[:size])


def lz77(src: bytes, size: int) -> bytes:
    """Nintendo LZ77 (BIOS/SDK MI_UncompressLZ8, header 0x10)."""
    out, pos = bytearray(), 4
    while len(out) < size:
        flags = src[pos]
        pos += 1
        for b in range(7, -1, -1):
            if len(out) >= size:
                break
            if flags >> b & 1:
                n, d = (src[pos] >> 4) + 3, ((src[pos] & 0xF) << 8 | src[pos + 1]) + 1
                pos += 2
                if d > len(out):
                    raise IndexError("lz77 back reference before the start")
                for _ in range(n):
                    out.append(out[-d])
            else:
                out.append(src[pos])
                pos += 1
    return bytes(out[:size])


def rle(src: bytes, size: int) -> bytes:
    """Nintendo run-length (BIOS/SDK MI_UncompressRL8, header 0x30)."""
    out, pos = bytearray(), 4
    while len(out) < size:
        f = src[pos]
        pos += 1
        if f & 0x80:
            out += bytes([src[pos]]) * ((f & 0x7F) + 3)
            pos += 1
        else:
            out += src[pos:pos + (f & 0x7F) + 1]
            pos += (f & 0x7F) + 1
    return bytes(out[:size])


def bitcoder(itcm: tuple[int, bytes] | None, src: bytes, size: int, entry: int) -> bytes | None:
    """Kind 6: run the game's own unpacker (ITCM, `entry`) in unicorn. None without unicorn or ITCM."""
    try:
        import unicorn
        from unicorn import arm_const as A
    except ImportError:
        return None
    if not itcm:
        return None
    base, code = itcm
    mu = unicorn.Uc(unicorn.UC_ARCH_ARM, unicorn.UC_MODE_ARM)
    page = lambda n: (n + 0xFFF) & ~0xFFF  # noqa: E731
    mu.mem_map(base & ~0xFFF, page(len(code) + (base & 0xFFF)))
    mu.mem_write(base, code)
    SRC, DST, STK, RET = 0x10000000, 0x20000000, 0x30000000, 0x40000000
    mu.mem_map(SRC, page(len(src) + 64))
    mu.mem_write(SRC, src)
    mu.mem_map(DST, page(size + 64))
    mu.mem_map(STK, 0x10000)
    mu.mem_map(RET, 0x1000)
    mu.reg_write(A.UC_ARM_REG_R0, SRC + 4)
    mu.reg_write(A.UC_ARM_REG_R1, DST)
    mu.reg_write(A.UC_ARM_REG_R2, STK + 0x8000)  # &size (unused by the coder)
    mu.reg_write(A.UC_ARM_REG_SP, STK + 0xF000)
    mu.reg_write(A.UC_ARM_REG_LR, RET)
    try:
        mu.emu_start(entry, RET, count=200_000_000)
    except unicorn.UcError:
        return None
    return bytes(mu.mem_read(DST, size))


def unpack(blob: bytes, itcm=None, entry: int = 0x01FF8000):
    """(bytes, how) for an entry: unpacked when the format is known, else the raw blob."""
    h = header(blob)
    if not h:
        return blob, "raw"
    kind, size = h
    k = kind & 7
    if k == 0:
        out = blob[4:4 + size]
    elif k in (1, 3):  # SDK LZ77 / run-length (The Sims 2 DS uses them, Lego does not)
        try:
            out = (lz77 if k == 1 else rle)(blob, size)
        except IndexError:
            return blob, "raw"
    elif k == 2:  # the SDK decoder reads the same u32 header (low nibble = bits per symbol)
        try:
            out = huffman(blob)
        except IndexError:  # a raw entry whose first byte looks like a Huffman header
            return blob, "raw"
    else:
        out = bitcoder(itcm, blob, size, entry)
        if out is None:
            return blob, "packed6"
    if kind & 8:
        a = list(struct.unpack_from(f"<{len(out) // 2}H", out))
        for i in range(1, len(a)):
            a[i] = (a[i] + a[i - 1]) & 0xFFFF
        out = struct.pack(f"<{len(a)}H", *a) + out[len(a) * 2:]
    return out, ["copy", "lz77", "huffman", "rle", "", "", "coder6"][k] + ("+delta" if kind & 8 else "")


def magic(b: bytes) -> str:
    m = b[:4]
    if len(m) == 4 and all(48 <= c < 123 for c in m):
        return m.decode()
    return ""


EXT = {"BMD0": "nsbmd", "BTX0": "nsbtx", "BCA0": "nsbca", "BVA0": "nsbva", "BTA0": "nsbta", "BTP0": "nsbtp",
       "BMA0": "nsbma", "RGCN": "ncgr", "RLCN": "nclr", "RCSN": "nscr", "RECN": "ncer", "RNAN": "nanr", "SDAT": "sdat"}


# ---------------------------------------------------------------- code: loaders and file numbers

LINE = re.compile(r"^\s+(\w+)\s*(.*?)\s*(?:;.*)?$")
LIT = re.compile(r"^(\.L_\w+):\s*\.word\s+(\S+)")
FUNC = re.compile(r"^(\w+):\s*(?:;.*)?$")


def parse_asm(asm_dir: Path):
    """{func: [(op, args)]} and {literal label: word} from dsd's disassembly (build/<version>/asm)."""
    funcs, lits = {}, {}
    for f in asm_dir.rglob("*.s"):
        cur = None
        for line in f.read_text(encoding="utf-8", errors="replace").splitlines():
            m = LIT.match(line)
            if m:
                lits[m.group(1)] = m.group(2)
                continue
            m = FUNC.match(line)
            if m and not m.group(1).startswith(".L"):
                cur = funcs.setdefault(m.group(1), [])
                continue
            m = LINE.match(line)
            if m and cur is not None and not m.group(1).startswith("."):
                if m.group(1).endswith("func_end"):
                    cur = None
                    continue
                cur.append((m.group(1), m.group(2)))
    return funcs, lits


def full_asm(root: Path, arm9: Path) -> Path:
    """Disassembly of ALL the code (build/<version>/asm only has the unmatched gaps): dsd dis on a copy of the
    config whose delinks keep their sections but no source file. Cached in build/xref_asm until the config changes."""
    import shutil
    import subprocess
    out = root / "build" / "xref_asm"
    stamp = max(f.stat().st_mtime for f in arm9.rglob("*.txt"))
    if (out / "asm").exists() and (out / "stamp").exists() and float((out / "stamp").read_text()) >= stamp:
        return out / "asm"
    dsd = next((root / n for n in ("dsd-dsi.exe", "dsd.exe", "dsd") if (root / n).exists()), None)
    if not dsd:
        raise SystemExit("no dsd in the game folder")
    shutil.rmtree(out, ignore_errors=True)
    shutil.copytree(arm9, out / "arm9")  # build/xref_asm/arm9: three levels below the game, like config/<v>/arm9
    for f in (out / "arm9").rglob("delinks.txt"):
        keep = []
        for line in f.read_text(encoding="utf-8").splitlines():
            if line and not line[0].isspace() and line.rstrip().endswith(":"):
                break
            keep.append(line)
        f.write_text("\n".join(keep) + "\n", encoding="utf-8")
    subprocess.run([str(dsd.resolve()), "dis", "-c", str(out / "arm9" / "config.yaml"), "-a", str(out / "asm"), "--ual"],
                   cwd=root, check=True, capture_output=True)
    (out / "stamp").write_text(str(stamp))
    return out / "asm"


def regs(args: str) -> list[str]:
    return [a.strip("[]!{} ") for a in args.split(",")]


def writes_r0(op: str, args: str) -> bool:
    base = re.sub(r"(eq|ne|cs|hs|cc|lo|mi|pl|vs|vc|hi|ls|ge|lt|gt|le|al)$", "", op)
    if base.startswith(("str", "cmp", "cmn", "tst", "teq", "b", "push", "pop", "stm")):
        return base.startswith("pop") and "r0" in args or base.startswith("ldm") and "r0" in args.split("{")[-1]
    return regs(args)[0] == "r0" if args else False


def value_r0(body, i, lits, depth=0):
    """What r0 holds at instruction i (a bl): ('const', n), ('table', symbol, field offset, stride) or None."""
    want = "r0"
    for j in range(i - 1, max(-1, i - 24), -1):
        op, args = body[j]
        if op.startswith("b") and not op.startswith(("bic",)) or op.startswith("pop"):
            return None  # another path joins here
        r = regs(args)
        if not args or r[0] != want or op.startswith(("str", "cmp", "cmn", "tst", "push")):
            continue
        if op in ("mov", "movs") and r[1].startswith("#"):
            return ("const", int(r[1][1:], 0))
        if op in ("mov", "movs") and re.fullmatch(r"r\d+|ip|lr", r[1]):
            want = r[1]
            continue
        if op == "ldr" and r[1].startswith(".L_"):
            w = lits.get(r[1], "")
            return ("const", int(w, 0)) if re.fullmatch(r"(0x)?[0-9a-fA-F]+", w) else None
        if op in ("ldrh", "ldrsh"):
            base = r[1]
            off = int(r[2][1:], 0) if len(r) > 2 and r[2].startswith("#") else 0
            stride = None
            for k in range(j - 1, max(-1, j - 12), -1):  # the table: base register loaded from a literal
                o2, a2 = body[k]
                r2 = regs(a2)
                if o2 in ("mov", "movs") and len(r2) > 1 and r2[1].startswith("#") and stride is None:
                    stride = int(r2[1][1:], 0)
                if r2 and r2[0] == base and o2 == "ldr" and r2[1].startswith(".L_"):
                    sym = lits.get(r2[1], "")
                    return ("table", sym, off, stride if len(r) > 2 and not r[2].startswith("#") else None) \
                        if sym and not re.fullmatch(r"(0x)?[0-9a-fA-F]+", sym) else None
                if r2 and r2[0] == base and o2 == "add" and len(r2) > 2 and r2[2].startswith("#"):
                    off += int(r2[2][1:], 0)
                    base = r2[1]
            return None
        return None
    return None


def call_target(body, i, lits) -> str | None:
    """The function called at body[i]: bl/blx NAME, a tail call b NAME, or ldr rN, =NAME ... bx/blx rN."""
    op, a = body[i]
    r = regs(a)
    if not r or not r[0]:
        return None
    if op in ("bl", "blx", "b") and not r[0].startswith(".L") and not re.fullmatch(r"r\d+|ip|lr", r[0]):
        return r[0]
    if op in ("bx", "blx") and re.fullmatch(r"r\d+|ip", r[0]):
        for o, x in reversed(body[max(0, i - 8):i]):
            rr = regs(x)
            if rr and rr[0] == r[0]:
                return lits.get(rr[1]) if o == "ldr" and len(rr) > 1 and rr[1].startswith(".L") else None
    return None


def loaders(funcs, lits, opener: str):
    """The functions that load 'file n' with n in r0: readers of the archive handle, then their r0 wrappers."""
    handles = {lits[a.split(",")[-1].strip()] for op, a in funcs.get(opener, []) if op == "ldr" and ".L_" in a
               and a.split(",")[-1].strip() in lits}
    found = set()
    for f, body in funcs.items():
        uses = any(op == "ldr" and lits.get(regs(a)[-1], "") in handles for op, a in body)
        if not uses:
            continue
        for i, (op, a) in enumerate(body):  # index * 4 into r1 before a call: seek in the offset table
            if call_target(body, i, lits) and any(o == "lsl" and regs(x)[0] == "r1" and regs(x)[-1] == "#0x2"
                                  for o, x in body[max(0, i - 10):i]):
                found.add(f)
    changed = True
    while changed:  # wrappers: call a loader with their own r0 (or a copy of it)
        changed = False
        for f, body in funcs.items():
            if f in found:
                continue
            arg = {"r0"}
            for i, (op, a) in enumerate(body):
                r = regs(a)
                tgt = call_target(body, i, lits)
                if tgt:
                    if tgt in found and "r0" in arg:
                        found.add(f)
                        changed = True
                        break
                    arg -= {"r0", "r1", "r2", "r3", "ip"}
                    continue
                if op in ("mov", "movs") and len(r) > 1 and r[1] in arg:
                    arg.add(r[0])
                elif a and writes_r0(op, a) or (r and r[0] in arg and not op.startswith(("str", "cmp", "tst", "push"))):
                    arg.discard(r[0] if r else "r0")
                if not arg:
                    break
    return found


def users(game_root: Path, version: str, arm9: Path):
    import xref  # same folder
    funcs, lits = parse_asm(full_asm(game_root, arm9))
    ix = xref.Index(arm9)
    opener = None
    for r in xref.files(ix, arm9).get("rows", []):
        if r["string"].lstrip("/").lower().endswith("rom.bin") and r["users"]:
            opener = r["users"][0]["name"]
    if not opener:
        return {"error": "no function names rom.bin"}
    lds = loaders(funcs, lits, opener)
    calls = []
    for f, body in funcs.items():
        for i, (op, a) in enumerate(body):
            tgt = call_target(body, i, lits) if op.startswith("b") else None
            if tgt in lds and f not in lds:
                calls.append((f, tgt, value_r0(body, i, lits)))
    images = xref.module_images(arm9)
    by_file = defaultdict(list)
    tables = defaultdict(set)
    for f, ld, v in calls:
        if v and v[0] == "const":
            by_file[v[1]].append({"function": f, "via": ld, "how": "const"})
        elif v and v[0] == "table":
            tables[(v[1], v[2], v[3])].add(f)
    table_rows = []
    for (sym, off, stride), fs in tables.items():
        hit = [h for h in ix.find(sym) if h["kind"] != "function"]
        ids = []
        if hit and hit[0]["module"] in images:
            base, data = images[hit[0]["module"]]
            a, e = hit[0]["addr"] - base, hit[0]["end"] - base
            step = stride or (e - a)
            for p in range(a + off, min(e, len(data)) - 1, max(step, 2)):  # .bss tables: no values in the ROM
                ids.append(struct.unpack_from("<H", data, p)[0])
        for n in ids:
            by_file[n].append({"function": sorted(fs)[0], "via": "", "how": f"table {sym}+0x{off:x}"})
        table_rows.append({"table": sym, "field": off, "stride": stride, "functions": sorted(fs), "ids": ids[:400]})
    matched = {}
    for f in {c[0] for c in calls} | lds:
        h = ix.find(f)
        matched[f] = bool(h) and ix.mods[h[0]["module"]].is_matched(h[0]["addr"])
    for k, us in by_file.items():  # one row per (function, how)
        seen = {}
        for u in us:
            seen.setdefault((u["function"], u["how"]), {**u, "n": 0})["n"] += 1
        by_file[k] = list(seen.values())
    info, total = {}, 0
    cfg =(arm9 / "config.yaml").read_text(encoding="utf-8")
    m = re.search(r"^rom_config:\s*(.+)$", cfg, re.M)
    arc = find_archive((arm9 / m.group(1).strip()).resolve().parent) if m else None
    if arc:
        data = arc.read_bytes()
        ents = entries(data)
        total = len(ents)
        for k in by_file:
            if k < total:
                o, s = ents[k]
                h = header(data[o:o + s])
                info[str(k)] = {"size": s, "packed": f"kind {h[0]:x}" if h else "", "unpacked": h[1] if h else s,
                                "magic": magic(data[o:o + s])}
    return {"opener": opener, "loaders": sorted(lds), "calls": len(calls), "entries": total,
            "unknown_calls": sum(1 for c in calls if not c[2]), "info": info,
            "files": {str(k): v for k, v in sorted(by_file.items())}, "tables": table_rows, "matched": matched}


def main():
    from project import ARM9, EXTRACT, ROOT, VERSION, BUILD
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("cmd", choices=["list", "extract", "users"])
    ap.add_argument("n", nargs="*", type=int)
    ap.add_argument("--magic", action="store_true", help="list: unpack every entry to show its content magic")
    ap.add_argument("--out", default=str(BUILD.parent / "romarc"))
    ap.add_argument("--json", action="store_true")
    args = ap.parse_args()
    arc = find_archive(EXTRACT)
    if args.cmd == "users":
        res = users(ROOT, VERSION, ARM9)
        if args.json:
            return print(json.dumps(res, indent=1))
        if "error" in res:
            raise SystemExit(res["error"])
        mk = lambda f: ("[x] " if res["matched"].get(f) else "[ ] ") + f  # noqa: E731
        print(f"archive opened by {res['opener']}; loaders: {', '.join(mk(f) for f in res['loaders'])}")
        print(f"{res['calls']} loader calls, {res['unknown_calls']} with a file number not found statically")
        for t in res["tables"]:
            print(f"table {t['table']}+0x{t['field']:x} stride {t['stride']}: {len(t['ids'])} ids, used by "
                  + ", ".join(mk(f) for f in t["functions"]))
        for k, v in res["files"].items():
            if not args.n or int(k) in args.n:
                print(f"file {k}: " + ", ".join(f"{mk(u['function'])} ({u['how']})" for u in v))
        return
    if not arc:
        raise SystemExit("no rom.bin in extract/: not an index archive game")
    data = arc.read_bytes()
    ents = entries(data)
    import xref
    itcm = xref.module_images(ARM9).get("itcm")
    if args.cmd == "list":
        kinds = defaultdict(int)
        for n, (o, s) in enumerate(ents):
            if args.n and n not in args.n:
                continue
            blob = data[o:o + s]
            h = header(blob)
            how = f"kind {h[0]:x} -> {h[1]} B" if h else "raw"
            mg = magic(unpack(blob, itcm)[0]) if args.magic else magic(blob)
            kinds[mg or how.split(" ->")[0]] += 1
            if args.n or len(ents) < 60:
                print(f"{n:5d}  0x{o:08x}  {s:8d}  {how:<22} {mg}")
        print(f"{len(ents)} entries in {arc.relative_to(EXTRACT)}: " + ", ".join(f"{k} {v}" for k, v in
                                                                                sorted(kinds.items(), key=lambda x: -x[1])))
    else:
        out = Path(args.out)
        out.mkdir(parents=True, exist_ok=True)
        done = defaultdict(int)
        for n in args.n or range(len(ents)):
            o, s = ents[n]
            b, how = unpack(data[o:o + s], itcm)
            ext = EXT.get(magic(b), "packed" if how.startswith("packed") else "bin")
            (out / f"{n:05d}.{ext}").write_bytes(b)
            done[how] += 1
        print(f"{sum(done.values())} entries -> {out}: " + ", ".join(f"{k} {v}" for k, v in done.items()))
        if done.get("packed6"):
            print("kind 6 left packed: pip install unicorn to run the game's own unpacker")


if __name__ == "__main__":
    main()
