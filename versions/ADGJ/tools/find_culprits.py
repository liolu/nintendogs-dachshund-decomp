#!/usr/bin/env python3
"""Finds the source files that break the ROM, from ONE build, and can drop them.

    python tools/find_culprits.py              # build, then list the culprit files and why
    python tools/find_culprits.py --fix        # drop the culprits that are not committed yet, rebuild, repeat
    python tools/find_culprits.py --fix --any  # may also drop committed files (careful)

A file can match in objdiff and still break the ROM: objdiff masks literal-pool words (a pool in another order),
a `static` function becomes a local symbol, a file can shift everything after it... Instead of bisecting (one full
build per step), this tool compares every rebuilt module (ARM9 main, ITCM, DTCM, overlays) with the original byte by
byte and maps each difference to the `complete` file of delinks.txt that covers it. It also reads the errors of the
build (compile errors, `check symbols`). Dropped files are moved to build/culprits/<date>/ (nothing is deleted).

Shifts: when one file grows, everything after it moves, and every `bl`/`blx`/Thumb bl/pointer that targets the moved
code, in every module, differs by a byte or two (thousands of "1 byte(s) differ" in innocent files). The linker map
(symbols named after their address, placed elsewhere) gives the object that grew and the move deltas; a differing
word that is the same reference to a target moved by such a delta is counted under "(moved references)", not blamed.
"""
import argparse
import re
import shutil
import subprocess
import sys
import time
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import project  # noqa: E402

ROOT = project.ROOT
OUT = project.BUILD / "build"
BLOCK_RE = re.compile(r"^(\S+):\n((?:[ \t]+.*\n?)*)", re.M)
SECTION_RE = re.compile(r"\.(\w+)\s+start:0x([0-9a-f]+) end:0x([0-9a-f]+)")


def run(cmd, **kw):
    return subprocess.run(cmd, cwd=ROOT, capture_output=True, text=True, encoding="utf-8", errors="replace", **kw)


def base_address(yaml_file: Path, overlay_id: int | None = None) -> int | None:
    if not yaml_file.exists():
        return None
    text = yaml_file.read_text(encoding="utf-8", errors="replace")
    if overlay_id is None:
        m = re.search(r"^base_address:\s*(\d+)", text, re.M)
        return int(m.group(1)) if m else None
    for m in re.finditer(r"-\s*id:\s*(\d+)\s*\n(?:\s+\w+:.*\n)*?\s+base_address:\s*(\d+)", text):
        if int(m.group(1)) == overlay_id:
            return int(m.group(2))
    return None


def modules() -> list[dict]:
    """(name, rebuilt file, original file, base address, delinks.txt) of every module."""
    ex = project.EXTRACT / "arm9"
    mods = [{"name": "ARM9 main", "built": OUT / "arm9.bin", "orig": ex / "arm9.bin",
             "base": base_address(ex / "arm9.yaml"), "delinks": project.ARM9 / "delinks.txt"}]
    for tcm in ("itcm", "dtcm"):
        mods.append({"name": tcm.upper(), "built": OUT / f"{tcm}.bin", "orig": ex / f"{tcm}.bin",
                     "base": base_address(ex / f"{tcm}.yaml"), "delinks": project.ARM9 / tcm / "delinks.txt"})
    ov_dir = project.EXTRACT / "arm9_overlays"
    ov_yaml = next(iter(sorted(ov_dir.glob("*.yaml"))), None) if ov_dir.exists() else None
    for built in sorted(OUT.glob("arm9_ov*.bin")):
        n = int(re.search(r"ov(\d+)", built.name).group(1))
        mods.append({"name": f"overlay {n}", "built": built, "orig": ov_dir / f"ov{n:03d}.bin",
                     "base": base_address(ov_yaml, n) if ov_yaml else None,
                     "delinks": project.ARM9 / "overlays" / f"ov{n:03d}" / "delinks.txt"})
    return [m for m in mods if m["built"].exists() and m["orig"].exists() and m["base"] is not None]


def complete_files(delinks: Path) -> list[tuple[str, int, int]]:
    """[(source file, start, end)] of every section of every `complete` file."""
    if not delinks.exists():
        return []
    out = []
    for m in BLOCK_RE.finditer(delinks.read_text(encoding="utf-8", errors="replace")):
        if "complete" not in m.group(2).split():
            continue
        for _, s, e in SECTION_RE.findall(m.group(2)):
            out.append((m.group(1), int(s, 16), int(e, 16)))
    return out


