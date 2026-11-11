"""Shared by `decomp ds/tools/donors.py` (indexes other public DS decomps) and `tools/donor_match.py` (uses them in
a game): ELF object reading, the code fingerprint, and the rewrite of a donor source file into a candidate.

The fingerprint must be computed the same way on a compiled object and on the game's ROM:
  - literal pool words (loaded by `ldr rX, [pc, #imm]`) are masked;
  - branches leaving the function (calls, tail calls) are masked, branches inside it are kept;
  - every other word is compared bit for bit (registers, immediates, conditions).
So two functions with the same fingerprint differ at most in what they call and which addresses they load.
"""
import hashlib
import re
import struct
from pathlib import Path

R_ARM_PC24, R_ARM_ABS32, R_ARM_CALL, R_ARM_JUMP24 = 1, 2, 28, 29


# ---------------------------------------------------------------- ELF objects

class Obj:
    """Minimal reader for mwccarm ELF objects: sections, symbols, REL relocations."""

    def __init__(self, path: Path):
        self.d = d = Path(path).read_bytes()
        shoff, = struct.unpack_from("<I", d, 0x20)
        shentsize, shnum, shstrndx = struct.unpack_from("<HHH", d, 0x2E)
        self.secs = [struct.unpack_from("<IIIIIIIIII", d, shoff + i * shentsize) for i in range(shnum)]
        names = self.secs[shstrndx]
        self.sec_names = [self._str(names[4], s[0]) for s in self.secs]
        self.syms = []
        for s in self.secs:
            if s[1] == 2:  # SHT_SYMTAB
                strtab = self.secs[s[6]][4]
                for i in range(s[5] // 16):
                    nm, val, size, info, _o, shndx = struct.unpack_from("<IIIBBH", d, s[4] + i * 16)
                    self.syms.append((self._str(strtab, nm), val, size, info, shndx))
        self.relocs = {}  # section index -> [(offset, type, symbol index, addend)]
        for s in self.secs:
            if s[1] == 4:  # SHT_RELA (what mwccarm emits)
                lst = self.relocs.setdefault(s[7], [])
                for i in range(s[5] // 12):
                    off, info, addend = struct.unpack_from("<IIi", d, s[4] + i * 12)
                    lst.append((off, info & 0xFF, info >> 8, addend))
            elif s[1] == 9:  # SHT_REL: addend in place
                lst = self.relocs.setdefault(s[7], [])
                for i in range(s[5] // 8):
                    off, info = struct.unpack_from("<II", d, s[4] + i * 8)
                    lst.append((off, info & 0xFF, info >> 8, None))

    def _str(self, base: int, off: int) -> str:
        return self.d[base + off: self.d.index(b"\0", base + off)].decode("latin-1")

    def section_bytes(self, idx: int) -> bytes:
        s = self.secs[idx]
        return b"" if s[1] == 8 else self.d[s[4]: s[4] + s[5]]  # SHT_NOBITS

    def functions(self):
        """Yields (name, section index, offset, size, is_thumb) for every sized function symbol."""
        thumb_ranges = {}
        for name, val, size, info, shndx in self.syms:
            if name.startswith("$t"):
                thumb_ranges.setdefault(shndx, []).append(val)
        for name, val, size, info, shndx in self.syms:
            if info & 0xF == 2 and size and 0 < shndx < len(self.secs):  # STT_FUNC
                thumb = bool(val & 1) or val in thumb_ranges.get(shndx, [])
                yield name, shndx, val & ~1, size, thumb

    def function_relocs(self, shndx: int, off: int, size: int) -> list[tuple[int, int, str, int]]:
        """[(offset in function, reloc type, symbol name, addend)] of one function. REL addends are read in place."""
        out = []
        code = self.section_bytes(shndx)
        for r_off, r_type, r_sym, addend in self.relocs.get(shndx, []):
            if off <= r_off < off + size:
                name, _v, _s, info, sym_shndx = self.syms[r_sym]
                if addend is None:
                    addend = struct.unpack_from("<i", code, r_off)[0] if r_type == R_ARM_ABS32 else 0
                if info & 0xF == 3:  # STT_SECTION: static data, named by the symbol at that offset
                    name, addend = self.symbol_at(sym_shndx, addend)
                out.append((r_off - off, r_type, name, addend))
        return sorted(out)

    def symbol_at(self, shndx: int, offset: int) -> tuple[str, int]:
        """(named symbol holding `offset` of a section, offset inside it), or ("", offset) for anonymous data
        such as string literals."""
        best = ("", offset)
        for name, val, size, info, sh in self.syms:
            if sh == shndx and name and not name.startswith(("$", "@", ".")) and info & 0xF in (0, 1, 2) \
                    and val <= offset < val + max(size, 1):
                best = (name, offset - val)
        return best

    def nonempty_sections(self) -> list[str]:
        """Names of allocated sections holding something (code or data)."""
        return [self.sec_names[i] for i, s in enumerate(self.secs) if s[2] & 2 and s[5] > 0]


# ---------------------------------------------------------------- fingerprint

def pool_words(words: tuple[int, ...]) -> set[int]:
    pool = set()
    for i, w in enumerate(words):
        if (w & 0x0F7F0000) == 0x051F0000:  # ldr rX, [pc, #imm]
            off = (w & 0xFFF) // 4
            pool.add(i + 2 + (off if w & 0x00800000 else -off))
    return pool


def fingerprint(code: bytes, external: set[int] | None = None) -> str | None:
    """Hash of an ARM function. `external`: word indexes known to be relocated (objects); for ROM code, branches
    whose target is outside the function are treated as external. None for code that is not a whole ARM function."""
    n = len(code) // 4
    if n < 3 or len(code) % 4:
        return None
    words = struct.unpack(f"<{n}I", code)
    pool = pool_words(words)
    toks = []
    for i, w in enumerate(words):
        if i in pool:
            toks.append("P")
            continue
        if (w & 0x0E000000) == 0x0A000000:  # b / bl / blx
            simm = w & 0xFFFFFF
            if simm & 0x800000:
                simm -= 1 << 24
            target = i + 2 + simm
            if (external and i in external) or (w >> 28) == 0xF or not 0 <= target < n:
                toks.append("%02xX" % (w >> 24))
                continue
        toks.append("%08x" % w)
    return hashlib.sha1(" ".join(toks).encode()).hexdigest()[:24]


def object_fingerprint(obj: Obj, shndx: int, off: int, size: int) -> tuple[str | None, list]:
    code = obj.section_bytes(shndx)[off: off + size]
    rel = obj.function_relocs(shndx, off, size)
    return fingerprint(code, {o // 4 for o, _t, _n, _s in rel}), rel


# ---------------------------------------------------------------- C source rewriting

_SKIP_RE = re.compile(r'"(?:\\.|[^"\\\n])*"|\'(?:\\.|[^\'\\\n])*\'')


def top_level_items(text: str) -> list[str]:
    """Splits a preprocessed C file into top-level items: declarations ending with ';', function definitions
    ending with their '}', and preprocessor lines (#pragma, #line)."""
    items, start, depth, i, n = [], 0, 0, 0, len(text)
    func_body = False
    while i < n:
        c = text[i]
        if c in "\"'":
            m = _SKIP_RE.match(text, i)
            i = m.end() if m else i + 1
            continue
        if c == "/" and text.startswith("//", i):
            j = text.find("\n", i)
            i = n if j < 0 else j
            continue
        if c == "/" and text.startswith("/*", i):
            j = text.find("*/", i + 2)
            i = n if j < 0 else j + 2
            continue
        if c == "#" and depth == 0 and text[start:i].strip() == "":
            j = text.find("\n", i)
            j = n if j < 0 else j
            items.append(text[i:j])
            i = start = j + 1
            continue
        if c in "([":
            depth += 1
        elif c in ")]":
            depth -= 1
        elif c == "{":
            if depth == 0:
                before = text[start:i].rstrip()
                func_body = before.endswith(")") and "=" not in _strip_parens(before)
            depth += 1
        elif c == "}":
            depth -= 1
            if depth == 0 and func_body:
                j = i + 1
                items.append(text[start:j])
                start = j
                func_body = False
        elif c == ";" and depth == 0:
            items.append(text[start:i + 1])
            start = i + 1
        i += 1
    if text[start:].strip():
        items.append(text[start:])
    return [it.strip() for it in items if it.strip()]


def _strip_parens(s: str) -> str:
    out, depth = [], 0
    for c in s:
        if c == "(":
            depth += 1
        elif c == ")":
            depth -= 1
        elif depth == 0:
            out.append(c)
    return "".join(out)


def function_name(item: str) -> str | None:
    """Name of the function defined by a top-level item, or None if it is not a function definition."""
    if not item.endswith("}"):
        return None
    brace = item.index("{")
    head = item[:brace].rstrip()
    if not head.endswith(")"):
        return None
    depth = 0
    for k in range(len(head) - 1, -1, -1):
        if head[k] == ")":
            depth += 1
        elif head[k] == "(":
            depth -= 1
            if depth == 0:
                m = re.search(r"(\w+)\s*$", head[:k])
                return m.group(1) if m else None
    return None


KEYWORDS = set("""auto break case char const continue default do double else enum extern float for goto if inline int
long register return short signed sizeof static struct switch typedef union unsigned void volatile while asm
__asm _Bool __attribute__ __declspec""".split())
_IDENT = re.compile(r"\b[A-Za-z_]\w*\b")


def _idents(s: str) -> set[str]:
    return {x for x in _IDENT.findall(_SKIP_RE.sub(" ", s)) if x not in KEYWORDS}


def _flat(s: str, opening: str, closing: str) -> str:
    """Removes everything between brackets (keeps the brackets)."""
    out, depth = [], 0
    for c in s:
        if c == opening:
            if depth == 0:
                out.append(c)
            depth += 1
        elif c == closing:
            depth -= 1
            if depth == 0:
                out.append(c)
        elif depth == 0:
            out.append(c)
    return "".join(out)


def declared_names(item: str) -> set[str]:
    """Names a top-level declaration introduces: function, variable, typedef, struct/union/enum tags, enum constants."""
    out = set()
    name = function_name(item)
    if name:
        return {name}
    out |= set(re.findall(r"\b(?:struct|union|enum)\s+(\w+)\s*\{", item))
    for body in re.findall(r"\benum\b[^{;]*\{([^{}]*)\}", item):
        out |= set(re.findall(r"(?:^|,)\s*(\w+)", body))
    s = _flat(item, "{", "}")
    s = re.sub(r"\b(?:struct|union|enum)\s+\w+", " ", s)
    flat = _flat(s, "(", ")")
    # function declaration `T name(...);` (its parameters may be function pointers)
    m = re.search(r"(\w+)\s*\(\)\s*;?\s*$", flat)
    if m and m.group(1) not in KEYWORDS and not re.match(r"\s*typedef\b", s):
        return out | {m.group(1)}
    # function pointer declarators: `(*Name)(...)`
    pointers = set(re.findall(r"\(\s*\*+\s*(?:const\s+)?(\w+)\s*\)", s))
    if pointers:
        return out | pointers
    s = flat
    # plain declarators: the identifier before `[`, `(`, `,`, `;`
    for m in re.finditer(r"(\w+)\s*(?=[\[,;(])", s):
        if m.group(1) not in KEYWORDS:
            out.add(m.group(1))
    return out


def prune(items: list[str], target_index: int) -> list[str]:
    """Keeps the items the target function needs (transitively), in their original order."""
    info = [(declared_names(it), _idents(it)) for it in items]
    needed = set(info[target_index][1])
    keep = {target_index}
    changed = True
    while changed:
        changed = False
        for i, (defs, refs) in enumerate(info):
            if i not in keep and defs & needed:
                keep.add(i)
                needed |= refs
                changed = True
    return [it for i, it in enumerate(items) if i in keep]


def candidate_source(pre: str, target: str, rename: dict[str, str], minimal: bool = True) -> str | None:
    """Turns a preprocessed donor file into a file that defines only `target` (renamed with `rename`): other
    function definitions become prototypes (inline ones are kept), data definitions become extern declarations.
    `minimal`: keep only the declarations the function needs (otherwise the whole file's declarations)."""
    out, found, pragmas = [], None, []
    for item in top_level_items(pre):
        if item.startswith("#"):
            if item.startswith("#pragma"):
                pragmas.append(item)
            continue
        name = function_name(item)
        if name is not None:
            head = item[:item.index("{")].rstrip()
            if name == target:
                if re.search(r"\binline\b", head):
                    return None
                out.append("\n".join(pragmas + [_drop_static(item)]))  # e.g. `#pragma thumb off` just before it
                found = len(out) - 1
            elif re.search(r"\binline\b", head):
                out.append(item)
            else:
                out.append(_drop_static(_drop_asm(head)) + ";")
        else:
            out.append(_declaration(item))
        pragmas = []
    if found is None:
        return None
    if minimal:
        out = prune(out, found)
    # clang-format (run by the game repos' CI) joins assembly lines: keep it away from asm code
    out = [f"// clang-format off\n{x}\n// clang-format on" if re.search(r"\basm\b", x) else x for x in out]
    text = "\n".join(x for x in out if x)
    if rename:
        pat = re.compile(r"\b(" + "|".join(re.escape(k) for k in sorted(rename, key=len, reverse=True)) + r")\b")
        text = _sub_code(text, pat, lambda m: rename[m.group(1)])
    return text + "\n"


def _sub_code(text: str, pat: re.Pattern, repl) -> str:
    """re.sub outside string and character literals."""
    out, last = [], 0
    for m in _SKIP_RE.finditer(text):
        out.append(pat.sub(repl, text[last:m.start()]))
        out.append(m.group(0))
        last = m.end()
    out.append(pat.sub(repl, text[last:]))
    return "".join(out)


def _drop_static(s: str) -> str:
    # only in the declaration specifiers, before the declarator's parameter list
    k = s.find("(")
    k = len(s) if k < 0 else k
    return re.sub(r"\bstatic\s+", "", s[:k]) + s[k:]


def _drop_asm(head: str) -> str:
    return re.sub(r"^\s*asm\s+", "", head)


def _declaration(item: str) -> str:
    """Keeps a declaration but makes sure it allocates nothing."""
    s = item.strip()
    if re.match(r"typedef\b", s):
        return s
    if re.fullmatch(r"(?:struct|union|enum)\s*\w*\s*\{.*\}\s*;", s, re.S) or re.fullmatch(
            r"(?:struct|union|enum)\s+\w+\s*;", s):
        return s
    # cut initializers at depth 0 (`int a[] = {..};`, `int x = 1, y = 2;`)
    out, depth, skipping = [], 0, False
    for c in s:
        if c in "({[":
            depth += 1
        elif c in ")}]":
            depth -= 1
        if depth == 0 and c == "=" and not skipping:
            skipping = True
            continue
        if skipping:
            if depth == 0 and c in ",;":
                skipping = False
                out.append(c)
            continue
        out.append(c)
    s = "".join(out)
    s = _drop_static(s)
    if not re.match(r"\s*extern\b", s):
        s = "extern " + s
    return s


# ---------------------------------------------------------------- C++ donors
# A C++ function cannot be renamed in its source (its object symbol is a mangled name such as Bar__3FooFi, built
# from its class and parameters): the candidate keeps the donor's names and the game symbol takes the mangled name
# instead (donor_match.runtime_calls). Here: find the definition a mangled name stands for and reduce the file to it.

def _itanium_skip_args(m: str, i: int) -> int:
    """Index after the template arguments `I...E` starting at m[i] (source names skipped by their length)."""
    depth = 0
    while i < len(m):
        c = m[i]
        if c.isdigit():
            ml = re.match(r"\d+", m[i:])
            i += ml.end() + int(ml.group())
            continue
        if c in "INXL":
            depth += 1
        elif c == "E":
            depth -= 1
            if depth == 0:
                return i + 1
        i += 1
    return i


def itanium_target(mangled: str) -> tuple[str, list[str]] | None:
    """(name, class/namespace path) of an Itanium mangled name (the ARM EABI one mwccarm uses):
    _ZN3Foo3BarEi -> ("Bar", ["Foo"]), _ZN3FooC2Ev -> ("Foo", ["Foo"]), _ZN3FooD1Ev -> ("~Foo", ["Foo"]),
    _ZN3FooaSERKS_ -> ("operator", ["Foo"]), _Z3fooi -> ("foo", []). None for what no source spells (thunks,
    vtables, std templates) and for the names this simple reader does not follow (substitutions in the prefix)."""
    if not mangled.startswith("_Z") or mangled.startswith(("_ZT", "_ZGV", "_ZNSt", "_ZSt", "_ZNKSt")):
        return None
    i, parts = 2, []
    nested = mangled[i:i + 1] == "N"
    if nested:
        i += 1
        while i < len(mangled) and mangled[i] in "rVKRO":
            i += 1
    while i < len(mangled):
        c = mangled[i]
        if c.isdigit():
            ml = re.match(r"\d+", mangled[i:])
            n = int(ml.group())
            parts.append(mangled[i + ml.end():i + ml.end() + n])
            i += ml.end() + n
        elif c == "C" and mangled[i + 1:i + 2] in "123" and parts:
            parts.append(parts[-1])
            i += 2
        elif c == "D" and mangled[i + 1:i + 2] in "012" and parts:
            parts.append("~" + parts[-1])
            i += 2
        elif c == "I":
            i = _itanium_skip_args(mangled, i)
        elif c.islower() and mangled[i + 1:i + 2].isalpha() and (nested or not parts):
            parts.append("operator")
            i += 2
        elif c == "S" and mangled[i + 1:i + 2] == "t" and not parts:
            parts.append("std")
            i += 2
        elif c == "S":
            return None
        else:
            break
        if not nested:
            if mangled[i:i + 1] == "I":
                i = _itanium_skip_args(mangled, i)
            break
        if mangled[i:i + 1] == "E":
            break
    if not parts:
        return None
    return parts[-1], parts[:-1]


def cw_target(mangled: str) -> tuple[str, list[str]]:
    """(name, class/namespace path) of a CodeWarrior mangled name: Bar__3FooFi -> ("Bar", ["Foo"]),
    __ct__Q23Foo3BarFv -> ("Bar", ["Foo", "Bar"]), __dt__3FooFv -> ("~Foo", ["Foo"]), operators -> ("operator",
    path), foo__Fi -> ("foo", []), an unmangled (extern "C") name -> (name, [])."""
    k = mangled.find("__", 2 if mangled.startswith("__") else 1)
    while k >= 0 and not re.match(r"[QFC1-9]", mangled[k + 2:k + 3]):
        k = mangled.find("__", k + 1)
    if k < 0:
        return mangled, []
    base, rest = mangled[:k], mangled[k + 2:]
    path = []
    m = re.match(r"Q(\d)_?", rest)
    count = int(m.group(1)) if m else (1 if rest[:1].isdigit() else 0)
    pos = m.end() if m else 0
    for _ in range(count):
        ml = re.match(r"\d+", rest[pos:])
        if not ml:
            break
        n = int(ml.group())
        pos += ml.end()
        path.append(re.sub(r"<.*", "", rest[pos:pos + n]))
        pos += n
    if base == "__ct" and path:
        base = path[-1]
    elif base == "__dt" and path:
        base = "~" + path[-1]
    elif base.startswith("__"):
        base = "operator"
    return base, path


_OPERATOR = re.compile(r"\boperator\s*(?:\(\s*\)|\[\s*\]|new\b|delete\b|[^\s(\w]+|[\w\s*&]+?(?=\s*\())")
_CTRL = {"if", "while", "for", "switch", "return", "sizeof", "__attribute__", "__declspec", "decltype", "throw",
         "alignof", "__alignof__", "asm", "__asm"}


def _cpp_is_function(head: str) -> bool:
    h = _OPERATOR.sub("operator", head)
    if "(" not in h or re.match(r"(?:template\s*<[^{]*?>\s*)?(?:typedef|using)\b", h):
        return False
    if re.match(r"(?:template\s*<[^{]*?>\s*)?(?:class|struct|union|enum)\s+[\w:]+\s*(?:final\s*)?(?::|$)", h):
        return False
    return "=" not in _strip_parens(h)


def _cpp_declarator(head: str) -> list[str] | None:
    """['Foo', 'Bar'] for `void Foo::Bar(int x) const`, ['Foo', 'Foo'] for `Foo::Foo() : a(0)`."""
    h = _OPERATOR.sub("operator", head)
    h = re.sub(r"^\s*template\s*<[^{]*?>\s*", "", h)
    for m in re.finditer(r"((?:\w+\s*(?:<[^<>()]*>)?\s*::\s*)*~?\s*\w+)\s*\(", h):
        parts = [re.sub(r"<.*", "", p).strip() for p in re.sub(r"\s+", "", m.group(1)).split("::")]
        if parts[-1] not in _CTRL and parts[-1] not in KEYWORDS:
            return parts
    return None


def cpp_items(text: str) -> list[tuple[str, str, str, list[str]]]:
    """Top-level items of a preprocessed C++ file: (kind, text, head, scope). kind: 'open' / 'close' (namespace and
    extern "C" blocks, kept as they are, their contents are top-level items too), 'func' (function definition, head
    = everything before its body), 'decl', '#' (preprocessor line). scope: the enclosing namespaces."""
    items, start, depth, i, n = [], 0, 0, 0, len(text)
    func_head, stack = None, []

    def scope():
        return [s for s in stack if s]

    while i < n:
        c = text[i]
        if c in "\"'":
            m = _SKIP_RE.match(text, i)
            i = m.end() if m else i + 1
            continue
        if c == "/" and text.startswith("//", i):
            j = text.find("\n", i)
            i = n if j < 0 else j
            continue
        if c == "/" and text.startswith("/*", i):
            j = text.find("*/", i + 2)
            i = n if j < 0 else j + 2
            continue
        if c == "#" and depth == 0 and text[start:i].strip() == "":
            j = text.find("\n", i)
            j = n if j < 0 else j
            items.append(("#", text[i:j].strip(), "", scope()))
            i = start = j + 1
            continue
        if c in "([":
            depth += 1
        elif c in ")]":
            depth -= 1
        elif c == "{":
            if depth == 0:
                head = text[start:i].strip()
                m = re.fullmatch(r"(?:inline\s+)?namespace(?:\s+(\w+))?", head)
                if m or re.fullmatch(r'extern\s*"C(?:\+\+)?"', head):
                    items.append(("open", head + " {", "", scope()))
                    stack.append((m.group(1) or "") if m else "")
                    i = start = i + 1
                    continue
                func_head = head if _cpp_is_function(head) else None
            depth += 1
        elif c == "}":
            if depth == 0 and stack:
                if text[start:i].strip():
                    items.append(("decl", text[start:i].strip(), "", scope()))
                stack.pop()
                items.append(("close", "}", "", scope()))
                i = start = i + 1
                continue
            depth -= 1
            if depth == 0 and func_head is not None:
                items.append(("func", text[start:i + 1].strip(), func_head, scope()))
                start = i + 1
                func_head = None
        elif c == ";" and depth == 0:
            if text[start:i].strip():
                items.append(("decl", text[start:i + 1].strip(), "", scope()))
            start = i + 1
        i += 1
    if text[start:].strip():
        items.append(("decl", text[start:].strip(), "", scope()))
    return items


def _cpp_declaration(item: str) -> str:
    """A declaration that allocates nothing: type definitions, templates, typedefs and constants stay as they are,
    static members defined out of their class go (the class declares them), variables become extern."""
    s = item.strip()
    if re.match(r"(?:template\b|typedef\b|using\b|friend\b|static_assert\b|(?:static\s+)?const(?:expr)?\b)", s):
        return s
    flat = _flat(s, "{", "}")
    if re.fullmatch(r"(?:class|struct|union|enum)(?:\s+class)?\s+[\w:]+\s*(?:final\s*)?(?::[^{;]*)?(?:\{\})?\s*;",
                    flat):
        return s
    if re.search(r"\w\s*::\s*~?\w+\s*(?:\[|=|;|\()", _flat(flat, "(", ")")):
        return ""
    return _declaration(s)


def _cpp_free_function(head: str) -> bool:
    """A function that may be declared again at namespace scope: not a member (no `::`), no initializer list."""
    parts = _cpp_declarator(head)
    return parts is not None and len(parts) == 1 and not re.search(r"\)\s*:", _OPERATOR.sub("operator", head))


def _cpp_declared(item: str) -> set[str]:
    out = declared_names(item)
    out |= set(re.findall(r"\b(?:class|struct|union|enum)\s+(\w+)\s*(?:final\s*)?(?::[^{;]*)?\{", item))
    out |= set(re.findall(r"\b(?:class|struct|union)\s+(\w+)\s*;", item))
    if "{" in item and item.rstrip().endswith("}"):
        parts = _cpp_declarator(item[:item.index("{")])
        if parts:
            out.add(parts[-1])
    return out


def _cpp_prune(parts: list[tuple[str, str]], target: int) -> str:
    """Keeps the parts the target needs (transitively, by identifier), the namespace blocks around them, and drops
    the blocks left empty."""
    info = [(_cpp_declared(t), _idents(t)) if k != "block" else (set(), set()) for k, t in parts]
    needed, keep = set(info[target][1]), {target}
    changed = True
    while changed:
        changed = False
        for i, (defs, refs) in enumerate(info):
            if i not in keep and parts[i][0] == "item" and defs & needed:
                keep.add(i)
                needed |= refs
                changed = True
    out = [t for i, (k, t) in enumerate(parts) if k == "block" or i in keep]
    text = "\n".join(out)
    while True:
        new = re.sub(r'(?:(?:inline\s+)?namespace(?:\s+\w+)?|extern\s*"C(?:\+\+)?")\s*\{\s*\}\n?', "", text)
        if new == text:
            return text
        text = new


def cpp_candidate_sources(pre: str, target: str, rename: dict[str, str]) -> list[str]:
    """Like candidate_source for a C++ file: one source per definition `target` may stand for (overloads share a
    name: the caller keeps the one whose object defines `target`), each first with only the declarations it needs,
    then with all of them. Other functions: free ones become prototypes, inline and template ones stay, members
    defined out of their class go (the class declares them)."""
    t = itanium_target(target) if target.startswith("_Z") else cw_target(target)
    if t is None:
        return []
    base, path = t
    items = cpp_items(pre)
    wanted = []
    for k, (kind, text, head, sc) in enumerate(items):
        if kind != "func" or re.search(r"\binline\b", head) or re.match(r"\s*template\b", head):
            continue
        parts = _cpp_declarator(head)
        if parts and sc + parts[:-1] == path and (parts[-1] == base or base == "operator"
                                                   and parts[-1] == "operator"):
            wanted.append(k)
    pat = re.compile(r"\b(" + "|".join(re.escape(k) for k in sorted(rename, key=len, reverse=True)) + r")\b") \
        if rename else None
    out = []
    for w in wanted[:4]:
        parts, pragmas = [], []
        for k, (kind, text, head, sc) in enumerate(items):
            if kind == "#":
                if text.startswith("#pragma"):
                    pragmas.append(text)
                continue
            if kind in ("open", "close"):
                parts.append(("block", text))
            elif k == w:
                parts.append(("target", "\n".join(pragmas + [_drop_static(text)])))
            elif kind == "func":
                if re.search(r"\binline\b", head) or re.match(r"\s*template\b", head):
                    parts.append(("item", text))
                elif _cpp_free_function(head):
                    parts.append(("item", _drop_static(_drop_asm(head)) + ";"))
            else:
                parts.append(("item", _cpp_declaration(text)))
            pragmas = []
        # #line directives inside class bodies (the splitter keeps them): noise in the game's source
        parts = [(k, re.sub(r"^\s*#line\b.*\n?", "", t, flags=re.M)) for k, t in parts if t]
        found = next(i for i, (k, _t) in enumerate(parts) if k == "target")
        # clang-format (run by the game repos' CI) joins assembly lines: keep it away from asm code
        parts = [(k, f"// clang-format off\n{x}\n// clang-format on" if re.search(r"\basm\b", x) else x)
                 for k, x in parts]
        for src in (_cpp_prune(parts, found), "\n".join(t for _k, t in parts)):
            if pat:
                src = _sub_code(src, pat, lambda m: rename[m.group(1)])
            out.append(src + "\n")
    return out
