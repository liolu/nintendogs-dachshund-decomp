#!/usr/bin/env python3
"""Database of every MISS of every matching job (Qwen, hunt, Claude agents, the C editor), replayed on every
unmatched function of every game.

    python ../../studio/gametools/missdb.py stats                 # what the database holds (all games)
    python ../../studio/gametools/missdb.py show NAME             # the misses of one function, best first
    python ../../studio/gametools/missdb.py replay                # misses of THIS game on its unmatched functions
    python ../../studio/gametools/missdb.py replay --all-games    # misses of ALL our games on this game
    python ../../studio/gametools/missdb.py replay --commit --push
    python ../../studio/gametools/missdb.py replay --to build/hunt/matched   # write the matches there, integrate nothing
    python ../../studio/gametools/missdb.py import                # add the old tries (qwen memory, hunt, near misses)

Recording is automatic and cannot be skipped: workbench.judge (hunt, fj, agents, MCP, web editor) and
qwen_block.compile_versions call record() for every C that compiles but does not match. A miss keeps the C, the
compiler profile, the error (compile error / N diffs / size) and the FINGERPRINT of the code it compiled to
(calls and loaded addresses masked, the same fingerprints as clone_match).

Why it pays: a C that misses function A is often the exact C of ANOTHER function B (a sibling, a template twin, the
same function in another game). The replay compiles nothing to find those: it looks the miss's fingerprint up among
the unmatched functions of every module (main, ITCM, overlays; ARM and Thumb), exact or same instructions with other
constants, renames the calls / loaded symbols (a call to another overlay through relocs.txt) and replaces the
constants like clone_match, and only then compiles the candidate and checks it word by word, relocations included.
Main-module ARM matches go to src/auto/ + delinks.txt and `match.py verify` (clone_match.integrate_verified); the
others (overlays, ITCM, Thumb, -profile) through `workbench.py submit-many` (ROM rebuilt, kept if byte-identical).

The database is ONE file for all games: decomp ds/missdb.sqlite (MISSDB=path to change it).
"""
import argparse
import hashlib
import json
import os
import sqlite3
import sys
import threading
import time
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from project import ROOT  # noqa: E402  (the game: DSD_PROJECT or the current folder)

WORKSPACE = Path(__file__).resolve().parents[2]  # decomp ds/
DB = Path(os.environ.get("MISSDB") or WORKSPACE / "missdb.sqlite")
SCHEMA = """
CREATE TABLE IF NOT EXISTS misses (
    id INTEGER PRIMARY KEY,
    game TEXT NOT NULL, func TEXT NOT NULL, module TEXT NOT NULL DEFAULT 'main',
    addr INTEGER, size INTEGER, profile TEXT NOT NULL,
    code_hash TEXT NOT NULL, code TEXT NOT NULL,
    status TEXT NOT NULL,          -- near (same size) / size / compile
    diffs INTEGER, total INTEGER, error TEXT,
    source TEXT,                   -- qwen / workbench / hunt / import...
    out_size INTEGER, fp_exact TEXT, fp_tpl TEXT,
    words TEXT, relocs TEXT,       -- what the C compiled to (hex words, [[offset, type, symbol, addend]])
    created REAL NOT NULL,
    UNIQUE (game, func, code_hash, profile)
);
CREATE INDEX IF NOT EXISTS misses_exact ON misses (fp_exact);
CREATE INDEX IF NOT EXISTS misses_tpl ON misses (fp_tpl);
DROP INDEX IF EXISTS misses_func;
CREATE INDEX IF NOT EXISTS misses_fn ON misses (game, func, fp_exact);  -- record() looks a twin up with it
CREATE TABLE IF NOT EXISTS tried (     -- a miss already compiled for this target (never again)
    miss_id INTEGER NOT NULL, game TEXT NOT NULL, target TEXT NOT NULL, result TEXT, at REAL,
    PRIMARY KEY (miss_id, game, target)
);
CREATE TABLE IF NOT EXISTS imported (  -- older tries already judged by `import`
    game TEXT NOT NULL, func TEXT NOT NULL, code_hash TEXT NOT NULL, PRIMARY KEY (game, func, code_hash)
);
CREATE TABLE IF NOT EXISTS wins (      -- misses that matched another function
    miss_id INTEGER NOT NULL, game TEXT NOT NULL, target TEXT NOT NULL, kind TEXT, at REAL,
    PRIMARY KEY (miss_id, game, target)
);
"""

_conn = None
_lock = threading.Lock()


def db() -> sqlite3.Connection:
    global _conn
    if _conn is None:
        c = sqlite3.connect(DB, timeout=60, check_same_thread=False)
        c.execute("PRAGMA journal_mode=WAL")
        c.executescript(SCHEMA)
        _conn = c
    return _conn