def diff_ranges(a: bytes, b: bytes, first_only: bool = True) -> tuple[list[tuple[int, int]], bool]:
    """Differing byte runs (offset, length). When the sizes differ only the first difference is meaningful (all of
    them with first_only=False: the caller skips the moved references before it)."""
    n = min(len(a), len(b))
    runs = []
    i = 0
    step = 4096
    while i < n:  # skip identical pages fast
        j = min(i + step, n)
        if a[i:j] == b[i:j]:
            i = j
            continue
        for k in range(i, j):
            if a[k] != b[k]:
                if runs and k - (runs[-1][0] + runs[-1][1]) <= 8:
                    runs[-1] = (runs[-1][0], k - runs[-1][0] + 1)
                else:
                    runs.append((k, 1))
        i = j
    shifted = len(a) != len(b)
    if shifted:
        runs = (runs[:1] or [(n, 1)]) if first_only else runs + [(n, 1)]
    return runs, shifted


MAP_SECTION = re.compile(r"^# \.(arm9|itcm|dtcm|ov\d+)\s*$", re.M)
MAP_SYMBOL = re.compile(r"^\s+([0-9A-Fa-f]{8}) [0-9A-Fa-f]{8} \.\w+\s+(\S+)\t\((\S+?)\.o\)", re.M)
NAMED_ADDR = re.compile(r"(?:^|_)([0-9a-f]{8})$")


def map_module_name(sec: str) -> str:
    return {"arm9": "ARM9 main", "itcm": "ITCM", "dtcm": "DTCM"}.get(sec) or f"overlay {int(sec[2:])}"


def moved_objects(newest_config: float) -> tuple[list[tuple[str, str]], set[int]]:
    """Where the code really moved, read from the linker map: a symbol named after its address (func_0202af6c,
    .L_0202b1d4, data_ov123_020d5034...) placed at another address has moved. The first one of each module tells
    which object grew (the one placed just before it, or the one holding it when it is not its first symbol).
    Returns ([(file, reason)], {address deltas}): the deltas let find() recognise the words that differ only
    because they point to something that moved."""
    xmap = project.BUILD / "arm9.o.xMAP"
    if not xmap.exists() or xmap.stat().st_mtime < newest_config:
        return [], set()
    text = xmap.read_text(encoding="latin-1")
    mods = modules()
    stems = {Path(f).stem: f for mod in mods for f, _, _ in complete_files(mod["delinks"])}
    bases = {mod["name"]: mod["base"] for mod in mods}
    out, deltas = [], set()
    heads = list(MAP_SECTION.finditer(text))
    for i, h in enumerate(heads):
        body = text[h.end():heads[i + 1].start() if i + 1 < len(heads) else len(text)]
        name = map_module_name(h.group(1))
        syms = MAP_SYMBOL.findall(body)
        if not syms:
            continue
        # A module placed after another one (overlays after main) moves as a whole when that one grows: nothing in
        # it is guilty, only what moves inside it relatively to its start.
        whole = int(syms[0][0], 16) - bases[name] if name in bases else 0
        if whole:
            deltas.add(whole)
            out.append(("(moved modules)", f"{name} placed {whole:+#x} as a whole: something placed before it grew"))
        # A gap object (_dsd_gap@...) is cut from the original bytes and cannot grow: the object that grew is the
        # last `complete` one placed before the moved symbol (or the moved symbol's own, when it is inside it).
        prev_obj, last_complete, first = None, None, None
        for placed, sym, obj in syms:
            if obj != prev_obj and prev_obj in stems:
                last_complete = prev_obj
            n = NAMED_ADDR.search(sym)
            if n and not sym.startswith(("@", ".p_")):  # .p__sinit_X: ctor pointer named after the function
                d = int(placed, 16) - int(n.group(1), 16)
                if d and abs(d) < 0x100000:
                    deltas.add(d)
                    if first is None and d != whole:
                        first = (sym, d - whole, obj if obj == prev_obj and obj in stems else last_complete)
            prev_obj = obj
        if first:
            sym, d, grown = first
            f = stems.get(grown or "", "(no complete file)")
            out.append((f, f"{name}: {sym} placed {d:+#x} from its address in the linker map, "
                           f"{grown or 'nothing'}.o before it grew"))
    return out, deltas


