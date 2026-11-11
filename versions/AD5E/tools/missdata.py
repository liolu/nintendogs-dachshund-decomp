"""The DATA side of the miss database (missdb.py): tables, strings and structs of .data / .rodata.

A data miss is a C definition `workbench.py datacheck` compiled whose bytes are not those of the game (other values,
other size, other section). It is kept with the bytes it compiled to and its pointers. The replay looks those
bytes up among the unmatched data of every module of a game (same section, same size, same bytes once the pointers
are masked), names the pointers like the game does, compiles the candidate and compares it again: values, size,
section, and what each pointer points to.

The matched data of our other games are sources too (`--all-games`): the same SDK / library table, string or
struct in another game. No compile is needed to find them: their fingerprint comes from that game's ROM.

A match becomes one file, src/data/<module>_<section>_<address>.c (the name datagen.py uses), one `complete` range
in the module's delinks.txt; the ROM is rebuilt and the files that change it are dropped (halves, like
workbench submit-many). .bss is not replayed: its bytes say nothing (bssgen.py gives it to C files).
"""
import hashlib
import json
import re
import struct
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from project import ROOT  # noqa: E402

DATA = "d:"  # prefix of the data fingerprints (never equal to a code one)
SECTIONS = (".data", ".rodata")
SECTION_RE = re.compile(r"^\s+(\.\w+)\s+start:0x([0-9a-f]+) end:0x([0-9a-f]+) kind:(\w+)", re.M)
SYM_RE = re.compile(r"^(\S+) kind:(\w+)\S* addr:0x([0-9a-f]+)", re.M)
FILE_RE = re.compile(r"^(src/\S+):\n((?:[ \t]+\S.*\n?)+)", re.M)
RANGE_RE = re.compile(r"(\.\w+)\s+start:0x([0-9a-f]+) end:0x([0-9a-f]+)")


def fingerprint(section: str, raw: bytes, ptrs) -> str:
    """Section, size and bytes, the 4 bytes of each pointer masked."""
    parts = [section, str(len(raw))]
    o = 0
    while o < len(raw):
        if o in ptrs:
            parts.append("P")
            o += 4
        else:
            parts.append("%02x" % raw[o])
            o += 1
    return DATA + hashlib.sha1(" ".join(parts).encode()).hexdigest()[:20]


# ---------------------------------------------------------------- the data of one module of a game

class Data:
    """Data symbols of one module: {name: (addr, size, section)} + which are matched + their pointers."""

    def __init__(self, img):
        self.img = img
        head, _, files = (img.cfg / "delinks.txt").read_text(encoding="utf-8", errors="replace").partition("\n\n")
        self.sections = {m.group(1): (int(m.group(2), 16), int(m.group(3), 16))
                         for m in SECTION_RE.finditer(head) if m.group(1) in SECTIONS}
        self.done = []  # complete (start, end, file) ranges of data sections
        for path, body in FILE_RE.findall(files):
            if "complete" in body:
                for sec, a, b in RANGE_RE.findall(body):
                    if sec in SECTIONS:
                        self.done.append((int(a, 16), int(b, 16), path))
        syms = sorted((int(a, 16), n, k) for n, k, a in SYM_RE.findall(
            (img.cfg / "symbols.txt").read_text(encoding="utf-8", errors="replace")))
        self.syms = {}
        for sec, (s, e) in self.sections.items():
            inside = [x for x in syms if s <= x[0] < e]
            bounds = sorted({a for a, _n, _k in inside} | {e})
            for a, n, k in inside:
                nxt = next((b for b in bounds if b > a), e)
                if k == "data" and nxt > a:
                    self.syms[n] = (a, nxt - a, sec)
        self._ptrs = None

    def matched(self, name: str) -> str | None:
        a, size, _sec = self.syms[name]
        return next((p for s, e, p in self.done if s <= a and a + size <= e), None)

    def raw(self, name: str) -> bytes:
        a, size, _sec = self.syms[name]
        return self.img.bin[a - self.img.base: a - self.img.base + size]

    def ptrs(self, name: str) -> dict[int, int]:
        """{offset in the symbol: address it points to} (relocs.txt kind:load)."""
        if self._ptrs is None:
            self._ptrs = {}
            f = self.img.cfg / "relocs.txt"
            if f.exists():
                for m in re.finditer(r"^from:0x([0-9a-f]+) kind:load to:0x([0-9a-f]+)",
                                     f.read_text(encoding="utf-8", errors="replace"), re.M):
                    self._ptrs[int(m.group(1), 16)] = int(m.group(2), 16)
        a, size, _sec = self.syms[name]
        return {f - a: t for f, t in ((x, self._ptrs.get(x)) for x in range(a, a + size)) if t is not None}

    def fp(self, name: str) -> str:
        return fingerprint(self.syms[name][2], self.raw(name), self.ptrs(name))

    def ptr_name(self, name: str, off: int) -> str | None:
        a = self.syms[name][0] + off
        to = self.ptrs(name).get(off)
        n = self.img.reloc_name(a)
        if n is None and to is not None:
            n = self.img.name_at.get(to) or self.img.name_at.get(to & ~1)
        return n