def code_hash(code: str) -> str:
    return hashlib.sha1(" ".join(code.split()).encode("utf-8", "replace")).hexdigest()[:20]


# ---------------------------------------------------------------- recording

THUMB = "t:"  # prefix of the fingerprints of Thumb code (never equal to an ARM one)


def _thumb_tpl(h: int) -> int:
    """A Thumb instruction with its immediate (constant, offset, shift) masked."""
    if h < 0x1800 or 0x6000 <= h < 0x9000:  # shift by imm5 / ldr-str imm5
        return h & 0xF83F
    if 0x1C00 <= h < 0x2000:  # add/sub imm3
        return h & 0xFE3F
    if 0x2000 <= h < 0x4000 or 0x9000 <= h < 0xB000:  # mov/cmp/add/sub imm8, sp-relative, add rd, pc/sp
        return h & 0xFF00
    if 0xB000 <= h < 0xB100:  # add/sub sp, imm7
        return h & 0xFF80
    return h


def _thumb_imm(h: int) -> list[int]:
    """Values a C literal may have for this Thumb instruction's immediate."""
    if h < 0x1800:
        return [(h >> 6) & 0x1F]
    if 0x6000 <= h < 0x9000:  # ldr/str word x4, byte x1, halfword x2
        return [((h >> 6) & 0x1F) * (4 if h < 0x7000 else 1 if h < 0x8000 else 2)]
    if 0x1C00 <= h < 0x2000:
        return [(h >> 6) & 7]
    if 0x2000 <= h < 0x4000:
        return [h & 0xFF]
    if 0x9000 <= h < 0xB000:
        return [(h & 0xFF) * 4]
    if 0xB000 <= h < 0xB100:
        return [(h & 0x7F) * 4]
    return []


def thumb_layout(code: bytes, at: int) -> tuple[set[int], set[int]]:
    """(byte offsets of the literal pool words, byte offsets of the bl/blx pairs) of Thumb code at address `at`."""
    pool, bl = set(), set()
    o = 0
    while o + 2 <= len(code):
        if o in pool:
            o += 4
            continue
        h = int.from_bytes(code[o:o + 2], "little")
        if (h & 0xF800) == 0x4800:  # ldr rX, [pc, #imm8*4]
            p = ((at + o + 4) & ~3) + (h & 0xFF) * 4 - at
            if o < p <= len(code) - 4:
                pool.add(p)
        elif (h & 0xF800) == 0xF000 and o + 4 <= len(code) and (int.from_bytes(code[o + 2:o + 4], "little") & 0xE800) == 0xE800:
            bl.add(o)
            o += 4
            continue
        o += 2
    return pool, bl


def thumb_shapes(code: bytes, at: int) -> tuple[str, str]:
    """clone_match.shapes for Thumb code: pool words and calls masked (exact), immediates too (template)."""
    pool, bl = thumb_layout(code, at)
    ex, tp = [], []
    o = 0
    while o + 2 <= len(code):
        if o in pool or o in bl:
            tok = "P" if o in pool else "BL"
            ex.append(tok)
            tp.append(tok)
            o += 4
            continue
        h = int.from_bytes(code[o:o + 2], "little")
        ex.append("%04x" % h)
        tp.append("%04x" % _thumb_tpl(h))
        o += 2
    sha = lambda t: THUMB + hashlib.sha1(" ".join(t).encode()).hexdigest()[:20]  # noqa: E731
    return sha(ex), sha(tp)


