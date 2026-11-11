"""scenefix.py SRC.c OUT.c - rewrite an m2c draft of a HoM scene-script state machine into plain C.

Shape (ov007..ov032 giants, e.g. func_ov028_020d0b80): two 28-byte struct copies from .data, then
`for (;;) switch (work->step)` where step = u16 bitfield at +0xD4 of data_ov000_02051548; m2c emits it as an
irregular switch (jump table `switch 2` relative to the lowest step, explicit `switch 1` cases, an else-branch
for the threshold value and a `switch 3` above it, then a tail at `loop_1`). We flatten it back into one
switch in address order, every body falls through, the last case owns the tail.
Prints why it gave up when the draft is not of that shape.
"""
import re
import sys

LAB = re.compile(r"^(\s*)(case (0x[0-9A-F]+|\d+)|default):\s*/\* switch (\d) \*/")
LAB0 = re.compile(r"^(\s*)(case (0x[0-9A-F]+|\d+)|default):\s*$")


def indent(s):
    return len(s) - len(s.lstrip())


def body(lines, i):
    """lines of the case starting at label line i (exclusive) up to the next label / closing line"""
    ind = indent(lines[i])
    out = []
    j = i + 1
    while j < len(lines):
        s = lines[j]
        if s.strip() and not re.match(r"block_\d+:$", s) and (indent(s) < ind or (indent(s) == ind and not s.strip().startswith("/*"))):
            break
        out.append(s)
        j += 1
    return out, j


def dedent(ls, to):
    ls = [s for s in ls if s.strip()]
    if not ls:
        return []
    m = min(indent(s) for s in ls)
    return [" " * to + s[m:] for s in ls]


def main(src, dst):
    t = open(src).read()
    if "loop_1:" not in t or "0xD4" not in t:
        sys.exit("not a scene draft")
    head, rest = t.split("\nvoid ", 1)
    sig, fbody = rest.split("{", 1)
    lines = fbody.split("\n")
    li = next(i for i, s in enumerate(lines) if s.strip() == "loop_1:")
    pre = lines[:li]
    decls = [s for s in pre if re.match(r"\s+\w[\w ]*\*? ?\w+(\[\w+\])?;$", s)]
    copies = re.findall(r"M2C_FIELD\(&(sp\w+), s32 \*, 0\) = \(s32\) M2C_FIELD\(&(data_\w+), s32 \*, 0\)", fbody)
    other_pre = [s for s in pre if s.strip() and s not in decls and "M2C_FIELD(" not in s and "saved_reg_" not in s
                 and not re.match(r"\s+temp_r\d+(_\d+)? = &", s)]
    # words per struct copy: count the copy stores between two `M2C_FIELD(&spX, s32 *, 0)` starts
    words, cur = {}, None
    for s in pre:
        m0 = re.search(r"M2C_FIELD\(&(sp\w+), s32 \*, 0\) =", s)
        if m0:
            cur = m0.group(1)
            words[cur] = 0
        if cur and re.search(r"= \(s32\) M2C_FIELD\(", s):
            words[cur] += 1
    base = re.search(r"= temp_r\d+(?:_\d+)? - (0x[0-9A-F]+);", fbody)
    if not base:
        return finish(head, sig, lines, li, pre, decls, copies, other_pre, words, generic(lines, li), dst)
    base = int(base.group(1), 16)
    thresh = re.search(r"if \(\(u32\) temp_r\d+(?:_\d+)? < (0x[0-9A-F]+)U\)", fbody)
    if not thresh:
        sys.exit("no threshold")
    thresh = int(thresh.group(1), 16)
    cases = {1: [], 2: [], 3: []}
    for i, s in enumerate(lines):
        m = LAB.match(s)
        if m and int(m.group(4)) in cases:
            b, _ = body(lines, i)
            cases[int(m.group(4))].append((m.group(2), b))
    # else block = the threshold value
    m = re.search(r"\n        \} else \{\n(block_\d+):\n(.*?)\n\s*goto (block_\d+);\n", fbody, re.S)
    if not m:
        sys.exit("no else block")
    elseb = m.group(2).split("\n")
    tops = {m.group(1) + ":", m.group(3) + ":", "goto %s;" % m.group(1), "goto %s;" % m.group(3)}
    # tail: after the outer if, up to the final goto loop_1
    end = max(i for i, s in enumerate(lines) if s.strip() == "goto loop_1;")
    k = end - 1
    while k > 0 and indent(lines[k]) == 4:
        k -= 1
    tail = [s for s in lines[k + 1:end] if s.strip() != "}"]
    items = []  # (value | None for default | list of values, body lines); stacked labels share a body
    meaningful = lambda b: any(x.strip() and not x.strip().startswith("/*") for x in b)
    stacks, pend = [], []
    for lab, b in cases[2]:
        pend.append(lab)
        if meaningful(b):
            stacks.append((pend, b))
            pend = []
    if pend:
        sys.exit("jump table: trailing empty labels")
    dstack = [st for st in stacks if "default" in st[0]]
    if len(dstack) != 1:
        sys.exit("no default init")
    items.append((None, dstack[0][1]))
    for labs, b in sorted((st for st in stacks if "default" not in st[0]),
                          key=lambda st: min(int(l.split()[1]) for l in st[0])):
        vals = [base + int(l.split()[1]) for l in labs]
        items.append((vals[0] if len(vals) == 1 else vals, b))
    for c, b in cases[1]:
        if c != "default":
            items.append((int(c.split()[1], 0), [s for s in b if s.strip() not in tops]))
    items.append((thresh, elseb))
    last = None
    for c, b in cases[3]:
        if [s.strip() for s in b if s.strip()] == ["break;"]:
            last = int(c.split()[1], 0)
            continue
        b = [s for s in b if s.strip() and s.strip() not in tops]
        if b and b[-1].strip() == "break;":
            b.pop()
        items.append((int(c.split()[1], 0), b))
    if last is None:
        sys.exit("no empty last case")
    items.append((last, tail + ["    break;"]))
    return finish(head, sig, lines, li, pre, decls, copies, other_pre, words, items, dst)