# ---------------------------------------------------------------- C of one data object

DEF_KINDS = ("#", "extern", "typedef")
LEAD_COMMENTS = re.compile(r"^(?:\s*(?:/\*.*?\*/|//[^\n]*))+", re.S)
TYPE_ONLY = re.compile(r"^(struct|union|enum)\s+\w+\s*\{.*\}\s*;$", re.S)


def item_of(source: str, name: str) -> str | None:
    """The C that defines `name` alone: preprocessor lines, typedefs, externs and type definitions of the file,
    plus the one definition of `name` (the other objects and functions are left out)."""
    import donorlib
    keep, found = [], False
    for it in donorlib.top_level_items(source):
        # comments in front of an item (the compiler marker...) hide what it is; '#' lines glued to it go apart
        s = LEAD_COMMENTS.sub("", it).strip()
        while s.startswith("#"):
            line, _, s = s.partition("\n")
            keep.append(line.strip())
            s = LEAD_COMMENTS.sub("", s).strip()
        if not s:
            continue
        it = s
        if s.startswith(DEF_KINDS) or TYPE_ONLY.match(s):
            keep.append(it.strip("\n"))
        elif re.search(rf"\b{re.escape(name)}\s*(\[|=|;)", s) and "(" not in s.split("=")[0]:
            keep.append(it.strip("\n"))
            found = True
    return "\n".join(keep) + "\n" if found else None


def object_bytes(obj: Path, name: str):
    """(section, bytes, {offset: (symbol, addend)}) of a data object in an mwcc object file, or None."""
    import donorlib
    o = donorlib.Obj(obj)
    for sname, val, size, info, shndx in o.syms:
        if sname != name or info & 0xF != 1 or not 0 < shndx < len(o.secs):
            continue
        sec = o.sec_names[shndx]
        if sec not in SECTIONS:
            return sec, b"", {}
        raw = o.section_bytes(shndx)[val: val + size]
        ptrs = {off: (s, a) for off, _t, s, a in o.function_relocs(shndx, val, size)}
        return sec, raw, ptrs
    return None


# ---------------------------------------------------------------- recording (workbench datacheck)

def record(source: str, obj: Path, entries: list[dict], profile: str, module: str = "main") -> None:
    """Keeps every object datacheck found different. Never raises."""
    import missdb
    for e in entries:
        if e.get("status") in ("ok", "unknown") or e.get("section") not in SECTIONS:
            continue
        try:
            code = item_of(source, e["name"])
            got = object_bytes(obj, e["name"]) if code else None
            if not got or not got[1]:
                continue
            sec, raw, ptrs = got
            relocs = [[off, 2, s, a] for off, (s, a) in sorted(ptrs.items())]
            missdb.record(e["name"], code, profile, "data", error="; ".join(e.get("diffs") or [e.get("note", "")])[:1500],
                          source=missdb.current_source(), module=module, size=e.get("rom_size"),
                          fp={"out_size": len(raw), "fp_exact": fingerprint(sec, raw, ptrs), "fp_tpl": None,
                              "words": raw.hex(), "relocs": json.dumps(relocs)})
        except Exception as ex:  # noqa: BLE001
            print(f"missdb: data {e.get('name')} not recorded ({ex})", file=sys.stderr)


# ---------------------------------------------------------------- replay

def rename(code: str, names: dict[str, str]) -> str:
    import clone_match as cm
    return cm.rename(code, names)


def candidate(code: str, m_name: str, m_relocs: list, d: Data, b_name: str) -> str | None:
    """The source's C turned into the C of b_name: the object and its pointers renamed (None if a pointer of the
    target has no name)."""
    import auto_match as am
    if code.startswith(am.MARKER):
        code = code.split("\n", 1)[1]
    names = {m_name: b_name}
    for off, _t, sym, _a in m_relocs:
        if sym.startswith("@"):
            continue
        new = d.ptr_name(b_name, off)
        if not new or names.setdefault(sym, new) != new:
            return None
    return rename(code, {k: v for k, v in names.items() if k != v})