def fingerprint(obj_path: Path, name: str) -> dict | None:
    """What `name` compiled to in this object: size, fingerprints (clone_match's for ARM, thumb_shapes for Thumb),
    bytes and relocations. None for a missing function."""
    import donorlib
    import clone_match as cm
    obj = donorlib.Obj(obj_path)
    fn = next((f for f in obj.functions() if f[0] == name), None)
    if fn is None:
        return None
    _n, shndx, off, size, thumb = fn
    code = obj.section_bytes(shndx)[off: off + size]
    relocs = obj.function_relocs(shndx, off, size)
    if thumb:
        ex, tp = thumb_shapes(code, off)  # the section is 4-aligned: off gives the pool alignment of the ROM
    else:
        ext = {o // 4 for o, typ, _s, _a in relocs if typ != donorlib.R_ARM_ABS32}
        ex, tp = cm.shapes(code, ext=ext)
    return {"out_size": size, "fp_exact": ex, "fp_tpl": tp, "words": code.hex(),
            "relocs": json.dumps([[o, t, s, a] for o, t, s, a in relocs]), "at": off}


def record(name: str, code: str, profile: str, status: str, *, diffs=None, total=None, error: str = "",
           source: str = "", obj: Path | None = None, module: str = "main", addr=None, size=None,
           fp: dict | None = None) -> None:
    """Keeps one miss (`fp`: an already computed fingerprint, e.g. missdata's). Never raises: a matching job must not
    stop because of its bookkeeping."""
    if status == "match" or not code.strip():
        return
    try:
        if fp is None and obj is not None and status in ("near", "size") and Path(obj).exists():
            try:
                fp = fingerprint(Path(obj), name)
            except Exception:  # an odd object: keep the miss without its fingerprint
                fp = None
        fp = fp or {}
        row = (ROOT.name, name, module or "main", addr, size, profile or "", code_hash(code), code, status, diffs,
               total, (error or "")[-1500:], source, fp.get("out_size"), fp.get("fp_exact"), fp.get("fp_tpl"),
               fp.get("words"), fp.get("relocs"), time.time())
        with _lock:
            c = db()
            if fp and c.execute("SELECT 1 FROM misses WHERE game = ? AND func = ? AND profile = ? AND fp_exact = ? "
                                "AND words = ? LIMIT 1", (ROOT.name, name, profile or "", fp["fp_exact"],
                                                         fp["words"])).fetchone():
                return  # same machine code as a miss already kept: nothing new to replay
            c.execute("INSERT OR IGNORE INTO misses (game, func, module, addr, size, profile, code_hash, code, status, "
                      "diffs, total, error, source, out_size, fp_exact, fp_tpl, words, relocs, created) "
                      "VALUES (?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?)", row)
            c.commit()
    except Exception as e:  # noqa: BLE001
        print(f"missdb: not recorded ({e})", file=sys.stderr)


# ---------------------------------------------------------------- replay

def _name_pair(names: dict, old: str, new: str | None) -> bool:
    if old.startswith("@"):  # data the C defines itself (string literal, static): nothing to rename
        return True
    return bool(old) and bool(new) and names.setdefault(old, new) == new


def _num_pair(nums: dict, a: int, b: int) -> None:
    nums.setdefault(a, set()).add(b)
    if a >= 0x80000000:
        nums.setdefault(0x100000000 - a, set()).add((0x100000000 - b) & 0xFFFFFFFF)


def pair(m_words: tuple, relocs: list, m_name: str, img, b_name: str):
    """({miss name: target name}, {miss constant: {target constants}}) to turn the miss's C into the C of b_name,
    or None when the two cannot be paired (a loaded address of the target has no symbol...)."""
    import donorlib
    import clone_match as cm
    bw = cm.words(img.code(b_name))
    if len(bw) != len(m_words):
        return None
    pool = donorlib.pool_words(m_words)
    if pool != donorlib.pool_words(bw):
        return None
    rel = {o // 4: (t, s, a) for o, t, s, a in relocs}
    ba = img.where(b_name)[0]
    names, nums = {m_name: b_name}, {}
    for i, (a, b) in enumerate(zip(m_words, bw)):
        if i in rel:
            typ, sym, add = rel[i]
            new = (cm.resolve(img, (b - add) & 0xFFFFFFFF) if typ == donorlib.R_ARM_ABS32
                   else cm.resolve(img, cm.branch_target(b, ba + 4 * i))) or img.reloc_name(ba + 4 * i)
            if not _name_pair(names, sym, new):
                return None
        elif a != b:
            if i in pool:
                _num_pair(nums, a, b)
            else:
                for x, y in zip(cm.immediates(a), cm.immediates(b)):
                    nums.setdefault(x, set()).add(y)
    return {k: v for k, v in names.items() if k != v or k == m_name}, nums


def pair_thumb(m_code: bytes, relocs: list, m_name: str, img, b_name: str):
    """pair() for Thumb code (the pool words sit where the target's do: the fingerprints are equal)."""
    import donorlib
    import clone_match as cm
    b_code = img.code(b_name)
    if len(b_code) != len(m_code):
        return None
    ba = img.where(b_name)[0]
    pool, _bl = thumb_layout(b_code, ba)
    rel = {o: (t, s, a) for o, t, s, a in relocs}
    names, nums = {m_name: b_name}, {}
    o = 0
    while o + 2 <= len(b_code):
        if o in rel:
            typ, sym, add = rel[o]
            if typ == donorlib.R_ARM_ABS32:
                new = cm.resolve(img, (int.from_bytes(b_code[o:o + 4], "little") - add) & 0xFFFFFFFF) \
                    or img.reloc_name(ba + o)
            else:
                t = cm.thumb_bl_target(b_code, o, ba)
                new = (cm.resolve(img, t) if t is not None else None) or img.reloc_name(ba + o)
            if not _name_pair(names, sym, new):
                return None
            o += 4
            continue
        if o in pool:
            a, b = int.from_bytes(m_code[o:o + 4], "little"), int.from_bytes(b_code[o:o + 4], "little")
            if a != b:
                _num_pair(nums, a, b)
            o += 4
            continue
        a, b = int.from_bytes(m_code[o:o + 2], "little"), int.from_bytes(b_code[o:o + 2], "little")
        if a != b:
            for x, y in zip(_thumb_imm(a), _thumb_imm(b)):
                nums.setdefault(x, set()).add(y)
        o += 2
    return {k: v for k, v in names.items() if k != v or k == m_name}, nums


def candidates(row, img, b_name: str) -> list[str]:
    """The miss's C turned into the C of b_name (calls / symbols renamed, every combination of the constants)."""
    import auto_match as am
    import clone_match as cm
    code = row["code"]
    if code.startswith(am.MARKER):
        code = code.split("\n", 1)[1]
    raw, relocs = bytes.fromhex(row["words"]), json.loads(row["relocs"])
    if b_name in img.thumb:
        pm = pair_thumb(raw, relocs, row["func"], img, b_name)
    else:
        pm = pair(cm.words(raw), relocs, row["func"], img, b_name)
    if pm is None:
        return []
    names, nums = pm
    return [c for v in cm.or_variants(cm.rename(code, names), nums) for c in cm.with_constants(v, nums)]


def current_source() -> str:
    """Who is judging (workbench.MISS_SOURCE: hunt, import...)."""
    wb = sys.modules.get("workbench")
    return getattr(wb, "MISS_SOURCE", "workbench") if wb else "workbench"


def modules(root: Path | None = None) -> list[str]:
    """main, itcm, ovNNN: every code module of a game (this one by default) that has its own symbols.txt."""
    root = root or ROOT
    vers = sorted(p.name for p in (root / "config").iterdir() if (p / "arm9" / "symbols.txt").exists())
    arm9 = root / "config" / vers[0] / "arm9"
    out = ["main"]
    if (arm9 / "itcm" / "symbols.txt").exists():
        out.append("itcm")
    ovl = arm9 / "overlays"
    out += sorted(d.name for d in ovl.glob("ov*") if (d / "symbols.txt").exists()) if ovl.is_dir() else []
    return out


def target_index(only: set[str] | None, log=print):
    """({module: Image}, {fingerprint: [(module, name)]}) of every unmatched function (ARM and Thumb, all
    modules)."""
    import clone_match as cm
    imgs, index = {}, {}
    stems = {p.stem.lower() for p in (ROOT / "src").rglob("*.c")}
    for mod in modules():
        try:
            img = cm.Image(ROOT, mod)
        except (OSError, StopIteration, IndexError) as e:
            log(f"{mod}: skipped ({e})")
            continue
        imgs[mod] = img
        matched = img.matched()
        for n, (a, _s) in list(img.funcs.items()) + list(img.thumb.items()):
            if n in matched or n.lower() in stems or (only is not None and n not in only):
                continue
            code = img.code(n)
            fps = thumb_shapes(code, a) if n in img.thumb else cm.shapes(code)
            for kind, fp in zip(("exact", "template"), fps):
                index.setdefault(fp, []).append((mod, n, kind))
    return imgs, index


def replay(games: list[str] | None, jobs: int, targets: set[str] | None = None, log=print):
    """[(module, target, size, addr, source, miss_id, kind)] of the misses that match an unmatched function of this
    game (every module, ARM and Thumb)."""
    import auto_match as am
    import clone_match as cm
    t0 = time.time()
    imgs, index = target_index(targets, log)
    ntargets = len({(m, n) for v in index.values() for m, n, _k in v})
    c = db()
    c.row_factory = sqlite3.Row
    where = "fp_exact IS NOT NULL"
    args: list = []
    if games is not None:
        where += f" AND game IN ({','.join('?' * len(games))})"
        args += games
    # fingerprints only (the C and the code stay on disk): the full rows are read for the hits alone
    light = c.execute(f"SELECT id, game, diffs, fp_exact, fp_tpl FROM misses WHERE {where}", args).fetchall()
    hit_ids = [r["id"] for r in light if r["fp_exact"] in index or r["fp_tpl"] in index]
    rows = []
    for k in range(0, len(hit_ids), 500):
        part = hit_ids[k:k + 500]
        rows += c.execute(f"SELECT id, game, func, profile, code, diffs, words, relocs, fp_exact, fp_tpl FROM misses "
                          f"WHERE id IN ({','.join('?' * len(part))})", part).fetchall()
    c.row_factory = None
    # a match is tried again (its files may have been rolled back), a failure never
    tried = {(m, t) for m, t in c.execute("SELECT miss_id, target FROM tried WHERE game = ? AND result != 'match'",
                                          (ROOT.name,))}
    per_target: dict[tuple[str, str], list] = {}
    for r in rows:
        seen = set()
        for fp, want in ((r["fp_exact"], "exact"), (r["fp_tpl"], "template")):
            for mod, n, kind in index.get(fp, []):
                if kind != want or (mod, n) in seen or (r["id"], n) in tried:
                    continue
                seen.add((mod, n))
                # exact first, same game first, then the closest miss
                per_target.setdefault((mod, n), []).append((kind != "exact", r["game"] != ROOT.name, r["diffs"] or 0,
                                                            r, kind))
    log(f"{len(light)} misses with a fingerprint ({'all games' if games is None else ', '.join(games)}), "
        f"{ntargets} unmatched functions in {len(imgs)} modules: {len(per_target)} have a miss of the same shape "
        f"({time.time() - t0:.1f} s)")
    if not per_target:
        return []
    done_rows = []

    def attempt(item):
        (mod, n), cands = item
        img = imgs[mod]
        thumb = n in img.thumb
        for *_k, r, kind in sorted(cands, key=lambda x: x[:3])[:12]:
            result = "no pairing"
            base = [p.replace(" -thumb", "") for p in (r["profile"], img.default_cc) if p]
            profiles = list(dict.fromkeys(p + " -thumb" if thumb else p for p in base))
            for src in candidates(r, img, n):
                for prof in profiles:
                    why = cm.check(img, n, src, prof, allow_data="-profile" in prof)
                    if not why:
                        done_rows.append((r["id"], n, "match"))
                        return mod, n, src, prof, r["id"], kind, f"{r['game']}:{r['func']}"
                    result = why
            done_rows.append((r["id"], n, result[:200]))
        return None

    found = []
    saved = [0, time.time()]

    def checkpoint():
        """The failed tries so far go to the database every minute: a stopped replay starts again where it was."""
        rows_ = done_rows[saved[0]:]
        saved[0] += len(rows_)
        saved[1] = time.time()
        with _lock:
            c.executemany("INSERT OR REPLACE INTO tried VALUES (?,?,?,?,?)",
                          [(m, ROOT.name, t, res, saved[1]) for m, t, res in rows_ if res != "match"])
            c.commit()
    with ThreadPoolExecutor(max_workers=max(1, jobs)) as pool:
        for res in pool.map(attempt, sorted(per_target.items())):
            if time.time() - saved[1] > 60:
                checkpoint()
            if res:
                mod, n, src, prof, mid, kind, frm = res
                a, s = imgs[mod].where(n)
                if prof != imgs[mod].default_cc:
                    src = f"{am.MARKER}{prof} */\n" + src
                found.append((mod, n, s, a, src, mid, kind))
                log(f"  MATCH {n} ({mod}{', thumb' if n in imgs[mod].thumb else ''}) <- miss of {frm} ({kind})")
    now = time.time()
    with _lock:
        c.executemany("INSERT OR REPLACE INTO tried VALUES (?,?,?,?,?)",
                      [(m, ROOT.name, t, res, now) for m, t, res in done_rows])
        c.commit()
    log(f"{len(found)} matches ({time.time() - t0:.0f} s)")
    return found


def save_wins(found, kept: set[str]) -> None:
    now = time.time()
    with _lock:
        c = db()
        c.executemany("INSERT OR REPLACE INTO wins VALUES (?,?,?,?,?)",
                      [(mid, ROOT.name, n, kind, now) for _m, n, _s, _a, _src, mid, kind in found if n in kept])
        c.commit()


def _profile_of(src: str, default: str) -> str:
    import auto_match as am
    return src[len(am.MARKER):].split(" */", 1)[0] if src.startswith(am.MARKER) else default


def write_to(found, out: Path) -> None:
    """Matches as a workbench batch: NAME.c + results.json (`workbench.py submit-many DIR`). Main module functions
    first (submit-many cannot go back to the main module after an overlay)."""
    import clone_match as cm
    out.mkdir(parents=True, exist_ok=True)
    f = out / "results.json"
    try:
        res = json.loads(f.read_text(encoding="utf-8"))
    except (OSError, ValueError):
        res = {}
    default = cm.Image(ROOT).default_cc
    for _m, n, _s, _a, src, _mid, _kind in sorted(found, key=lambda x: x[0] != "main"):
        (out / f"{n}.c").write_text(src, encoding="utf-8", newline="\n")
        res[n] = {"status": "match", "match": True, "profile": _profile_of(src, default), "k": [0, 0],
                  "mt": time.time(), "from": "missdb"}
    f.write_text(json.dumps(res, indent=1), encoding="utf-8")


WB_PENDING = ROOT / "build" / "workbench" / "pending.json"


def _pending() -> list[dict]:
    try:
        return json.loads(WB_PENDING.read_text(encoding="utf-8"))
    except (OSError, ValueError):
        return []


def _workbench(*args) -> dict:
    import subprocess
    r = subprocess.run([sys.executable, str(Path(__file__).resolve().parent / "workbench.py"), *args], cwd=ROOT,
                       capture_output=True, text=True, encoding="utf-8", errors="replace")
    last = (r.stdout.strip().splitlines() or ["{}"])[-1]
    try:
        return json.loads(last)
    except ValueError:
        return {"ok": False, "error": (r.stdout + r.stderr)[-1500:]}


def submit_others(found, commit: bool, push: bool) -> list[str]:
    """Overlay, ITCM and Thumb matches go through `workbench.py submit-many` (it knows every module: integrated,
    ROM rebuilt, kept only if byte-identical), then `workbench.py commit` (one full verify) when nothing else was
    pending. Returns the names kept."""
    import shutil
    d = ROOT / "build" / "missdb" / "matched"
    shutil.rmtree(d, ignore_errors=True)
    write_to(found, d)
    before = {p["name"] for p in _pending()}
    r = _workbench("submit-many", str(d), "--who", "missdb")
    res = json.loads((d / "results.json").read_text(encoding="utf-8"))
    kept = [n for n, v in res.items() if v.get("submit") is True]
    print(f"overlays / ITCM / Thumb: {len(kept)} kept, {r.get('failed', '?')} refused by the ROM"
          + (f" ({r.get('error')})" if r.get("error") else ""))
    if kept and commit:
        if before:
            print(f"not committed: {len(before)} other match(es) are waiting in {WB_PENDING.relative_to(ROOT)} "
                  "(run `workbench.py commit` when their session is done)")
        else:
            c = _workbench("commit", *(["--push"] if push else []))
            print("committed" if c.get("ok") else f"commit failed: {c.get('error')}")
            if c.get("dropped"):
                kept = [n for n in kept if n not in set(c["dropped"])]
    return kept


def replay_data(games: list[str] | None, jobs: int, targets: set[str] | None, with_matched: bool, log=print):
    """missdata.replay with the data misses of these games (None: all) and, with_matched, the matched data of our
    other games."""
    import clone_match as cm
    import missdata
    imgs = {}
    for mod in modules():
        try:
            imgs[mod] = cm.Image(ROOT, mod)
        except (OSError, StopIteration, IndexError):
            continue
    c = db()
    c.row_factory = sqlite3.Row
    where = "fp_exact LIKE 'd:%'"
    args: list = []
    if games is not None:
        where += f" AND game IN ({','.join('?' * len(games))})"
        args += games
    rows = [dict(r) for r in c.execute(f"SELECT id, game, func, profile, code, diffs, relocs, fp_exact FROM misses "
                                       f"WHERE {where}", args)]
    c.row_factory = None
    log(f"data: {len(rows)} data misses")
    return imgs, missdata.replay(imgs, rows, targets, jobs, with_matched, log)


def commit_data(names: list[str], files: list[str], push: bool) -> None:
    """After VERIFY PASSED: commits the data files of this run and the delinks.txt they changed, nothing else."""
    import subprocess
    run = lambda *c: subprocess.run(list(c), cwd=ROOT, capture_output=True, text=True)  # noqa: E731
    v = run(sys.executable, "tools/match.py", "verify")
    if "VERIFY PASSED" not in v.stdout:
        print("data not committed: verify failed\n" + v.stdout[-1500:])
        return
    if run("git", "diff", "--cached", "--quiet").returncode:
        print("data commit skipped: other changes are already staged in this repository")
        return
    for k in range(0, len(files), 100):
        run("git", "add", "--", *files[k:k + 100])
    r = run("git", "commit", "-q", "-m", f"missdb: {len(names)} matching data\n\nC definitions of data (a data miss, "
            "or the same data matched in another of our DS projects) that compile to exactly these bytes and "
            "pointers (missdb.py replay). VERIFY PASSED.\n")
    print("data committed" if r.returncode == 0 else f"data commit failed: {(r.stdout + r.stderr)[-300:]}")
    if r.returncode == 0 and push and run("git", "remote").stdout.strip():
        r = run("git", "push", "-q", "origin", "HEAD")
        print("pushed" if r.returncode == 0 else f"push failed: {(r.stdout + r.stderr)[-300:]}")


def cmd_replay(a) -> None:
    games = None if a.all_games else [g for g in (a.games.split(",") if a.games else [ROOT.name])]
    targets = set(a.names.split(",")) if a.names else None
    if not a.data_only:
        replay_code(a, games, targets)
    if a.no_data or a.to:  # hunt's batch folder holds functions only
        return
    imgs, found = replay_data(games, a.j, targets, with_matched=a.all_games)
    if a.max:
        found = found[:a.max]
    if not found or a.dry_run:
        print(f"data: {len(found)} matches" + (" (dry run, nothing added)." if found else "."))
        return
    import missdata
    kept = missdata.integrate(found, imgs)
    now = time.time()
    with _lock:
        c = db()
        c.executemany("INSERT OR REPLACE INTO wins VALUES (?,?,?,?,?)",
                      [(f[7] if f[7] is not None else -1, ROOT.name, f[1], "data", now) for f in found if f[1] in kept])
        c.commit()
    print(f"OK: {len(kept)} data matched.")
    if kept and a.commit:
        files = [f"src/data/{f[0]}_{f[4].strip('.')}_{f[2]:08x}.c" for f in found if f[1] in kept]
        files += sorted({(imgs[f[0]].cfg / "delinks.txt").relative_to(ROOT).as_posix() for f in found if f[1] in kept})
        commit_data(kept, files, a.push)


def replay_code(a, games, targets) -> None:
    import clone_match as cm
    found = replay(games, a.j, targets)
    if a.max:
        found = found[:a.max]
    if not found:
        print("No miss matches another function.")
        return
    if a.dry_run:
        print(f"{len(found)} matches (dry run, nothing added).")
        return
    if a.to:
        write_to(found, a.to)
        save_wins(found, {f[1] for f in found})
        print(f"{len(found)} matches written to {a.to} (python ../../studio/gametools/workbench.py submit-many {a.to})")
        return
    # main module ARM: clone_match's batch integration + full verify; the rest: workbench (every module, Thumb)
    first = lambda f: f[4].split("\n", 1)[0]  # noqa: E731  (the compiler marker line)
    # -profile code has a .data name record: workbench integrates it (profrec), also in the main module
    main = [f for f in found if f[0] == "main" and "-thumb" not in first(f) and "-profile" not in first(f)]
    others = [f for f in found if f not in main]
    kept = []
    if main:
        kept = cm.integrate_verified([(n, s, ad, src) for _m, n, s, ad, src, _i, _k in main])
        print(f"main module: {len(kept)} functions matched from misses.")
        if kept and a.commit:
            cm.commit(kept, a.push, msg=(f"missdb: {len(kept)} matching functions\n\nC written for another function "
                                         "(a miss of an AI or hand session, here or in another of our DS projects) "
                                         "that compiles exactly to these functions (missdb.py replay). "
                                         "VERIFY PASSED.\n"))
    if others:
        kept += submit_others(others, a.commit, a.push)
    save_wins(found, set(kept))
    print(f"OK: {len(kept)} functions matched from misses.")


# ---------------------------------------------------------------- import of older tries

def cmd_import(a) -> None:
    """Judges the tries the tools kept before the database existed: judge() records them (with a fingerprint)."""
    import workbench as wb
    files = []
    mem = ROOT / "build" / "qwen_auto" / "memory"
    for p in sorted(mem.glob("*.json")) if mem.is_dir() else []:
        try:
            best = json.loads(p.read_text(encoding="utf-8")).get("best")
        except ValueError:
            best = None
        if best:
            files.append((p.stem, best, "import:qwen"))
    for d, tag in (("build/hunt/best", "import:hunt"), ("build/auto/near", "import:near")):
        for p in sorted((ROOT / d).glob("*.c")) if (ROOT / d).is_dir() else []:
            files.append((p.stem, p.read_text(encoding="utf-8", errors="replace"), tag))
    c = db()
    # judged once: also the tries that were not kept (same machine code as a kept one) are never judged again
    have = {(f, h) for f, h in c.execute("SELECT func, code_hash FROM misses WHERE game = ? UNION "
                                         "SELECT func, code_hash FROM imported WHERE game = ?", (ROOT.name, ROOT.name))}
    files = [x for x in files if (x[0], code_hash(x[1])) not in have]
    if a.max:
        files = files[:a.max]
    # by module (main first: workbench cannot come back to the main module after an overlay), then by source
    ovl = wb.overlay_index()
    groups: dict = {}
    for x in files:
        groups.setdefault(ovl.get(x[0], -2), {}).setdefault(x[2], []).append(x)
    print(f"{len(files)} older tries to judge ({len(groups)} modules)", flush=True)
    t0, n, k = time.time(), 0, 0

    def one(item):
        name, code, _tag = item
        try:
            return wb.judge(name, code)
        except BaseException as e:  # noqa: BLE001  unknown names raise SystemExit
            if os.environ.get("MISSDB_DEBUG"):
                print(name, repr(e)[:300], flush=True)
            return None
    for ov in sorted(groups):
        by_tag = groups[ov]
        if ov != -2:
            wb.select_module(next(iter(by_tag.values()))[0][0])
        for tag, items in by_tag.items():
            wb.MISS_SOURCE = tag
            with ThreadPoolExecutor(max_workers=max(1, a.j)) as pool:
                for r in pool.map(one, items):
                    n += r is not None
                    k += 1
                    if k % 200 == 0:
                        print(f"[{k}/{len(files)} {time.time() - t0:.0f}s]", flush=True)
            with _lock:
                c.executemany("INSERT OR IGNORE INTO imported VALUES (?,?,?)",
                              [(ROOT.name, nm, code_hash(code)) for nm, code, _t in items])
                c.commit()
    print(f"{n} tries judged ({time.time() - t0:.0f} s)")


# ---------------------------------------------------------------- reading

def cmd_stats(a) -> None:
    c = db()
    print(f"{DB}")
    print(f"{'game':40} {'misses':>7} {'replayable':>10} {'functions':>9} {'wins':>5}")
    wins = dict(c.execute("SELECT game, COUNT(*) FROM wins GROUP BY game"))
    for g, n, fp, f in c.execute("SELECT game, COUNT(*), COUNT(fp_exact), COUNT(DISTINCT func) FROM misses "
                                 "GROUP BY game ORDER BY 2 DESC"):
        print(f"{g:40} {n:7} {fp:10} {f:9} {wins.get(g, 0):5}")
    print("errors:", ", ".join(f"{s} {n}" for s, n in c.execute("SELECT status, COUNT(*) FROM misses GROUP BY status")))
    if a.json:
        rows = c.execute("SELECT game, COUNT(*), COUNT(fp_exact), COUNT(DISTINCT func) FROM misses GROUP BY game")
        print(json.dumps({g: {"misses": n, "replayable": fp, "functions": f, "wins": wins.get(g, 0)}
                          for g, n, fp, f in rows}))


def cmd_show(a) -> None:
    c = db()
    rows = c.execute("SELECT id, game, status, diffs, total, profile, source, error, code FROM misses WHERE func = ? "
                     "AND game = ? ORDER BY status != 'near', diffs LIMIT ?", (a.name, ROOT.name, a.n)).fetchall()
    for mid, g, st, d, t, prof, src, err, code in rows:
        print(f"--- #{mid} {st} {d}/{t} diffs  {prof}  ({src})")
        if st == "compile":
            print(err.strip()[-400:])
        if a.code:
            print(code)


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    sp = ap.add_subparsers(dest="cmd", required=True)
    p = sp.add_parser("replay", help="try every miss on every unmatched function of this game")
    p.add_argument("--all-games", action="store_true", help="misses of all our games (default: this game)")
    p.add_argument("--games", help="misses of these games (comma separated folder names)")
    p.add_argument("--names", help="only these target functions (comma separated)")
    p.add_argument("--max", type=int, default=0)
    p.add_argument("-j", type=int, default=os.cpu_count() or 4)
    p.add_argument("--dry-run", action="store_true")
    p.add_argument("--to", type=Path, help="write the matches to this workbench batch folder, integrate nothing")
    p.add_argument("--commit", action="store_true", help="after VERIFY PASSED: commit the new files")
    p.add_argument("--push", action="store_true", help="with --commit: push when the game has a remote")
    p.add_argument("--no-data", action="store_true", help="functions only")
    p.add_argument("--data-only", action="store_true", help="data only (.data / .rodata: data misses, and with "
                                                            "--all-games the matched data of our other games)")
    p = sp.add_parser("import", help="judge (and so record) the tries kept before the database existed")
    p.add_argument("--max", type=int, default=0)
    p.add_argument("-j", type=int, default=max(1, (os.cpu_count() or 4) // 2))
    p = sp.add_parser("stats")
    p.add_argument("--json", action="store_true")
    p = sp.add_parser("show")
    p.add_argument("name")
    p.add_argument("-n", type=int, default=10)
    p.add_argument("--code", action="store_true")
    a = ap.parse_args()
    if a.cmd == "replay" and not (a.dry_run or a.to):  # it integrates: same lock as the other pipelines
        from pipeline_lock import pipeline_lock
        with pipeline_lock("missdb"):
            globals()["cmd_" + a.cmd](a)
    else:
        globals()["cmd_" + a.cmd](a)


if __name__ == "__main__":
    main()
