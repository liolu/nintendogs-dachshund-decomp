#!/usr/bin/env python3
"""techtag.py - TAGS on every function of every game: functions that work the same way (same instruction shape or
same control-flow skeleton, in any game) and the techniques that solved their matched relatives.

    python studio/gametools/techtag.py build [--games a,b] [--jobs 8]   # index all games -> decomp ds/techtags.sqlite
    python studio/gametools/techtag.py show GAME NAME                   # tags of one function + its families
    python studio/gametools/techtag.py find TAG [--game G] [--todo]     # functions with a tag (all games)
    python studio/gametools/techtag.py todo GAME [--tech ID]            # unmatched functions of a game, best hint first
    python studio/gametools/techtag.py stats                            # tag counts, families, feature -> technique

Tags (one text column, "kind:value"):
  fam:s-XXXXXXXX  same SHAPE: identical instruction sequence once registers, immediates and pool words are masked
                  (the same C compiled in another game, with other struct offsets / register allocation)
  fam:k-XXXXXXXX  same SKELETON: the same run of loads / stores / ALU / tests / branches / calls (repeats collapsed),
                  >= SKEL_MIN steps: written the same way, sizes may differ
  feat:...        what the target code needs (switch table, swi/clz = asm only, varargs prologue, 64-bit multiply,
                  signed loads, hardware registers, loop, leaf...), read from the ROM: every function has them
  tech:...        matched functions: the technique visible in their C (goto-loop, sdk-inline, volatile, u8-ptr,
                  int-vs-long...; ids of TECHNIQUES.md), plus techlog `ok` entries and missdb wins
  prof:...        matched functions: the compiler profile of their file
  src:...         matched functions: auto (auto_match/clone), lib (SDK/MSL/donor files), hand
  try:...         unmatched functions: a technique that solved matched members of their families (score = share of
                  the matched members that used it; shape families count more than skeleton ones), `try:siblings`
                  when a member of the same shape is already matched (transplant its C), and techniques that go with
                  their features over all games (feature -> technique lift)
The web app (Studio, tab "Tags") reads the same database.
"""
import argparse
import collections
import hashlib
import json
import os
import re
import sqlite3
import struct
import sys
import time
from concurrent.futures import ProcessPoolExecutor, as_completed
from pathlib import Path

HERE = Path(__file__).resolve().parent
WORKSPACE = HERE.parents[1]  # decomp ds/
PROJETS = WORKSPACE / "projets"
DB = Path(os.environ.get("TECHTAGS") or WORKSPACE / "techtags.sqlite")
TECHFILE = HERE / "TECHNIQUES.md"
SKEL_MIN = 8  # skeleton families only for functions with at least this many collapsed steps (tiny ones all look alike)
SHAPE_MIN = 3  # instructions: shorter functions get no shape family (every `bx lr` is the same)
MAX_TRY = 6  # try: tags kept per function

SCHEMA = """
CREATE TABLE funcs (id INTEGER PRIMARY KEY, game TEXT, module TEXT, name TEXT, addr INTEGER, size INTEGER,
                    mode TEXT, matched INTEGER, path TEXT, profile TEXT, shape TEXT, skel TEXT, tags TEXT);
CREATE TABLE why (fid INTEGER, tag TEXT, score REAL, why TEXT);
CREATE TABLE families (fam TEXT PRIMARY KEY, level TEXT, members INTEGER, matched INTEGER, games INTEGER,
                       size INTEGER, techs TEXT, sample TEXT);
CREATE TABLE tagcount (tag TEXT PRIMARY KEY, n INTEGER, matched INTEGER, games INTEGER);
CREATE TABLE techfeat (feat TEXT, tech TEXT, n_feat INTEGER, n_both INTEGER, p REAL, lift REAL);
CREATE TABLE meta (k TEXT PRIMARY KEY, v TEXT);
CREATE INDEX funcs_game ON funcs (game, matched);
CREATE INDEX funcs_name ON funcs (name);
CREATE INDEX funcs_shape ON funcs (shape);
CREATE INDEX funcs_skel ON funcs (skel);
CREATE INDEX why_fid ON why (fid);
"""


# ---------------------------------------------------------------- reading the code (ARM)