def check(d: Data, b_name: str, source: str, profile: str) -> str:
    """"" if the source compiles to exactly this object (section, size, bytes, pointers) and nothing else."""
    import tempfile
    import auto_match as am
    import project
    import clone_match as cm
    version, _, flags = profile.partition(" ")
    mwcc = am.MWCC_ROOT / version / "mwccarm.exe"
    if not mwcc.exists():
        return f"no compiler {version}"
    a, size, sec = d.syms[b_name]
    with tempfile.TemporaryDirectory() as tmp:
        t = Path(tmp)
        (t / "f.c").write_text(source, encoding="utf-8")
        r = am.run_limited(f'"{mwcc}" {cm.CC_FLAGS} -lang=c {flags} -i "{ROOT / "include"}" -d {project.VERSION} '
                           f'-c f.c -o f.o', cwd=t, shell=True)
        if r.returncode != 0 or not (t / "f.o").exists():
            return "compile"
        import donorlib
        o = donorlib.Obj(t / "f.o")
        other = [s for s in o.nonempty_sections() if s != sec and not s.startswith((".dwarf", ".debug", ".comment"))]
        if other:
            return f"also defines {other[0]}"
        got = object_bytes(t / "f.o", b_name)
        if got is None:
            return "object not in the file"
        osec, raw, ptrs = got
        defined = [s for s in o.syms if s[0] and s[3] & 0xF == 1 and 0 < s[4] < len(o.secs) and s[0] != b_name
                   and not s[0].startswith(("@", "."))]  # .dwarf_*: debug info
        if defined:
            return f"also defines {defined[0][0]}"
    if osec != sec:
        return f"in {osec}, the game has it in {sec}"
    if len(raw) != size:
        return f"size 0x{len(raw):x}, the game has 0x{size:x}"
    rom, rom_ptrs = d.raw(b_name), d.ptrs(b_name)
    if set(ptrs) != set(rom_ptrs):
        return "pointers at other offsets"
    for off, (sym, _add) in ptrs.items():
        if sym.startswith("@"):
            return "points to data of its own"
        want = d.ptr_name(b_name, off)
        if want != sym:  # the addend is in the bytes, compared below
            return f"+0x{off:x} points to {sym}, the game to {want}"
    for i, (x, y) in enumerate(zip(raw, rom)):
        if x != y and not any(o <= i < o + 4 for o in ptrs):
            return f"byte +0x{i:x} differs"
    return ""


def index(imgs: dict, only: set[str] | None):
    """({module: Data}, {fingerprint: [(module, name)]}) of the unmatched data of this game."""
    datas, idx = {}, {}
    stems = {p.stem.lower() for p in (ROOT / "src").rglob("*.c")}
    for mod, img in imgs.items():
        try:
            d = Data(img)
        except OSError:
            continue
        datas[mod] = d
        for n in d.syms:
            if (only is not None and n not in only) or d.matched(n) or n.lower() in stems:
                continue
            idx.setdefault(d.fp(n), []).append((mod, n))
    return datas, idx


def matched_table(g: Path) -> list:
    """[(fingerprint, name, file, profile, relocs)] of the matched data of game g, cached in its
    build/missdb/data_matched.json until its config files change."""
    import clone_match as cm
    import missdb
    cfg = next(p for p in sorted((g / "config").iterdir()) if (p / "arm9" / "symbols.txt").exists())
    sig = [g.name] + sorted(f"{p.relative_to(cfg)}:{p.stat().st_mtime_ns}" for p in (cfg / "arm9").rglob("*.txt"))
    sig = hashlib.sha1("|".join(sig).encode()).hexdigest()
    cache = g / "build" / "missdb" / "data_matched.json"
    try:
        c = json.loads(cache.read_text(encoding="utf-8"))
        if c.get("sig") == sig:
            return c["rows"]
    except (OSError, ValueError):
        pass
    rows = []
    for mod in missdb.modules(g):
        try:
            img = cm.Image(g, mod)
            d = Data(img)
        except (OSError, StopIteration, IndexError):
            continue
        for n in d.syms:
            path = d.matched(n)
            if path:
                rows.append([d.fp(n), n, path, img.profile(path),
                             [[o, 2, d.ptr_name(n, o) or "", 0] for o in sorted(d.ptrs(n))]])
    try:
        cache.parent.mkdir(parents=True, exist_ok=True)
        cache.write_text(json.dumps({"sig": sig, "rows": rows}), encoding="utf-8")
    except OSError:
        pass  # a game folder we cannot write to: no cache, same result
    return rows