def _sext(v: int, bits: int) -> int:
    return v - (1 << bits) if v & (1 << (bits - 1)) else v


def reference_deltas(o: bytes, c: bytes, off: int) -> list[tuple[bool, int]]:
    """The readings of the 4 bytes at `off` as the same reference to two targets: [(relative?, target difference)].
    Relative: ARM b/bl/blx, Thumb bl/blx pair; else an absolute pointer. A word can read several ways (a Thumb
    pair also looks like an ARM bl): all are returned."""
    if off < 0 or off + 4 > min(len(o), len(c)):
        return []
    wo, wc = int.from_bytes(o[off:off + 4], "little"), int.from_bytes(c[off:off + 4], "little")
    if wo == wc:
        return []
    out = []
    if off % 4 == 0:
        if wo >> 24 == wc >> 24 and (wo >> 25) & 7 == 5:  # b/bl (any condition), blx imm (H bit equal)
            out.append((True, (_sext(wc & 0xFFFFFF, 24) - _sext(wo & 0xFFFFFF, 24)) * 4))
        if 0x01000000 <= wo < 0x03000000 and 0x01000000 <= wc < 0x03000000:
            out.append((False, wc - wo))
    ho, lo = wo & 0xFFFF, wo >> 16
    hc, lc = wc & 0xFFFF, wc >> 16
    if (ho & 0xF800) == (hc & 0xF800) == 0xF000 and (lo & 0xE800) == 0xE800 and (lo & 0xF800) == (lc & 0xF800):
        out.append((True, (((_sext(hc & 0x7FF, 11) << 12) | ((lc & 0x7FF) << 1))
                           - ((_sext(ho & 0x7FF, 11) << 12) | ((lo & 0x7FF) << 1)))))
    return out


def moved_reference(o: bytes, c: bytes, off: int, ln: int, deltas: set[int]) -> bool:
    """Is every differing byte of the run (off, ln) part of a reference whose target moved by a known delta? A
    branch is relative: its offset changes by (target move - move of the branch itself), both known deltas or 0."""
    if not deltas:
        return False
    moves = deltas | {0}
    relative = {t - s for t in moves for s in moves} - {0}
    i = off
    while i < off + ln:
        if i >= len(o) or i >= len(c):
            return False
        if o[i] == c[i]:
            i += 1
            continue
        # the word holding byte i: an ARM word, or a Thumb bl pair starting on this halfword or the one before
        for start in dict.fromkeys((i & ~3, i & ~1, (i & ~1) - 2)):
            if start <= i < start + 4 and any(d in (relative if rel else deltas)
                                              for rel, d in reference_deltas(o, c, start)):
                i = start + 4
                break
        else:
            return False
    return True


LOCAL_IMPORT = re.compile(r"Imported symbol (\.L_[0-9a-f]+) at 0x([0-9a-f]+) in (.+?) is local")


def symbols_file(module: str) -> Path:
    """symbols.txt of a module named like dsd prints it: ARM9 main, ITCM, DTCM, overlay 12."""
    m = re.match(r"overlay (\d+)", module)
    if m:
        return project.ARM9 / "overlays" / f"ov{int(m.group(1)):03d}" / "symbols.txt"
    return {"ITCM": project.ARM9 / "itcm" / "symbols.txt", "DTCM": project.ARM9 / "dtcm" / "symbols.txt"}.get(
        module, project.SYMBOLS)


def globalize_labels(build_output: str) -> int:
    """When a new `complete` file splits the code, a function still in a gap object can point to a label that is now
    in another object; dsd refuses (`Imported symbol .L_0204eb14 ... is local`) and the whole module fails to delink,
    so every new file looks guilty. The label becomes a global one (lbl_0204eb14): same bytes, linkable."""
    n = 0
    for label, addr, module in set(LOCAL_IMPORT.findall(re.sub(r"\x1b\[[0-9;]*m", "", build_output))):
        p = symbols_file(module)
        if not p.exists():
            continue
        t = p.read_text(encoding="utf-8")
        new = re.sub(rf"^{re.escape(label)} (kind:label\(\w+\) addr:0x{addr})(?: local)?[ \t]*$",
                     rf"lbl_{addr} \1", t, flags=re.M)
        if new != t:
            p.write_text(new, encoding="utf-8", newline="\n")
            n += 1
    return n


LAST_RC = [0]