def init_src(copies):
    return [c[0] for c in copies]


def generic(lines, li):
    """successive sparse `switch (temp)` statements at the top level (no jump table): every label is a case; a
    `switch 3`-style case that is just `break;` owns the tail after the last switch"""
    end = max(i for i, s in enumerate(lines) if s.strip() == "goto loop_1;")
    region = lines[li + 1:end]
    items, cur, closers = [], None, []
    last_close = max((i for i, s in enumerate(region) if s.rstrip() == "    }"), default=None)
    if last_close is None:
        sys.exit("generic: no switch")
    for i, s in enumerate(region[:last_close + 1]):
        st = s.strip()
        if indent(s) == 4 and re.match(r"temp_r\d+(_\d+)? = (\(u16\) )?(M2C_FIELD\(data_ov000_02051548, s32 \*, 0xD4\)|temp_r\d+(_\d+)?);", st):
            continue
        if indent(s) == 4 and re.match(r"switch \(.*temp_r\d+\) \{", st):
            continue
        if s.rstrip() == "    }":
            continue
        m = LAB.match(s) or LAB0.match(s)
        if m and indent(s) == 4:
            cur = [None if m.group(2) == "default" else int(m.group(3), 0), []]
            items.append(cur)
            continue
        if cur is None:
            if st:
                sys.exit("generic: code before first label: " + st)
            continue
        cur[1].append(s)
    tail = [s for s in region[last_close + 1:] if s.strip()]
    if not items or items[0][0] is not None:
        sys.exit("generic: default is not first")
    empty = [it for it in items if [s.strip() for s in it[1] if s.strip()] == ["break;"]]
    if len(empty) != 1:
        sys.exit("generic: %d empty cases" % len(empty))
    for it in items:
        b = [s for s in it[1] if s.strip()]
        if it is empty[0]:
            it[1] = tail + ["    break;"]
        elif b and b[-1].strip() == "break;" and indent(b[-1]) == 8:
            # breaks out to the tail case: becomes a fallthrough when the tail case follows
            if any(s.strip() == "break;" for s in b[:-1]):
                sys.exit("generic: inner break to the tail")
            it[1] = b[:-1]
        else:
            it[1] = b
    return [tuple(it) for it in items]