def matched_sources(idx: dict, log=print) -> list[dict]:
    """Matched data of our OTHER games whose fingerprint is one of `idx`: rows like the misses table (id None)."""
    import clone_match as cm
    import missdb
    rows = []
    for g in sorted(ROOT.parent.iterdir()):
        if g == ROOT or g.name.startswith(("_", ".")) or not (g / "config").is_dir():
            continue
        try:
            table = matched_table(g)
        except (OSError, StopIteration, IndexError, ValueError):
            continue
        for fp, n, path, prof, relocs in table:
            if fp not in idx:
                continue
            try:
                code = item_of((g / path).read_text(encoding="utf-8", errors="replace"), n)
            except OSError:
                code = None
            if code:
                rows.append({"id": None, "game": g.name, "func": n, "code": code, "profile": prof, "fp_exact": fp,
                             "relocs": json.dumps(relocs), "diffs": 0})
    log(f"data: {len(rows)} matched data of our other games have the shape of an unmatched one here")
    return rows


def replay(imgs: dict, rows: list, targets: set[str] | None, jobs: int, with_matched: bool, log=print):
    """[(module, name, addr, size, section, source, miss_id, from)] of the data the sources match."""
    from concurrent.futures import ThreadPoolExecutor
    datas, idx = index(imgs, targets)
    log(f"data: {sum(len(v) for v in idx.values())} unmatched data symbols in {len(datas)} modules")
    sources = [r for r in rows if r["fp_exact"] and r["fp_exact"].startswith(DATA) and r["fp_exact"] in idx]
    if with_matched:
        sources += matched_sources(idx, log)
    per: dict = {}
    for r in sources:
        for mod, n in idx.get(r["fp_exact"], []):
            per.setdefault((mod, n), []).append(r)
    log(f"data: {len(per)} unmatched data have a source of the same bytes")

    def attempt(item):
        (mod, n), cands = item
        d = datas[mod]
        for r in cands[:8]:
            src = candidate(r["code"], r["func"], json.loads(r["relocs"]), d, n)
            if src is None:
                continue
            for prof in dict.fromkeys(p.replace(" -thumb", "") for p in (r["profile"], d.img.default_cc) if p):
                if not check(d, n, src, prof):
                    a, size, sec = d.syms[n]
                    return mod, n, a, size, sec, src, prof, r["id"], f"{r['game']}:{r['func']}"
        return None

    found = []
    with ThreadPoolExecutor(max_workers=max(1, jobs)) as pool:
        for res in pool.map(attempt, sorted(per.items())):
            if res:
                found.append(res)
                log(f"  DATA {res[1]} ({res[0]}, {res[4]}, {res[3]} bytes) <- {res[8]}")
    return found


# ---------------------------------------------------------------- integration

def integrate(found, imgs: dict, log=print) -> list[str]:
    """One file per object + its delinks range; the ROM is rebuilt, groups that change it are split and dropped.
    Returns the names kept."""
    import auto_match as am
    import find_culprits
    from pipeline_lock import journal_begin, journal_created, journal_end
    items = []
    for mod, n, a, size, sec, src, prof, *_rest in found:
        if a % 4 or (a + size) % 4:
            continue  # the linker puts every file's section on 4 bytes (datagen's rule)
        rel = f"src/data/{mod}_{sec.strip('.')}_{a:08x}.c"
        if (ROOT / rel).exists():
            continue
        head = "" if prof == imgs[mod].default_cc else f"{am.MARKER}{prof} */\n"
        items.append((mod, n, rel, head + src, f"\n{rel}:\n    complete\n    {sec:<11} start:0x{a:08x} end:0x{a + size:08x}\n"))
    if not items:
        return []
    files = sorted({imgs[m].cfg / "delinks.txt" for m in imgs})

    def attempt(group):
        saved = {p: p.read_bytes() for p in files}
        journal_begin(files)
        created = []
        for mod, _n, rel, src, entry in group:
            p = ROOT / rel
            p.parent.mkdir(parents=True, exist_ok=True)
            p.write_text(src, encoding="utf-8", newline="\n")
            created.append(p)
            dl = imgs[mod].cfg / "delinks.txt"
            dl.write_text(dl.read_text(encoding="utf-8").rstrip("\n") + "\n" + entry, encoding="utf-8", newline="\n")
        journal_created(created)
        if find_culprits.rom_ok(find_culprits.build()):
            journal_end()
            return True
        for p, b in saved.items():
            p.write_bytes(b)
        for p in created:
            p.unlink(missing_ok=True)
        journal_end()
        return False

    def solve(group):
        if not group:
            return []
        if attempt(group):
            return group
        if len(group) == 1:
            return []
        half = len(group) // 2
        return solve(group[:half]) + solve(group[half:])

    kept = solve(items)
    find_culprits.build()  # leave the build matching the files kept
    log(f"data: {len(kept)} kept, {len(items) - len(kept)} refused by the ROM")
    return [n for _m, n, *_r in kept]