def build(fast: bool = False) -> str:
    """configure + ninja (labels that must be global are fixed on the way, see globalize_labels).
    fast: link + module checks + the rebuilt modules find() reads, no ROM (24-275 s saved; see modules_ok)."""
    targets = ["-k", "0", (OUT / "rom_config.yaml").relative_to(ROOT).as_posix(), "check_modules",
               "check_symbols"] if fast else []
    for _ in range(5):
        run([sys.executable, "tools/configure.py", project.VERSION])
        r = run(["ninja", *targets])
        LAST_RC[0] = r.returncode
        out = (r.stdout or "") + (r.stderr or "")
        if not globalize_labels(out):
            return out
    return out


def modules_ok(build_output: str) -> bool:
    """A build(fast=True) passed: every module and symbol is identical (the ROM only packs them)."""
    return LAST_RC[0] == 0 and "FAILED:" not in build_output


def find(build_output: str) -> list[dict]:
    """Culprits of the current build: [{file, reason}]"""
    found = {}

    def add(f, reason):
        f = f.replace("\\", "/")
        found.setdefault(f, []).append(reason)

    for m in re.finditer(r"^(src[\\/]\S+?\.(?:c|cpp|s)):(\d+):.*error", build_output, re.M | re.I):
        add(m.group(1), f"compile error line {m.group(2)}")
    # The object ninja could not build: mwccarm does not always print "error" (e.g. "<string not found>" when an
    # asm block was mangled), but ninja names the failed object, build/<version>/src/....o
    for m in re.finditer(r"^FAILED: (?:\[code=\d+\] )?build[\\/][^\\/\s]+[\\/](src[\\/]\S+?)\.o\s*$", build_output, re.M):
        stem = m.group(1).replace("\\", "/")
        for ext in (".c", ".cpp", ".s"):
            if (ROOT / (stem + ext)).exists():
                add(stem + ext, "does not compile (ninja: FAILED)")
                break
    # dsd delink refuses the whole build: `.data in file 'src/auto/X.c' (...) overlaps with previous file 'src/...'`
    for m in re.finditer(r"in file '(src/[^']+)' \([^)]*\) overlaps with previous file '(src/[^']+)'", build_output):
        add(m.group(1), f"overlaps {m.group(2)} (delink)")
        add(m.group(2), f"overlaps {m.group(1)} (delink)")
    # Link errors: `Undefined : "x"` then `Referenced from "y" in X.o` (a stale name the agent used)
    for m in re.finditer(r'Referenced from "[^"]+" in (\S+?)\.o', re.sub(r"\x1b\[[0-9;]*m", "", build_output)):
        stem = m.group(1).replace("\\", "/")
        for f in [p.relative_to(ROOT).as_posix() for p in (ROOT / "src").rglob(Path(stem).name + ".*")]:
            if f.endswith((".c", ".cpp", ".s")):
                add(f, "undefined symbol at link")
    all_files = [(f, s, e) for mod in modules() for f, s, e in complete_files(mod["delinks"])]
    for m in re.finditer(r"Symbol '(\S+)' at 0x([0-9a-f]+) in (.+?) (is .*)", build_output):
        addr = int(m.group(2), 16)
        for f, s, e in all_files:
            if s <= addr < e:
                add(f, f"symbol {m.group(1)} {m.group(4).strip()}")
    # A module older than the last change of the config was not relinked (the build stopped before): skip it.
    # (When nothing changed, ninja does not rewrite the modules: they are still up to date.)
    newest_config = max((p.stat().st_mtime for p in project.CONFIG.rglob("*.txt")), default=0)
    for f, reason in map_overflows(newest_config):
        add(f, reason)
    for mod, addr, sym in shifted_symbols(build_output):
        add("(no complete file)", f"{mod} shifted from 0x{addr:08x} ({sym}): something placed before it grew")
    # When one file grows, everything after it moves and every `bl`/pointer to it, in every module, differs by a byte
    # or two: thousands of innocent files. The linker map says what moved and by how much; the words that differ
    # only by such a move are counted, not blamed.
    grown, deltas = moved_objects(newest_config)
    for f, reason in grown:
        add(f, reason)
    moved_refs = {}  # module -> [words, files]
    for mod in modules():
        if mod["built"].stat().st_mtime < newest_config:
            add("(build)", f"{mod['name']} not relinked since the last config change: fix the build errors first")
            continue
        orig, built = mod["orig"].read_bytes(), mod["built"].read_bytes()
        runs, shifted = diff_ranges(orig, built, first_only=not deltas)
        if not runs:
            continue
        files = complete_files(mod["delinks"])
        for off, ln in runs:
            if moved_reference(orig, built, off, ln, deltas):
                n = moved_refs.setdefault(mod["name"], [0, set()])
                n[0] += 1
                n[1].update(f for f, s, e in files if s <= mod["base"] + off < e)
                continue
            addr = mod["base"] + off
            if shifted:  # the run goes on to the end of the module
                ln = 1
            owners = [f for f, s, e in files if s <= addr < e or (s < addr + ln and addr < e)]
            if not owners and shifted:  # a shift starts at the end of the file that grew: blame the one before
                before = [x for x in files if x[2] <= addr]
                owners = [max(before, key=lambda x: x[2])[0]] if before else []
            what = "size changed from here" if shifted else f"{ln} byte(s) differ"
            for f in owners:
                add(f, f"{mod['name']} 0x{addr:08x}: {what}")
            if not owners:
                add("(no complete file)", f"{mod['name']} 0x{addr:08x}: {what}")
            if shifted:  # past the start of a shift, bytes no longer face their counterpart
                break
    if moved_refs:
        words = sum(n for n, _ in moved_refs.values())
        nfiles = len(set().union(*(f for _, f in moved_refs.values())))
        mods = ", ".join(f"{m} {n}" for m, (n, _) in sorted(moved_refs.items(), key=lambda x: -x[1][0])[:6])
        add("(moved references)", f"{words} differing word(s) in {nfiles} file(s) only point to code/data that moved "
                                  f"by {', '.join(f'{d:+#x}' for d in sorted(deltas))} ({mods}...): consequences, "
                                  f"not culprits")
    return [{"file": f, "reasons": r} for f, r in found.items()]