def arm_token(w: int) -> tuple[str, str]:
    """(shape token, skeleton step) of one ARM instruction; registers and immediates dropped."""
    cond, t = w >> 28, (w >> 25) & 7
    if w == 0xE12FFF1E or (w & 0x0FFFFFFF) == 0x01A0F00E:  # bx lr / mov pc, lr
        return "%xR" % cond, "R"
    if t == 5:
        if cond == 0xF:
            return "BLX", "C"
        return ("%xBL" % cond, "C") if w >> 24 & 1 else ("%xB" % cond, "j" if cond == 0xE else "?")
    if t in (0, 1):
        if (w & 0x0FFFFFF0) == 0x012FFF10:  # bx rN
            return "%xBX" % cond, "R"
        if t == 0 and (w & 0x90) == 0x90:  # multiply / halfword / swap
            k = (w >> 4) & 0xF
            if k == 9 and (w >> 24) & 1 == 0:
                return "%xM%02x" % (cond, (w >> 20) & 0xFE), "M"
            return "%xH%02x%x" % (cond, (w >> 20) & 0xF5, k), "L" if w >> 20 & 1 else "S"
        op = (w >> 21) & 0xF
        sub = ((w >> 5) & 3) | (8 if w & 0x10 else 0) if t == 0 else 4
        tok = "%xD%x%x%x" % (cond, op, (w >> 20) & 1, sub)
        if (w >> 12) & 0xF == 15 and op not in (8, 9, 10, 11):
            return tok, "R"
        return tok, "T" if 8 <= op <= 11 else ("A" if cond == 0xE else "a")
    if t in (2, 3):
        return "%xT%02x%d" % (cond, (w >> 20) & 0xF7, t), "L" if w >> 20 & 1 else "S"
    if t == 4:
        pc = (w >> 15) & 1 and w >> 20 & 1
        return "%xK%02x%d" % (cond, (w >> 20) & 0xFF, pc), "R" if pc else ("L" if w >> 20 & 1 else "S")
    if t == 7 and (w >> 24) & 1:
        return "%xSWI" % cond, "W"
    return "%xX%x" % (cond, (w >> 24) & 0xF), "X"


def arm_pool(ws: list[int]) -> set[int]:
    """Indexes of the literal pool words (targets of `ldr rX, [pc, #imm]`)."""
    pool = set()
    for i, w in enumerate(ws):
        if (w & 0x0F7F0000) == 0x051F0000:  # ldr rX, [pc, #+-imm]
            off = w & 0xFFF if w >> 23 & 1 else -(w & 0xFFF)
            j = i + 2 + off // 4
            if 0 <= j < len(ws):
                pool.add(j)
    return pool


SOFTFLOAT = re.compile(r"^_(?:f_|d_|ff|dd|fadd|fsub|fmul|fdiv|dadd|dsub|dmul|ddiv|f2|d2|fls|dls|fgr|dgr|feq|deq|"
                       r"fneq|dneq|fle|dle|fge|dge|fcmp|dcmp|fix|flt|dfix|dflt)|^__(?:fl|dl)|^_?(?:sqrtf?|sinf?|cosf?|"
                       r"atan2?f?|powf?|floorf?|ceilf?|fabsf?|fmodf?)$")
DIVIDE = re.compile(r"^_(?:s32_div_f|u32_div_f|s32_div|u32_div|ll_sdiv|ll_udiv|ll_mod|ll_umod|i_div|u_div|div0)|"
                    r"^FX_(?:Div|Inv|Sqrt|Mod)|^CP_")
LIB_PREFIX = re.compile(r"^(FX|G3|G2|GX|MI|OS|FS|SND|NNS|CARD|PAD|TP|WM|MB|CTRDG|RTC|PM|MATH|VEC|MTX|CP|STD|NNSi|OSi|MIi)_")
CLIB = {"memcpy", "memset", "memmove", "memcmp", "strcpy", "strlen", "strcmp", "strncpy", "sprintf", "snprintf",
        "vsprintf", "printf", "malloc", "free", "abs", "rand", "srand"}


def callee_tags(names) -> set[str]:
    out = set()
    for n in names:
        if not n:
            continue
        if SOFTFLOAT.search(n):
            out.add("feat:float")
        if DIVIDE.search(n):
            out.add("feat:divide")
        if n.startswith("_ll_") or n in ("_lmul", "_ull_mul"):
            out.add("feat:int64")
        m = LIB_PREFIX.match(n)
        if m:
            out.add("calls:" + m.group(1).rstrip("i"))
        elif n in CLIB:
            out.add("calls:clib")
    return out