def finish(head, sig, lines, li, pre, decls, copies, other_pre, words, items, dst):
    def falls_to(b):
        ss = [s.strip() for s in b if s.strip() and s.strip() != "/* fallthrough */"]
        m2 = re.match(r"func_\w+\((0x[0-9A-F]+|\d+)\);$", ss[-1]) if ss else None
        return int(m2.group(1), 0) if m2 else None
    # source order = address order: a body ending in `set_step(X)` falls through into case X
    order, rest = [items[0]], items[1:]
    while rest:
        x = falls_to(order[-1][1])
        nxt = next((it for it in rest if it[0] == x or (isinstance(it[0], list) and x in it[0])), rest[0])
        rest.remove(nxt)
        order.append(nxt)
    out = []
    for v, b in order:
        for vv in (v if isinstance(v, list) else [v]):
            out.append("        default:" if vv is None else "        case 0x%X:" % vv)
        out += dedent(b, 12)
    code = "\n".join(out)
    code = re.sub(r"\n(\s*)goto loop_1;", r"\n\1break;", code)
    # m2c spells a signed division as ((u32) x >> 31) + (x / N)
    code = re.sub(r"\(s32\) \(\(\(u32\) \((.+?)\) >> 0x1F\) \+ \(\(\1\) / (\w+)\)\)", r"((\1) / \2)", code)
    code = re.sub(r"\(\(\(u32\) \((.+?)\) >> 0x1F\) \+ \(\(\1\) / (\w+)\)\)", r"((\1) / \2)", code)
    # bitfields of the scene work
    W = "data_ov000_02051548"
    code = re.sub(r"M2C_FIELD\(%s, s32 \*, 0xD4\) = \(s32\) \(\(M2C_FIELD\(%s, s32 \*, 0xD4\) & ~0xFFFF\) \| (0x[0-9A-F]+|\d+)\);" % (W, W),
                  r"%s->step = \1;" % W, code)
    code = code.replace("((u32) (M2C_FIELD(%s, s32 *, 0xD0) << 0x1A) >> 0x1F)" % W, "%s->f5" % W)
    code = re.sub(r"M2C_FIELD\(%s, s32 \*, 0xD0\) = \(s32\) \(\(M2C_FIELD\(%s, s32 \*, 0xD0\) & ~0x1E000\) \| (0x[0-9A-F]+)\);" % (W, W),
                  lambda m: "%s->f13 = %d;" % (W, int(m.group(1), 16) >> 13), code)
    code = code.replace("M2C_FIELD(%s, s32 *, 0x760) = (s32) (M2C_FIELD(%s, s32 *, 0x760) & ~1);" % (W, W), "%s->b0 = 0;" % W)
    code = re.sub(r"M2C_FIELD\(%s, (s32|s16) \*, (0x[0-9A-F]+)\)" % W,
                  lambda m: "%s->%s" % (W, {"s32": "w", "s16": "h"}[m.group(1)] + "%X" % int(m.group(2), 16)), code)
    nargs = {m.group(1): (0 if m.group(2).strip() in ("", "void") else m.group(2).count(",") + 1)
             for m in re.finditer(r"(\w+)\(([^()]*)\);\s*/\* extern \*/", head)}

    def fixcall(m):
        args = [a.strip() for a in m.group(2).split(",")] if m.group(2).strip() else []
        n = nargs.get(m.group(1))
        if n and n >= 5 and len(args) == n - 1:
            args.insert(3, args[4] if n > 5 else args[3])
        return "%s(%s)" % (m.group(1), ", ".join(args))
    code = re.sub(r"\b(func_\w+)\(([^()]*)\)", fixcall, code)
    leftover = [s.strip() for s in code.split("\n") if "goto" in s or "M2C_FIELD(%s" % W in s or "0xD4" in s]
    fields = sorted(set(re.findall(r"->([wh])([0-9A-F]+)\b", code)), key=lambda x: int(x[1], 16))
    struct = ["typedef struct { s32 w[%d]; } Copy%d;" % (n, n) for n in sorted(set(words.values()))] + ["typedef struct {"]
    off = 0
    for kind, o in fields:
        o = int(o, 16)
        if o in (0xD0, 0xD4, 0x760) or o < off:
            continue
        if o > 0xD0 and off <= 0xD0:
            struct += ["    u8 pad%X[0x%X];" % (off, 0xD0 - off), "    u32 f0 : 5;", "    u32 f5 : 1;", "    u32 f6 : 7;",
                       "    u32 f13 : 4;", "    u32 f17 : 15;", "    u32 step : 16;", "    u32 stepHi : 16;"]
            off = 0xD8
        if o > off:
            struct.append("    u8 pad%X[0x%X];" % (off, o - off))
        struct.append("    %s %s%X;" % ("s32" if kind == "w" else "s16", kind, o))
        off = o + (4 if kind == "w" else 2)
    if off <= 0xD0:
        struct += ["    u8 pad%X[0x%X];" % (off, 0xD0 - off), "    u32 f0 : 5;", "    u32 f5 : 1;", "    u32 f6 : 7;",
                   "    u32 f13 : 4;", "    u32 f17 : 15;", "    u32 step : 16;", "    u32 stepHi : 16;"]
        off = 0xD8
    struct += ["    u8 pad%X[0x%X];" % (off, 0x760 - off), "    u32 b0 : 1;", "    u32 brest : 31;", "} SceneWork;"]
    head = re.sub(r"extern void \*%s;" % W, "\n".join(struct) + "\nextern SceneWork *%s;" % W, head)
    # every callee: s32 params, void result unless the draft used it as s32 (as in the hand match)
    def proto(m):
        n = 0 if m.group(3).strip() in ("", "void") else m.group(3).count(",") + 1
        return "%s %s(%s);" % ("s32" if m.group(1) == "s32" else "void", m.group(2), ", ".join(["s32"] * n) or "void")
    head = re.sub(r"^(M2C_UNK|s32|u32|void) (\w+)\(([^()]*)\);(?=\s*/\* extern)", proto, head, flags=re.M)
    for f in set(re.findall(r"(\w+)\(&sp\w+", code)):
        head = re.sub(r"(\b%s\()[^()]*\)" % f, lambda m: m.group(1) + "void *, void *)", head)
    for _, d in copies:
        head = re.sub(r"extern M2C_UNK %s;" % d, "extern Copy%d %s;" % (words[_], d), head)
    keep = []
    for s in decls:
        name = re.sub(r"\[\w+\]$", "", s.strip().rstrip(";").split()[-1].lstrip("*"))
        if name.startswith("sp") and any(name == c[0] for c in copies):
            keep.append("    Copy%d %s;" % (words[name], name))
        elif re.search(r"\b%s\b" % re.escape(name), code + "\n".join(other_pre)):
            keep.append(s)
    # stack arrays that m2c used without declaring (spXX[0]): size = distance to the next stack slot
    body_txt = code + "\n".join(other_pre)
    declared = {re.sub(r"\[\w+\]$", "", s.strip().rstrip(";").split()[-1].lstrip("*")) for s in decls}
    slots = sorted({int(n, 16) for n in re.findall(r"\bsp([0-9A-F]+)\b", body_txt + "".join(init_src(copies)))})
    for n in slots:
        name = "sp%X" % n
        if name in declared or any(name == c[0] for c in copies):
            continue
        nxt = min([o for o in slots if o > n] + [n + 0x10 * 4])
        ext = [int(x, 16) for x in re.findall(r"&%s\[0\], s32 \*, (0x[0-9A-F]+|\d+)\)" % name, body_txt)]
        size = max(nxt - n, (max(ext) + 4) if ext else 4)
        keep.append("    s32 %s[%d];" % (name, size // 4))
    init = ["    %s = %s;" % (s, d) for s, d in copies]
    fn ="void " + sig + "{\n" + "\n".join(keep) + "\n\n" + "\n".join(init) + "\n" + "\n".join(other_pre) + \
         "\n    for (;;) {\n        switch (%s->step) {\n" % W + code + "\n        }\n    }\n}\n"
    open(dst, "w").write(head + "\n" + fn)
    if leftover:
        print("LEFT:", *leftover[:12], sep="\n  ")


if __name__ == "__main__":
    main(sys.argv[1], sys.argv[2])