MAP_LINE = re.compile(r"^\s+[0-9A-Fa-f]{8} ([0-9A-Fa-f]{8}) (\.\w+)\s+\S+\t\((\S+?)\.o\)", re.M)


def map_overflows(newest_config: float) -> list[tuple[str, str]]:
    """[(file, reason)] for the `complete` files whose object brings more than delinks.txt declares, read from the
    linker map: a section it does not declare (a `.bss` from a tentative definition, strings), or a section bigger
    than its range. Such a file moves everything after it, so the byte comparison only sees the shift, not where it
    starts (in this game the first difference is in Entry.c, which holds the module sizes)."""
    xmap = project.BUILD / "arm9.o.xMAP"
    if not xmap.exists() or xmap.stat().st_mtime < newest_config:
        return []
    declared = {}  # object stem -> (file, {section: size})
    for mod in modules():
        delinks = mod["delinks"]
        if not delinks.exists():
            continue
        for m in BLOCK_RE.finditer(delinks.read_text(encoding="utf-8", errors="replace")):
            if "complete" in m.group(2).split():
                secs = {"." + n: int(e, 16) - int(s, 16) for n, s, e in SECTION_RE.findall(m.group(2))}
                declared[Path(m.group(1)).stem] = (m.group(1), secs)
    placed = {}  # object stem -> {section: bytes}
    for size, sec, obj in MAP_LINE.findall(xmap.read_text(encoding="latin-1")):
        if obj in declared and int(size, 16) and not sec.startswith((".debug", ".comment")):
            placed.setdefault(obj, {}).setdefault(sec, 0)
            placed[obj][sec] += int(size, 16)
    out = []
    for obj, secs in placed.items():
        f, want = declared[obj]
        for sec, n in secs.items():
            if sec not in want:
                out.append((f, f"brings 0x{n:x} bytes of {sec} that delinks.txt does not declare"))
            elif n > want[sec]:
                out.append((f, f"{sec} is 0x{n:x} bytes for a 0x{want[sec]:x} range"))
    return out


def shifted_symbols(build_output: str) -> list[tuple[str, int, str]]:
    """[(module, first address, symbol)] of the modules where `dsd check symbols` finds a symbol at another address
    (the whole module moved): helps to tell a file that grew in the module from something placed before it."""
    first = {}
    for m in re.finditer(r"Symbol '(\S+)' in (.+?) at 0x([0-9a-f]+) not found by address", build_output):
        addr = int(m.group(3), 16)
        if m.group(2) not in first or addr < first[m.group(2)][0]:
            first[m.group(2)] = (addr, m.group(1))
    return [(mod, a, s) for mod, (a, s) in sorted(first.items())]