def arm_info(code: bytes, addr: int, name_at) -> tuple[list[str], list[str], set[str]]:
    ws = list(struct.unpack("<%dI" % (len(code) // 4), code[: len(code) // 4 * 4]))
    pool = arm_pool(ws)
    toks, skel, feats, callees = [], [], set(), []
    n = len(ws)
    conds = 0
    for i, w in enumerate(ws):
        if i in pool:
            toks.append("P")
            if 0x04000000 <= w < 0x05000000:
                feats.add("feat:hwreg")
            continue
        tok, step = arm_token(w)
        toks.append(tok)
        if not skel or skel[-1] != step:
            skel.append(step)
        cond, t = w >> 28, (w >> 25) & 7
        if t == 5:
            off = (w & 0xFFFFFF) - (0x1000000 if w & 0x800000 else 0)
            j = i + 2 + off
            if cond == 0xF or w >> 24 & 1:
                callees.append(name_at(addr + 8 + off * 4 + (2 if cond == 0xF and w >> 24 & 1 else 0)))
            elif 0 <= j < n:
                if j <= i:
                    feats.add("feat:loop")
            elif i == n - 1 or all(k in pool for k in range(i + 1, n)):
                feats.add("feat:tailcall")
        elif cond not in (0xE, 0xF):
            conds += 1
        if (w & 0x0FFFF000) == 0x008FF000 or (w & 0x0FFFF000) == 0x079FF000:
            feats.add("feat:switch")
        elif t == 7 and w >> 24 & 1:
            feats.add("feat:swi")
        elif (w & 0x0FFF0FF0) == 0x016F0F10:
            feats.add("feat:clz")
        elif (w & 0x0FBF0FFF) == 0x010F0000 or (w & 0x0FB0FFF0) == 0x0120F000 or (w & 0x0FB0F000) == 0x0320F000:
            feats.add("feat:psr")
        elif t == 7 and w & 0x10:
            feats.add("feat:coproc")
        elif (w & 0x0F8000F0) == 0x00800090:
            feats.add("feat:mul64")
        elif (w & 0x0FF00090) == 0x01600080 or (w & 0x0FF00090) == 0x01000080:
            feats.add("feat:smulxy")
        elif (w & 0x0FC000F0) == 0x00000090:
            feats.add("feat:mul")
        elif (w & 0x0E1000D0) == 0x001000D0:
            feats.add("feat:signed-load")
        elif (w & 0x0E0000F0) == 0x000000B0:
            feats.add("feat:halfword")
        elif t in (2, 3) and w >> 22 & 1:
            feats.add("feat:byte")
        elif (w & 0x0FFFFFFF) == 0x092D000F:  # stmdb sp!, {r0-r3}
            feats.add("feat:varargs")
        if t == 0 and not w & 0x10 and (w >> 5) & 3 == 1 and (w >> 7) & 31 == 12:
            feats.add("feat:fx12")  # lsr #12: fixed point 20.12 (FX32)
        if t in (0, 1) and (w >> 21) & 0xF == 0xE:
            feats.add("feat:bitclear")
    if conds >= 2:
        feats.add("feat:cond-exec")
    if not callees:
        feats.add("feat:leaf")
    if feats & {"feat:swi", "feat:clz", "feat:psr", "feat:coproc"}:
        feats.add("feat:asm-only")
    return toks, skel, feats | callee_tags(callees)


# ---------------------------------------------------------------- Thumb

def thumb_info(code: bytes, addr: int, name_at) -> tuple[list[str], list[str], set[str]]:
    hs = list(struct.unpack("<%dH" % (len(code) // 2), code[: len(code) // 2 * 2]))
    n = len(hs)
    pool = set()
    for i, h in enumerate(hs):
        if h >> 11 == 0x09:  # ldr rX, [pc, #imm]
            o = ((addr + i * 2 + 4) & ~3) + (h & 0xFF) * 4 - addr
            if 0 <= o // 2 + 1 < n:
                pool |= {o // 2, o // 2 + 1}
    toks, skel, feats, callees = [], [], set(), []
    i = 0
    while i < n:
        h = hs[i]
        if i in pool:
            toks.append("P")
            if i + 1 < n and i + 1 in pool and 0x0400 <= hs[i + 1] < 0x0500:
                feats.add("feat:hwreg")
            i += 1
            continue
        top = h >> 11
        if top == 0x1E and i + 1 < n and hs[i + 1] >> 11 in (0x1F, 0x1D):
            off = ((h & 0x7FF) << 12 | (hs[i + 1] & 0x7FF) << 1)
            off -= 1 << 23 if off & (1 << 22) else 0
            callees.append(name_at(addr + i * 2 + 4 + off))
            tok, step = "BL", "C"
            i += 1
        elif h >> 12 == 0xD and (h >> 8) & 0xF < 0xE:
            off = (h & 0xFF) - (0x100 if h & 0x80 else 0)
            if off < 0:
                feats.add("feat:loop")
            tok, step = "b%x" % ((h >> 8) & 0xF), "?"
        elif h >> 12 == 0xD and (h >> 8) & 0xF == 0xF:
            tok, step = "SWI", "W"
            feats.add("feat:swi")
        elif top == 0x1C:
            off = (h & 0x7FF) - (0x800 if h & 0x400 else 0)
            if off < 0:
                feats.add("feat:loop")
            tok, step = "B", "j"
        elif h >> 7 == 0x8E or (h & 0xFF00) == 0xBD00:  # bx / pop {pc}
            tok, step = "R%x" % (h >> 8), "R"
        elif h >> 10 == 0x10:
            tok = "a%x" % ((h >> 6) & 0xF)
            step = "T" if (h >> 6) & 0xF in (8, 10, 11) else ("M" if (h >> 6) & 0xF == 13 else "A")
            if (h >> 6) & 0xF == 13:
                feats.add("feat:mul")
        elif h >> 10 == 0x11:
            tok, step = "h%x" % ((h >> 8) & 3), "T" if (h >> 8) & 3 == 1 else "A"
            if (h & 0xFF87) == 0x4487:
                feats.add("feat:switch")
        elif top in (0x0A, 0x0B):  # load/store register offset
            tok, step = "r%x" % ((h >> 9) & 7), "L" if (h >> 9) & 7 >= 3 else "S"
            if (h >> 9) & 7 in (3, 7):
                feats.add("feat:signed-load")
        elif top in (0x0C, 0x0D, 0x0E, 0x0F, 0x10, 0x11, 0x12, 0x13):
            tok, step = "m%x" % top, "L" if h >> 11 & 1 else "S"
            if top in (0x0E, 0x0F):
                feats.add("feat:byte")
            elif top in (0x10, 0x11):
                feats.add("feat:halfword")
        elif h >> 8 in (0xB4, 0xB5):
            tok, step = "push", "S"
            if h & 0xFF == 0x0F and h >> 8 == 0xB4:
                feats.add("feat:varargs")
        elif h >> 12 == 0xC:
            tok, step = "k%x" % (h >> 11 & 1), "L" if h >> 11 & 1 else "S"
        else:
            tok, step = "t%x" % top, "T" if top == 0x05 else "A"
        toks.append(tok)
        if not skel or skel[-1] != step:
            skel.append(step)
        i += 1
    if not callees:
        feats.add("feat:leaf")
    return toks, skel, feats | callee_tags(callees)


# ---------------------------------------------------------------- reading the C (matched functions)

C_RULES = [  # (tag, regex on the function's C, needs a feature or None)
    ("tech:goto-loop", re.compile(r"\bgoto\b"), None),
    ("tech:sdk-inline", re.compile(r"\binline\b"), None),
    ("tech:varargs", re.compile(r"\.\.\.\s*\)"), None),
    ("tech:asm-function", re.compile(r"\b(?:asm|__asm)\b"), None),
    ("tech:u8-ptr", re.compile(r"\(\s*(?:u8|s8|char)\s*\*\s*\)"), None),
    ("tech:int-vs-long", re.compile(r"(?<![\w*])(?:unsigned\s+)?int\s+\**\w+\s*[;=,)]"), None),
    ("tech:neg-mul", re.compile(r"\*=\s*-1\b"), None),
    ("tech:s64", re.compile(r"\blong\s+long\b|\b[su]64\b"), None),
    ("tech:switch", re.compile(r"\bswitch\s*\("), None),
    ("tech:static-anchor", re.compile(r"\bstatic\s+const\b"), None),
    ("tech:chain-order", re.compile(r"[\w\]\)]\s*=\s*[\w.\->\[\]]+\s*=\s*[^=]"), None),
    ("tech:do-while", re.compile(r"\bdo\s*\{"), None),
    ("tech:for-loop", re.compile(r"\bfor\s*\("), None),
    ("tech:while-loop", re.compile(r"(?<!\})\s*\bwhile\s*\([^;]*\)\s*\{"), None),
    ("tech:typed-struct", re.compile(r"\btypedef\s+struct\b|\bstruct\s+\w+\s*\{"), None),
    ("tech:enum-local", re.compile(r"\benum\b"), None),
    ("tech:register", re.compile(r"\bregister\b"), None),
    ("tech:ternary", re.compile(r"\?[^:;]+:"), None),
    ("tech:narrow-cast", re.compile(r"\(\s*(?:u8|s8|u16|s16)\s*\)"), None),
    ("tech:m2c-draft", re.compile(r"\bM2C_FIELD\b|\btemp_r\d+\b|\bvar_\w+\b"), None),
    ("tech:fnptr", re.compile(r"\(\s*\*\s*\w*\s*\)\s*\("), None),
    ("tech:call-temp", re.compile(r"\b\w+\s+\w+\s*=\s*\w+\([^;]*\);\s*return\s+\w+\s*[+\-|&^]"), None),
]
PRAGMA = re.compile(r"^\s*#\s*pragma\s+(\w+)", re.M)


def c_tags(c: str, feats: set[str]) -> set[str]:
    out = {t for t, rx, _ in C_RULES if rx.search(c)}
    if re.search(r"\bvolatile\b", c):
        out.add("tech:hw-volatile" if "feat:hwreg" in feats else "tech:param-volatile")
    out |= {"tech:pragma-" + p for p in PRAGMA.findall(c) if p not in ("once",)}
    return out


def origin(path: str, text: str) -> str:
    p = path.lower()
    if text.startswith("/* compiler: ") or "/auto/" in p:
        return "src:auto"
    if re.search(r"/(nitro|nitrosdk|nitrosystem|nns|sdk|msl|libc|runtime|lib|libs|donor|donors|wifi|dwc|nnsys)/", p):
        return "src:lib"
    return "src:hand"


def techlog_tags(root: Path) -> dict[str, set[str]]:
    out = collections.defaultdict(set)
    d = root / "build" / "hunt" / "techlog"
    for p in d.glob("*.md") if d.is_dir() else []:
        for line in p.read_text(encoding="utf-8", errors="replace").splitlines():
            c = line[2:].split(" | ") if line.startswith("- ") else []
            if len(c) > 2 and c[1] == "ok":
                out[p.stem].add("tech:" + c[2].replace("proto:", ""))
    return out


# ---------------------------------------------------------------- one game (in a worker process)

def index_game(game: str) -> tuple[str, list, str]:
    root = PROJETS / game
    os.environ["DSD_PROJECT"] = str(root)
    sys.path.insert(0, str(HERE))
    import clone_match as cm  # noqa: E402  (needs DSD_PROJECT set first)
    import donorlib  # noqa: E402
    rows, err = [], ""
    logged = techlog_tags(root)
    try:
        import missdb
        con = sqlite3.connect(f"file:{missdb.DB.as_posix()}?mode=ro", uri=True, timeout=20)
        won = {t for (t,) in con.execute("SELECT DISTINCT target FROM wins WHERE game = ?", (game,))}
        con.close()
    except Exception:  # noqa: BLE001  (no missdb: no missdb-replay tags)
        won = set()
    texts = {}

    def c_of(path: str, name: str) -> str | None:
        if path not in texts:
            try:
                t = (root / path).read_text(encoding="utf-8", errors="replace")
            except OSError:
                t = ""
            items, decls = {}, []
            for it in donorlib.top_level_items(t) if t else []:
                n = donorlib.function_name(it) if it.rstrip().endswith("}") else None
                if n:
                    items[n] = it
                else:
                    decls.append(it)
            texts[path] = (t, items, "\n".join(decls))
        t, items, pre = texts[path]
        it = items.get(name)
        return None if it is None else (it, pre, t)

    try:
        mods = __import__("missdb").modules(root)
    except Exception as e:  # noqa: BLE001
        return game, [], f"modules: {e}"
    for mod in mods:
        try:
            img = cm.Image(root, mod)
        except Exception as e:  # noqa: BLE001  (a module dsd did not split: skip it, keep the rest)
            err += f"{mod}: {e}; "
            continue
        name_at = img.name_at.get
        for mode, table in (("arm", img.funcs), ("thumb", img.thumb)):
            for name, (addr, size) in table.items():
                code = img.code(name)
                info = arm_info if mode == "arm" else thumb_info
                toks, skel, tags = info(code, addr, name_at)
                shape = hashlib.sha1(" ".join(toks).encode()).hexdigest()[:8] if len(toks) >= SHAPE_MIN else ""
                sk = hashlib.sha1("".join(skel).encode()).hexdigest()[:8] if len(skel) >= SKEL_MIN else ""
                path = img.file_of(addr)
                prof = ""
                tags.add("size:" + ("tiny" if size <= 16 else "small" if size <= 64 else "medium" if size <= 256
                                    else "large" if size <= 1024 else "huge"))
                tags.add("mode:" + mode)
                tags.add("module:" + ("ov" if mod.startswith("ov") else mod))
                if path:
                    prof = img.profile(path)
                    tags.add("prof:" + prof.replace(" ", "_"))
                    got = c_of(path, name)
                    if got:
                        c, pre, whole = got
                        tags |= c_tags(c + "\n" + pre, tags)
                        tags.add(origin(path, whole))
                    else:
                        tags.add("src:asm" if path.endswith((".s", ".S")) else "src:unknown")
                    tags |= logged.get(name, set())
                    if name in won:
                        tags.add("tech:missdb-replay")
                rows.append((mod, name, addr, size, mode, 1 if path else 0, path or "", prof, shape, sk,
                             sorted(tags)))
    return game, rows, err


# ---------------------------------------------------------------- all games

def games_list(only: str | None) -> list[str]:
    want = set(only.split(",")) if only else None
    out = []
    for d in sorted(PROJETS.iterdir()):
        if d.name.startswith(("_", ".")) or not (d / "config").is_dir() or (want and d.name not in want):
            continue
        if any((p / "arm9" / "symbols.txt").exists() for p in (d / "config").iterdir() if p.is_dir()):
            out.append(d.name)
    return out


HINT_SKIP = ("tech:m2c-draft", "tech:for-loop", "tech:while-loop", "tech:do-while", "tech:narrow-cast",
             "tech:ternary", "tech:chain-order")  # describe the C, too common to be a hint for another function


def propagate(rows: list[dict], log=print):
    """Families, try: tags, feature -> technique table. rows: dicts with keys of the funcs table + tags (set)."""
    fams = collections.defaultdict(list)
    for i, r in enumerate(rows):
        if r["shape"]:
            fams["s-" + r["shape"]].append(i)
        if r["skel"]:
            fams["k-" + r["skel"]].append(i)
    fams = {k: v for k, v in fams.items() if len(v) >= 2}
    famrows, tries = [], collections.defaultdict(dict)  # tries[i][tag] = (score, why)

    def give(i, tag, score, why):
        old = tries[i].get(tag)
        if old is None or old[0] < score:
            tries[i][tag] = (score, why)

    for fam, members in fams.items():
        level = "shape" if fam[0] == "s" else "skel"
        weight = 1.0 if level == "shape" else 0.6
        matched = [i for i in members if rows[i]["matched"]]
        games = {rows[i]["game"] for i in members}
        techs = collections.Counter(t for i in matched for t in rows[i]["tags"]
                                    if t.startswith("tech:") and t not in HINT_SKIP)
        famrows.append((fam, level, len(members), len(matched), len(games),
                        rows[members[0]]["size"], json.dumps(techs.most_common(8)),
                        json.dumps([[rows[i]["game"], rows[i]["name"]] for i in (matched or members)[:6]])))
        for i in members:
            rows[i]["tags"].add("fam:" + fam)
        if not matched:
            continue
        ex = rows[matched[0]]
        for i in members:
            r = rows[i]
            if r["matched"]:
                continue
            if level == "shape":
                give(i, "try:siblings", 1.0, f"same shape matched: {ex['game']}/{ex['name']} ({len(matched)} matched)")
                same_game = [rows[j] for j in matched if rows[j]["game"] == r["game"]]
                if same_game:
                    give(i, "try:prof:" + same_game[0]["profile"].replace(" ", "_"), 0.9,
                         f"profile of {same_game[0]['name']} (same shape, same game)")
            for t, n in techs.items():
                give(i, "try:" + t[5:], weight * n / len(matched),
                     f"{level} family {fam}: {n}/{len(matched)} matched members used it (e.g. {ex['game']}/{ex['name']})")
    log(f"{len(fams)} families ({sum(1 for f in famrows if f[1] == 'shape')} shape), "
        f"{sum(1 for f in famrows if f[3])} with a matched member")

    # feature -> technique over every matched function of every game; the same code in 40 games (SDK) counts once
    n_feat, n_both = collections.Counter(), collections.Counter()
    n_tech = collections.Counter()
    seen, matched = set(), []
    for r in rows:
        key = r["shape"] or (r["game"], r["name"])
        if r["matched"] and key not in seen:
            seen.add(key)
            matched.append(r)
    for r in matched:
        feats = [t for t in r["tags"] if t.startswith("feat:")]
        techs = [t for t in r["tags"] if t.startswith("tech:") and t not in HINT_SKIP]
        n_tech.update(techs)
        n_feat.update(feats)
        n_both.update((f, t) for f in feats for t in techs)
    total = max(len(matched), 1)
    techfeat = []
    for (f, t), nb in n_both.items():
        p = nb / n_feat[f]
        lift = p / (n_tech[t] / total)
        techfeat.append((f, t, n_feat[f], nb, round(p, 3), round(lift, 2)))
    strong = [x for x in techfeat if x[3] >= 10 and x[4] >= 0.25 and x[5] >= 2.0]
    by_feat = collections.defaultdict(list)
    for f, t, _nf, nb, p, lift in strong:
        by_feat[f].append((t, p, lift, nb))
    for i, r in enumerate(rows):
        if r["matched"]:
            continue
        for f in r["tags"]:
            for t, p, lift, nb in by_feat.get(f, ()):
                give(i, "try:" + t[5:], round(0.4 * p, 3), f"{f}: {nb} matched functions with it used {t} "
                                                          f"({p:.0%}, x{lift} the usual rate)")
    whys = []
    for i, d in tries.items():
        best = sorted(d.items(), key=lambda kv: -kv[1][0])[:MAX_TRY]
        for tag, (score, why) in best:
            rows[i]["tags"].add(tag)
            whys.append((i, tag, round(score, 3), why))
    return famrows, techfeat, whys


def cmd_build(a):
    t0 = time.time()
    names = games_list(a.games)
    rows = []
    with ProcessPoolExecutor(a.jobs) as ex:
        futs = {ex.submit(index_game, g): g for g in names}
        for f in as_completed(futs):
            try:
                game, got, err = f.result()
            except Exception as e:  # noqa: BLE001
                print(f"{futs[f]}: FAILED {e!r}", flush=True)
                continue
            for (mod, name, addr, size, mode, matched, path, prof, shape, sk, tags) in got:
                rows.append(dict(game=game, module=mod, name=name, addr=addr, size=size, mode=mode, matched=matched,
                                 path=path, profile=prof, shape=shape, skel=sk, tags=set(tags)))
            print(f"{game}: {len(got)} functions ({sum(1 for r in got if r[5])} matched)"
                  + (f"  [{err[:160]}]" if err else ""), flush=True)
    print(f"{len(rows)} functions read in {time.time() - t0:.0f} s", flush=True)
    famrows, techfeat, whys = propagate(rows)
    tmp = DB.with_suffix(".tmp")
    tmp.unlink(missing_ok=True)
    con = sqlite3.connect(tmp)
    con.executescript(SCHEMA)
    con.executemany("INSERT INTO funcs VALUES (?,?,?,?,?,?,?,?,?,?,?,?,?)",
                    [(i, r["game"], r["module"], r["name"], r["addr"], r["size"], r["mode"], r["matched"], r["path"],
                      r["profile"], r["shape"], r["skel"], " " + " ".join(sorted(r["tags"])) + " ")
                     for i, r in enumerate(rows)])
    con.executemany("INSERT INTO why VALUES (?,?,?,?)", whys)
    con.executemany("INSERT INTO families VALUES (?,?,?,?,?,?,?,?)", famrows)
    con.executemany("INSERT INTO techfeat VALUES (?,?,?,?,?,?)", techfeat)
    cnt = collections.defaultdict(lambda: [0, 0, set()])
    for r in rows:
        for t in r["tags"]:
            if not t.startswith("fam:"):
                c = cnt[t]
                c[0] += 1
                c[1] += r["matched"]
                c[2].add(r["game"])
    con.executemany("INSERT INTO tagcount VALUES (?,?,?,?)", [(t, n, m, len(g)) for t, (n, m, g) in cnt.items()])
    con.executemany("INSERT INTO meta VALUES (?,?)", [("built", str(time.time())), ("games", json.dumps(names)),
                                                      ("seconds", str(round(time.time() - t0)))])
    con.commit()
    con.close()
    for _ in range(20):  # the Studio may be reading the old file: retry the swap
        try:
            os.replace(tmp, DB)
            break
        except PermissionError:
            time.sleep(0.5)
    else:
        raise SystemExit(f"could not replace {DB} (in use); new index left in {tmp}")
    print(f"-> {DB} ({len(rows)} functions, {len(whys)} hints, {time.time() - t0:.0f} s)")


# ---------------------------------------------------------------- queries (also used by the Studio)

def connect(path: Path = DB) -> sqlite3.Connection:
    if not path.exists():
        raise SystemExit(f"{path} does not exist: run `techtag.py build` first")
    return sqlite3.connect(f"file:{path.as_posix()}?mode=ro", uri=True, timeout=10)


def function(con, game: str, name: str) -> dict | None:
    r = con.execute("SELECT id, game, module, name, addr, size, mode, matched, path, profile, shape, skel, tags "
                    "FROM funcs WHERE game = ? AND name = ?", (game, name)).fetchone()
    if not r:
        return None
    keys = ("id", "game", "module", "name", "addr", "size", "mode", "matched", "path", "profile", "shape", "skel", "tags")
    d = dict(zip(keys, r))
    d["tags"] = d["tags"].split()
    d["hints"] = [dict(zip(("tag", "score", "why"), w)) for w in
                  con.execute("SELECT tag, score, why FROM why WHERE fid = ? ORDER BY score DESC", (d["id"],))]
    d["families"] = []
    for col, fam in (("shape", "s-"), ("skel", "k-")):
        if not d[col]:
            continue
        mem = con.execute(f"SELECT game, name, matched, size, path, tags FROM funcs WHERE {col} = ? "
                          "ORDER BY matched DESC, game LIMIT 60", (d[col],)).fetchall()
        if len(mem) < 2:
            continue
        d["families"].append({"fam": fam + d[col], "level": "shape" if col == "shape" else "skel", "members": [
            {"game": g, "name": n, "matched": m, "size": s, "path": p,
             "techs": [t for t in tg.split() if t.startswith(("tech:", "prof:"))]} for g, n, m, s, p, tg in mem]})
    return d


def find(con, tag: str, game: str = "", todo: bool = False, limit: int = 300) -> list[tuple]:
    q = "SELECT game, name, size, matched, module, mode FROM funcs WHERE tags LIKE ?"
    args = [f"% {tag} %"]
    if game:
        q += " AND game = ?"
        args.append(game)
    if todo:
        q += " AND matched = 0"
    return con.execute(q + " ORDER BY game, addr LIMIT ?", args + [limit]).fetchall()


def todo(con, game: str, tech: str = "", limit: int = 300) -> list[tuple]:
    """Unmatched functions of a game with their best hints, best first."""
    q = ("SELECT f.name, f.size, f.module, f.mode, w.tag, w.score, w.why FROM why w JOIN funcs f ON f.id = w.fid "
         "WHERE f.game = ?")
    args = [game]
    if tech:
        q += " AND w.tag = ?"
        args.append(tech if tech.startswith("try:") else "try:" + tech)
    return con.execute(q + " ORDER BY w.score DESC, f.size LIMIT ?", args + [limit]).fetchall()


def cmd_show(a):
    con = connect()
    d = function(con, a.game, a.name)
    if not d:
        raise SystemExit(f"{a.game}/{a.name}: not in the index")
    print(f"{d['game']}/{d['name']}  {d['module']} {d['mode']} {d['size']} B  "
          f"{'MATCHED ' + d['path'] + ' (' + d['profile'] + ')' if d['matched'] else 'unmatched'}")
    print("tags:", " ".join(d["tags"]))
    for h in d["hints"]:
        print(f"  {h['score']:.2f} {h['tag']:26s} {h['why']}")
    for f in d["families"]:
        print(f"--- {f['level']} family {f['fam']} ({len(f['members'])} shown)")
        for m in f["members"][:25]:
            print(f"  {'M' if m['matched'] else '.'} {m['game']:34s} {m['name']:32s} {m['size']:6d}  {' '.join(m['techs'])}")


def cmd_find(a):
    rows = find(connect(), a.tag, a.game, a.todo, a.limit)
    for g, n, s, m, mod, mode in rows:
        print(f"{'M' if m else '.'} {g:36s} {n:34s} {s:6d} {mod} {mode}")
    print(len(rows), "functions" + (" (limit reached)" if len(rows) == a.limit else ""))


def cmd_todo(a):
    for n, s, mod, mode, tag, score, why in todo(connect(), a.game, a.tech, a.limit):
        print(f"{score:.2f} {tag:24s} {n:32s} {s:6d} {mod:6s} {why}")


def cmd_stats(a):
    con = connect()
    meta = dict(con.execute("SELECT k, v FROM meta"))
    n, m = con.execute("SELECT COUNT(*), SUM(matched) FROM funcs").fetchone()
    print(f"{n} functions, {m} matched, built {time.strftime('%Y-%m-%d %H:%M', time.localtime(float(meta['built'])))}")
    for lvl in ("shape", "skel"):
        f, fm, cross = con.execute("SELECT COUNT(*), SUM(matched > 0), SUM(games > 1) FROM families WHERE level = ?",
                                   (lvl,)).fetchone()
        print(f"{lvl} families: {f} ({fm} with a matched member, {cross} across games)")
    print("--- tags")
    for t, n, mt, g in con.execute("SELECT tag, n, matched, games FROM tagcount WHERE tag NOT LIKE 'prof:%' "
                                   "ORDER BY tag LIKE 'try:%', n DESC"):
        print(f"  {t:30s} {n:8d} functions  {mt:7d} matched  {g:3d} games")
    print("--- feature -> technique (matched functions, lift >= 2)")
    for f, t, nf, nb, p, lift in con.execute("SELECT * FROM techfeat WHERE n_both >= 10 AND lift >= 2 "
                                             "ORDER BY lift DESC LIMIT 40"):
        print(f"  {f:20s} -> {t:24s} {nb:6d}/{nf:<6d} {p:.0%}  x{lift}")


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    sp = ap.add_subparsers(dest="cmd", required=True)
    p = sp.add_parser("build")
    p.add_argument("--games")
    p.add_argument("--jobs", type=int, default=max(2, (os.cpu_count() or 4) // 2))
    p = sp.add_parser("show")
    p.add_argument("game")
    p.add_argument("name")
    p = sp.add_parser("find")
    p.add_argument("tag")
    p.add_argument("--game", default="")
    p.add_argument("--todo", action="store_true")
    p.add_argument("--limit", type=int, default=300)
    p = sp.add_parser("todo")
    p.add_argument("game")
    p.add_argument("--tech", default="")
    p.add_argument("--limit", type=int, default=100)
    sp.add_parser("stats")
    a = ap.parse_args()
    {"build": cmd_build, "show": cmd_show, "find": cmd_find, "todo": cmd_todo, "stats": cmd_stats}[a.cmd](a)


if __name__ == "__main__":
    main()