def committed_files() -> set[str]:
    out = set()
    for p in project.CONFIG.rglob("delinks.txt"):
        rel = p.relative_to(ROOT).as_posix()
        r = run(["git", "show", f"HEAD:{rel}"])
        if r.returncode == 0:
            out |= {m.group(1) for m in BLOCK_RE.finditer(r.stdout)}
    return out


def drop(files: list[str], dest: Path) -> None:
    """Removes the files from every delinks.txt and compilers.txt, moves the sources to `dest`."""
    dest.mkdir(parents=True, exist_ok=True)
    for p in project.CONFIG.rglob("delinks.txt"):
        text = p.read_text(encoding="utf-8")
        new = text
        for f in files:
            new = re.sub(r"\n?^" + re.escape(f) + r":\n(?:[ \t]+.*\n?)*", "\n", new, flags=re.M)
        if new != text:
            p.write_text(re.sub(r"\n{3,}", "\n\n", new), encoding="utf-8", newline="\n")
    if project.COMPILERS_TXT.exists():
        keep = [l for l in project.COMPILERS_TXT.read_text(encoding="utf-8").splitlines(True) if l.split(" ")[0] not in files]
        project.COMPILERS_TXT.write_text("".join(keep), encoding="utf-8", newline="\n")
    for f in files:
        src = ROOT / f
        if src.exists():
            target = dest / f
            target.parent.mkdir(parents=True, exist_ok=True)
            shutil.move(str(src), str(target))


def rom_ok(build_output: str) -> bool:
    return f"{project.ROM_NAME}: OK" in build_output


def repair(allowed: set[str] | None = None, rounds: int = 10, log=print) -> tuple[bool, list[str]]:
    """Build, drop the culprits (only those in `allowed`, if given), repeat. Returns (ROM OK, dropped files)."""
    dest = project.BUILD.parent / "culprits" / time.strftime("%Y%m%d-%H%M%S")
    dropped = []
    for i in range(rounds):
        t0 = time.time()
        out = build()
        if rom_ok(out):
            return True, dropped
        culprits = find(out)
        files = [c["file"] for c in culprits if c["file"].startswith("src/")]
        for c in culprits:
            log(f"  {c['file']}: {'; '.join(c['reasons'][:3])}")
        blocked = [f for f in files if allowed is not None and f not in allowed]
        files = [f for f in files if f not in blocked]
        if blocked:
            log(f"  not dropped (already committed, use --any): {', '.join(blocked)}")
        if not files:
            log("  no droppable culprit found: stopping")
            return False, dropped
        log(f"round {i + 1}: dropping {len(files)} file(s) -> {dest.relative_to(ROOT).as_posix()}")
        drop(files, dest)
        dropped += files
    return rom_ok(build()), dropped


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--fix", action="store_true", help="drop the culprits and rebuild until the ROM matches")
    ap.add_argument("--any", action="store_true", help="also drop files that are already committed")
    ap.add_argument("--rounds", type=int, default=10)
    a = ap.parse_args()
    if not a.fix:
        t0 = time.time()
        out = build()
        if rom_ok(out):
            print(f"ROM OK ({project.ROM_NAME}): nothing to find.")
            return
        culprits = find(out)
        if not culprits:
            print("The ROM does not match but no difference could be attributed (see `ninja` output).")
            sys.exit(1)
        for c in culprits:
            print(f"{c['file']}: {'; '.join(c['reasons'][:5])}")
        sys.exit(1)
    ok, dropped = repair(None if a.any else {f for f in all_new_files()}, a.rounds)
    print(f"dropped {len(dropped)} file(s): {', '.join(dropped) or '-'}")
    print("ROM OK: run `python tools/match.py verify` before committing." if ok else "ROM still differs.")
    sys.exit(0 if ok else 1)


def all_new_files() -> set[str]:
    """Files declared in delinks.txt now but not in the last commit."""
    now = set()
    for p in project.CONFIG.rglob("delinks.txt"):
        now |= {m.group(1) for m in BLOCK_RE.finditer(p.read_text(encoding="utf-8"))}
    return now - committed_files()


if __name__ == "__main__":
    from pipeline_lock import pipeline_lock

    with pipeline_lock("find_culprits"):
        main()
