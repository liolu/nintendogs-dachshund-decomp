#!/usr/bin/env python3
"""nearfix.py - extra mechanical repairs for near-miss functions (hunt queue).

hunt.py's `try`/`sweep` battery already tried declaration order, signedness, statement swaps,
comparison operand swaps on simple operands, ... A lot of the remaining 1-2 instruction diffs are
element-size scaling (`ldr r0, [r4, r5, lsl #2]` vs `lsl #4`) or an operand order on a complex
expression (a call or M2C_FIELD as an operand). This tool re-runs a battery restricted to those
extra rewrites, on the functions of the hunt queue, using the profile the queue already found.

    python tools/nearfix.py --list 80                 # candidates only
    python tools/nearfix.py --n 80 --apply            # judge, keep matches in build/nearfix/matched
    python tools/nearfix.py --names a b --apply
    python tools/nearfix.py --submit                  # then `workbench.py submit-many build/nearfix/matched`

Nothing is written to src/ here: matches -> build/nearfix/matched/NAME.c + results.json, to be
submitted with `python tools/workbench.py submit-many build/nearfix/matched`.
"""
import argparse
import json
import re
import sys
import time
from multiprocessing import Pool
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from project import ROOT  # noqa: E402  (the game: DSD_PROJECT or the current folder)
sys.path.insert(0, str(Path(__file__).resolve().parent))
import hunt as H  # noqa: E402

OUT = ROOT / "build" / "nearfix" / "matched"
CACHE = ROOT / "build" / "nearfix" / "candidates.json"


# ---------------------------------------------------------------- extra mutations
def _depth_arr(line):
    d, arr = 0, []
    for ch in line:
        if ch in "([{":
            d += 1
        elif ch in ")]}":
            d -= 1
        arr.append(d)
    return arr


def _left_operand(line, i):
    """start index of the expression ending just before line[i], or None."""
    j = i - 1
    while j >= 0 and line[j] in " \t":
        j -= 1
    while j >= 0:
        c = line[j]
        if c in ")]}":
            d, k = 0, j
            while k >= 0:
                if line[k] in ")]}":
                    d += 1
                elif line[k] in "([{":
                    d -= 1
                    if d == 0:
                        break
                k -= 1
            if k < 0:
                return None
            # skip the whole bracketed group as part of the operand, keep scanning
            j = k - 1
            while j >= 0 and line[j] in " \t":
                j -= 1
            if j >= 0 and (line[j].isalnum() or line[j] in "_."):
                continue  # a call: name(...)
            start = k
            break
        if c in ",;{}=<>!?:":
            start = j + 1
            break
        j -= 1
    else:
        start = 0
    while start < i and line[start] in " \t":
        start += 1
    return start if start < i else None


def _right_operand(line, i):
    """end index (exclusive) of the expression starting just after line[i], or None."""
    j = i + 1
    while j < len(line) and line[j] in " \t":
        j += 1
    start = j
    while j < len(line):
        c = line[j]
        if c in "([{":
            d, k = 0, j
            while k < len(line):
                if line[k] in "([{":
                    d += 1
                elif line[k] in ")]}":
                    d -= 1
                    if d == 0:
                        break
                k += 1
            if k >= len(line):
                return None
            j = k + 1
            while j < len(line) and line[j] in " \t":
                j += 1
            if j < len(line) and (line[j].isalnum() or line[j] in "_.["):
                continue
            return k + 1
        if c in ",;{}=<>!?:":
            return j
        j += 1
    return j if j > start else None


BINOPS = ("==", "!=", "|", "&", "^", "+")


def _swap_ops(line):
    """variants of one line with the two operands of a top-level binary operator swapped."""
    out = []
    arr = _depth_arr(line)
    i = 0
    while i < len(line):
        op = None
        for cand in ("==", "!=", "&&", "||", "|=", "&="):
            if line.startswith(cand, i):
                op = cand
                break
        if op in ("==", "!="):
            a, b = _left_operand(line, i), _right_operand(line, i + 2)
            if a is not None and b is not None:
                left, right = line[a:i].rstrip(), line[i + 2:b].lstrip()
                if left and right:
                    out.append(f"{line[:a]}{right} {op} {left}{line[b:]}")
            i += 2
            continue
        if op in ("&&", "||"):
            i += 2
            continue
        if line[i] in "|&^+" and not (i + 1 < len(line) and line[i + 1] == line[i]) \
                and not (i > 0 and line[i - 1] == line[i]):
            a, b = _left_operand(line, i), _right_operand(line, i + 1)
            if a is not None and b is not None:
                left, right = line[a:i].rstrip(), line[i + 1:b].lstrip()
                if left and right and len(left) < 90 and len(right) < 90:
                    out.append(f"{line[:a]}{right} {line[i]} {left}{line[b:]}")
        i += 1
    return out


SCALE = re.compile(r"(?<![\w.])(\w+) (\*|\+) \(?(\w+) \* (0x[0-9A-Fa-f]+|\d+)\)?")
IDX = re.compile(r"(\w+)\[(\w+) \* (0x[0-9A-Fa-f]+|\d+)\]")
REV = re.compile(r"(?<![\w.])(\w+) \+ \(?(\w+)\)?(?![\w(])")


def _scale_variants(src):
    out = []
    for m in list(SCALE.finditer(src))[:10]:
        pre, op, base, k = m.groups()
        kv = int(k, 0)
        repls = [f"{pre} + {base}"]
        if kv % 4 == 0:
            repls.append(f"{pre} + {base} * {kv // 4}")
        repls.append(f"{pre} + {base} * {kv * 4}")
        for r in repls:
            out.append(src[:m.start()] + r + src[m.end():])
    for m in list(IDX.finditer(src))[:10]:
        pre, idx, k = m.groups()
        kv = int(k, 0)
        repls = [f"{pre}[{idx}]"]
        if kv % 4 == 0:
            repls.append(f"{pre}[{idx} * {kv // 4}]")
        repls.append(f"{pre}[{idx} * {kv * 4}]")
        for r in repls:
            out.append(src[:m.start()] + r + src[m.end():])
    # `p + i` where the target wants an element scale of 4 (u32/s32 array)
    for m in list(REV.finditer(src))[:5]:
        pre, idx = m.groups()
        out.append(src[:m.start()] + f"{pre} + {idx} * 4" + src[m.end():])
    return out


STACK = re.compile(r"^(\s*)M2C_UNK (sp[0-9A-Fa-f]+);$", re.M)
STACK_MAX = 512


def _stack_variants(src):
    """m2c declares address-taken stack buffers as `M2C_UNK spN;` (4 bytes): try every frame size."""
    out = []
    for m in list(STACK.finditer(src))[:2]:
        v = m.group(2)
        if not re.search(r"&" + v + r"\b", src):
            continue
        for size in range(8, STACK_MAX + 1, 4):
            t = src[:m.start()] + f"{m.group(1)}u8 {v}[{size}];" + src[m.end():]
            t = re.sub(r"&" + v + r"\b", f"(void *){v}", t)
            out.append(t)
    return out


CONSTADD = re.compile(r"(?<![\w.])(\w+) \+ (0x[0-9A-Fa-f]+|\d+)\b")
CONSTIDX = re.compile(r"(\w+)\[(0x[0-9A-Fa-f]+|\d+)\]")


def _const_scale_variants(src):
    """`p + 0xC` on a typed pointer scales by the pointee: try the same byte/word offset."""
    out = []
    for m in list(CONSTADD.finditer(src))[:10]:
        pre, k = m.groups()
        kv = int(k, 0)
        for nv in (kv // 4, kv // 2, kv * 2, kv * 4):
            if nv and nv != kv:
                out.append(src[:m.start()] + f"{pre} + {nv}" + src[m.end():])
    for m in list(CONSTIDX.finditer(src))[:8]:
        pre, k = m.groups()
        kv = int(k, 0)
        for nv in (kv // 4, kv // 2, kv * 2, kv * 4):
            if nv and nv != kv:
                out.append(src[:m.start()] + f"{pre}[{nv}]" + src[m.end():])
    return out


PTR_LOCAL = re.compile(r"^(\s*)(M2C_UNK|s32|u32|s16|u16|void)( \*+)(\w+);$", re.M)


def _ptr_u8_variants(src):
    """a local typed `T *p` used with `p += K` scales K by sizeof(T); the target often adds K bytes -> u8*."""
    out = []
    for m in list(PTR_LOCAL.finditer(src))[:4]:
        v = m.group(4)
        if not re.search(rf"\b{v} \+= |\b{v} = .* [+-] ", src):
            continue
        t = src[:m.start()] + f"{m.group(1)}u8 *{v};" + src[m.end():]
        t = re.sub(rf"^(\s*{v} = )([^;]+);", r"\1(u8 *)(\2);", t, flags=re.M)
        t = re.sub(rf"^(\s*{v} = )\(u8 \*\)\(\(u8 \*\)\(([^;]+)\)\);", r"\1(u8 *)(\2);", t, flags=re.M)
        out.append(t)
    return out


def _stack_combo_variants(src):
    """several address-taken stack slots: try every frame size of each (the frame layout is a placement order)."""
    out = []
    ms = list(STACK.finditer(src))[:2]
    if not ms:
        return out
    sizes = (4, 8, 12, 16, 20, 24, 28, 32)
    if len(ms) == 1:
        return out
    for s0 in sizes:
        for s1 in sizes:
            t = src
            for m, s in zip(ms, (s0, s1)):
                t = re.sub(rf"^(\s*)M2C_UNK {re.escape(m.group(2))};$",
                           rf"\g<1>u8 {m.group(2)}[{s}];", t, count=1, flags=re.M)
            for m in ms:
                t = re.sub(r"&" + re.escape(m.group(2)) + r"\b", f"(void *){m.group(2)}", t)
            out.append(t)
    return out


PARENADD = re.compile(r"\) \+ (0x[0-9A-Fa-f]+|\d+)")


def _balanced(s, i):
    """index just after the ')' closing the '(' at s[i]."""
    d = 0
    for j in range(i, len(s)):
        d += {"(": 1, ")": -1}.get(s[j], 0)
        if d == 0:
            return j + 1
    return len(s)


FUNC_HEAD = re.compile(r"^([A-Za-z_]\w*(?:[ \t\*]+[A-Za-z_]\w*)*)\(([^)]*)\) \{$", re.M)
CALL = re.compile(r"\b([A-Za-z_]\w*)\s*\(")
NOTCALL = {"if", "for", "while", "switch", "sizeof", "return", "else"}


def _forward_arg_variants(src):
    """m2c drops parameters the function only forwards: try appending an extra param to a call."""
    m = FUNC_HEAD.search(src)
    if not m:
        return []
    params = [p.strip() for p in m.group(2).split(",") if p.strip()]
    if not params or params == ["void"] or len(params) > 3:
        return []
    n = len(params)
    pnames = {p.split()[-1].lstrip("*") for p in params}
    extra = f"arg{n}"
    if extra in pnames:
        return []
    out = []
    for ty in ("M2C_UNK", "s32"):
        sig = src[:m.start()] + f"{m.group(1)}({m.group(2)}, {ty} {extra}) {{" + src[m.end():]
        calls = []
        for mm in CALL.finditer(src, m.end()):
            if mm.group(1) in NOTCALL or mm.group(1) in pnames:
                continue
            end = _balanced(src, mm.end() - 1)
            if not src[mm.end():end - 1].strip():
                continue
            calls.append((mm.end() - 1, end - 1))
        for idx in range(min(len(calls), 4)):
            op, cl = calls[idx]
            out.append(sig[:op] + "(" + src[op + 1:cl] + f", {extra}" + sig[cl:])
        if len(calls) > 1:
            t = sig
            for op, cl in reversed(calls[:6]):
                t = t[:op] + "(" + t[op + 1:cl] + f", {extra}" + t[cl:]
            out.append(t)
    return out


def _tail_call_variants(src):
    """m2c drops the arguments a function forwards: append the definition's parameters to a call."""
    m = FUNC_HEAD.search(src)
    if not m:
        return []
    raw = [p.strip() for p in m.group(2).split(",") if p.strip()]
    if not raw or raw == ["void"] or len(raw) > 4:
        return []
    pnames = [p.split()[-1].lstrip("*") for p in raw]
    out = []
    calls = []
    for mm in CALL.finditer(src, m.end()):
        if mm.group(1) in NOTCALL or mm.group(1) in pnames:
            continue
        end = _balanced(src, mm.end() - 1)
        calls.append((mm.group(1), mm.end() - 1, end - 1))
    for callee, op, cl in calls[-3:]:
        if len(re.findall(rf"\b{re.escape(callee)}\s*\(", src)) > 2:  # definition/decl + this call
            continue
        for k in (len(pnames), min(2, len(pnames)), 1):
            args = ", ".join(pnames[:k])
            inner = src[op + 1:cl].strip()
            new = src[:op] + "(" + (inner + ", " if inner else "") + args + src[cl:]
            # widen the callee's prototype so the extra arguments are legal
            proto = ", ".join("M2C_UNK" for _ in range(k))
            new = re.sub(rf"^([^\n]*\b{re.escape(callee)}\s*)\([^)]*\)(;.*)$",
                         lambda mm: f"{mm.group(1)}({proto}){mm.group(2)}", new, count=1, flags=re.M)
            out.append(new)
    return out


FREEFIELD = re.compile(r"(M2C_FIELD\([^()]*\))\s*(?:!=|==)\s*0")


def _free3(src, temp):
    t = re.sub(r"OS_FreeToHeap\(M2C_UNK, M2C_UNK\)", "OS_FreeToHeap(M2C_UNK, M2C_UNK, M2C_UNK)", src)
    return re.sub(r"OS_FreeToHeap\(0, -1\)", f"OS_FreeToHeap(0, -1, {temp})", t)


def _free3_variants(src):
    """a 3rd argument to OS_FreeToHeap lands in r2: the target keeps the freed field there."""
    if "OS_FreeToHeap(" not in src:
        return []
    out = []
    temps = list(dict.fromkeys(re.findall(r"^\s*(temp_\w+) = M2C_FIELD\([^\n]*\);$", src, re.M)))
    for t in temps[:4]:
        out.append(_free3(src, t))
    m = FREEFIELD.search(src)
    if m:
        expr = m.group(1)
        line_start = src.rfind("\n", 0, m.start()) + 1
        indent = re.match(r"[ \t]*", src[line_start:]).group(0)
        decl = f"{indent}s32 temp_r2;\n{indent}temp_r2 = {expr};\n"
        cond_span = src[m.start():m.end()]
        newc = f"temp_r2 != 0"
        t = src[:m.start()] + newc + src[m.end():]
        out.append(_free3(t[:line_start] + decl + t[line_start:], "temp_r2"))
    return out


def _paren_add_variants(src):
    """`(...) + K` on a typed pointer: try K/4 and K*4."""
    out = []
    for m in list(PARENADD.finditer(src))[:10]:
        kv = int(m.group(1), 0)
        for nv in (kv // 4, kv * 4):
            if nv and nv != kv:
                out.append(src[:m.start()] + f") + {nv}" + src[m.end():])
    return out


def _ptr_step_variants(src):
    """`T *p; p += K;` scales K by sizeof(T); the target often advances K BYTES."""
    out = []
    for m in list(PTR_LOCAL.finditer(src))[:4]:
        ty, v = m.group(2), m.group(4)
        t = re.sub(rf"^(\s*){v} \+= (0x[0-9A-Fa-f]+|\d+);",
                   rf"\1{v} = ({ty} *)((u8 *){v} + \2);", src, flags=re.M)
        if t != src:
            out.append(t)
        t = re.sub(rf"^(\s*){v} (\+= |\+)= (0x[0-9A-Fa-f]+|\d+);",
                   rf"\1{v} = ({ty} *)((u8 *){v} + \3);", src, flags=re.M)
        if t != src and t not in out:
            out.append(t)
    return out


MULCONST = re.compile(r"\* (0x[0-9A-Fa-f]+|\d+)")


def _mul_scale_variants(src):
    """`base + i * K` on a typed pointer multiplies by the pointee again: try K/4 and K*4."""
    out = []
    for m in list(MULCONST.finditer(src))[:8]:
        k = m.group(1)
        kv = int(k, 0)
        for nv in (kv // 4, kv * 4):
            if nv and nv != kv:
                out.append(src[:m.start()] + f"* {nv}" + src[m.end():])
    return out


def _pad_variants(src):
    """extra parameters change the incoming registers (and the register the allocator has free)."""
    out = []
    m = re.search(r"^(\w[\w \*]*? \**\w+)\(([^)]*)\) \{", src, re.M)
    if not m:
        return out
    params = m.group(2).strip()
    if params in ("", "void"):
        return out
    ps = [p.strip() for p in params.split(",")]
    for extra in ("M2C_UNK hunt_pad", "s32 hunt_pad"):
        out.append(src[:m.start()] + f"{m.group(1)}({params}, {extra}) {{" + src[m.end():])
        out.append(src[:m.start()] + f"{m.group(1)}({extra}, {params}) {{" + src[m.end():])
    if len(ps) == 2:
        out.append(src[:m.start()] + f"{m.group(1)}({ps[1]}, {ps[0]}) {{" + src[m.end():])
    return out


CALLSTMT = re.compile(r"^([ \t]*)(?:(\w+) = )?(\w+)\(([^;]*)\);[ \t]*$", re.M)


def _widen_proto(src, callee, n):
    proto = ", ".join("M2C_UNK" for _ in range(n))
    return re.sub(rf"^([^\n]*\b{re.escape(callee)}\s*)\([^)]*\)(;.*)$",
                  lambda mm: f"{mm.group(1)}({proto}){mm.group(2)}", src, count=1, flags=re.M)


def _call_result_variants(src):
    """a call result kept in a register is often forwarded to the next call that m2c left without it."""
    if not FUNC_HEAD.search(src):
        return []
    calls = list(CALLSTMT.finditer(src))
    out = []
    for i in range(len(calls) - 1):
        m1, m2 = calls[i], calls[i + 1]
        var = m1.group(2)
        if m1.group(3) in NOTCALL or m2.group(3) in NOTCALL:
            continue
        if var:
            if len(re.findall(rf"\b{re.escape(var)}\b", src)) > 2:
                continue
            args = m2.group(4).strip()
            t = src[:m2.start(4)] + (args + ", " if args else "") + var + src[m2.end(4):]
            out.append(_widen_proto(t, m2.group(3), len(args.split(",")) + 1 if args else 1))
        else:
            op = m1.group(1)
            t = src[:m1.start(0)] + f"{op}hunt_t = {m1.group(3)}({m1.group(4)});" + src[m1.end(0):]
            # declare hunt_t after the opening brace of the function
            fm = re.search(r"^(%s\([^)]*\) \{\n)" % re.escape(m1.group(3)), t, re.M)
            if not fm:
                fm = re.search(r"^(\w[\w \*]*\b\w+\([^)]*\) \{\n)", t, re.M)
            if fm:
                t = t[:fm.end()] + "    s32 hunt_t;\n" + t[fm.end():]
            m2b = CALLSTMT.search(t, t.find(f"hunt_t = {m1.group(3)}(") + 1)
            if m2b:
                args = m2b.group(4).strip()
                t = t[:m2b.start(4)] + (args + ", " if args else "") + "hunt_t" + t[m2b.end(4):]
                t = _widen_proto(t, m2b.group(3), len(args.split(",")) + 1 if args else 1)
                out.append(t)
    return out[:6]


VCALL_A = re.compile(
    r"M2C_FIELD\(M2C_FIELD\((\w+), void \*\*, (0x[0-9A-Fa-f]+|\d+)\), "
    r"(M2C_UNK|s32|u32) \(\*\*\)\([^)]*\), (0x[0-9A-Fa-f]+|\d+)\)\(\)")
VCALL_C = re.compile(
    r"M2C_FIELD\(\*(\w+)\(\), (M2C_UNK|s32|u32) \(\*\*\)\([^)]*\), (0x[0-9A-Fa-f]+|\d+)\)\(\)")


def _vcall_arg_variants(src):
    """virtual calls: the object (or an adjusted sub-object) is passed as the first argument."""
    out = []
    for m in list(VCALL_A.finditer(src))[:4]:
        arg, off, ty, moff = m.groups()
        for this in (f"(void *)((u8 *){arg} + {off})", f"(M2C_UNK *)((u8 *){arg} + {off})"):
            out.append(src[:m.start()] + f"M2C_FIELD(M2C_FIELD({arg}, void **, {off}), "
                       f"{ty} (**)(void *), {moff})({this})" + src[m.end():])
    for m in list(VCALL_C.finditer(src))[:4]:
        getter, ty, moff = m.groups()
        # statement containing the call
        line_start = src.rfind("\n", 0, m.start()) + 1
        indent = re.match(r"[ \t]*", src[line_start:]).group(0)
        for pty in ("void **", "M2C_UNK *"):
            expr = (f"M2C_FIELD(*hunt_p, {ty} (**)(void **), {moff})(hunt_p)")
            t = src[:m.start()] + expr + src[m.end():]
            t = t[:line_start] + f"{indent}hunt_p = {getter}();\n" + t[line_start:]
            fm = re.search(r"^(\w[\w \*]*\b\w+\([^)]*\) \{\n)", t, re.M)
            if fm:
                t = t[:fm.end()] + f"    {pty} hunt_p;\n" + t[fm.end():]
                out.append(t)
    return out


def extra_mutations(src):
    out = []
    lines = src.split("\n")
    for line in lines:
        if not line.strip() or line.lstrip().startswith(("#", "//", "/*", "*")):
            continue
        for v in _swap_ops(line):
            out.append(src.replace(line, v, 1))
    out += _scale_variants(src)
    out += _const_scale_variants(src)
    out += _stack_combo_variants(src)
    out += _stack_variants(src)
    out += _ptr_u8_variants(src)
    out += _ptr_step_variants(src)
    out += _mul_scale_variants(src)
    out += _paren_add_variants(src)
    out += _free3_variants(src)
    out += _forward_arg_variants(src)
    out += _tail_call_variants(src)
    out += _call_result_variants(src)
    out += _vcall_arg_variants(src)
    out += _pad_variants(src)
    # dedupe, drop identity
    seen, uniq = {src}, []
    for s in out:
        if s not in seen and len(s) < 200000:
            seen.add(s)
            uniq.append(s)
    return uniq


# ---------------------------------------------------------------- judging
def _judge_one(job):
    return H._judge(job)


def run(names, pool, rounds, prof_limit, verbose, src_dir=None):
    led = H.load()
    src_dir = Path(src_dir) if src_dir else H.BEST
    fresh = {}
    if src_dir != H.BEST and (src_dir / "results.json").exists():
        fresh = json.loads((src_dir / "results.json").read_text(encoding="utf-8"))
    OUT.mkdir(parents=True, exist_ok=True)
    got = []
    t0 = time.time()
    for n, name in enumerate(names):
        p = src_dir / f"{name}.c"
        if not p.exists() or (OUT / f"{name}.c").exists():
            continue
        src = p.read_text(encoding="utf-8", errors="replace")
        e = fresh.get(name) or led.get(name, {})
        profs = []
        try:
            profs = pool.apply(H._profiles_job, (name,))
        except Exception:
            pass
        seed = e.get("profile")
        if seed:
            profs = [seed] + [x for x in profs if x != seed]
        profs = profs[:prof_limit] or ["2.0/sp1p5"]
        res = pool.map(_judge_one, [(name, src, pr) for pr in profs], chunksize=1)
        order = sorted(range(len(profs)), key=lambda i: H.score(res[i]))
        best, best_src = res[order[0]], src
        top = [profs[i] for i in order[:2] if res[i].get("status") in ("near", "size", "match")] or [profs[order[0]]]
        trail = [profs[order[0]]]
        for rnd in range(rounds):
            if best.get("match"):
                break
            muts = extra_mutations(best_src)
            if not muts:
                break
            jobs = [(name, s, pr) for s in muts for pr in top]
            rs = pool.map(_judge_one, jobs, chunksize=2)
            k = min(range(len(rs)), key=lambda i: H.score(rs[i]))
            if H.score(rs[k]) >= H.score(best):
                break
            best, best_src = rs[k], muts[k // len(top)]
            trail.append(f"extra{rnd + 1}")
        if best.get("match"):
            (OUT / f"{name}.c").write_text(best_src, encoding="utf-8", newline="\n")
            f = OUT / "results.json"
            try:
                rj = json.loads(f.read_text(encoding="utf-8"))
            except (OSError, ValueError):
                rj = {}
            rj[name] = {"status": "match", "match": True, "profile": best["profile"]}
            f.write_text(json.dumps(rj, indent=1), encoding="utf-8")
            got.append((name, best["profile"]))
            print(f"[{n + 1}/{len(names)} {time.time() - t0:.0f}s] MATCH {name} ({best['profile']})", flush=True)
        elif verbose:
            print(f"[{n + 1}/{len(names)} {time.time() - t0:.0f}s] {name} best "
                  f"{best.get('status')} {best.get('diffs')}", flush=True)
    print(f"{len(got)} matches -> {OUT}")
    for g in got:
        print(" ", g[0])
    return got


def candidates(maxscore, maxsize, limit, size_mode=False):
    led = H.load()
    have = H.matched_names() | {p.stem for p in OUT.glob("*.c")}
    sizes = H.unmatched_sizes()
    rows = []
    for name, e in led.items():
        if name in have or e.get("parked") or name not in sizes:
            continue
        if not (H.BEST / f"{name}.c").exists():
            continue
        st = e.get("status")
        if st == "near":
            if (e.get("best") or 999) > maxscore:
                continue
        elif st == "size":
            if not size_mode:
                continue
        else:
            continue
        if maxsize and sizes[name] > maxsize:
            continue
        rows.append((e.get("best") or 999, sizes[name], name, e.get("profile") or ""))
    rows.sort()
    return [r[2] for r in rows[:limit]]


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--n", type=int, default=40)
    ap.add_argument("--max-score", type=int, default=4)
    ap.add_argument("--max-size", type=int, default=0)
    ap.add_argument("-j", type=int, default=12)
    ap.add_argument("--rounds", type=int, default=3)
    ap.add_argument("--profiles", type=int, default=3)
    ap.add_argument("--names", nargs="*")
    ap.add_argument("--list", action="store_true")
    ap.add_argument("--verbose", action="store_true")
    ap.add_argument("--apply", action="store_true")
    ap.add_argument("--size", action="store_true", help="also try functions whose draft has the wrong size")
    ap.add_argument("--from", dest="from_dir", help="use the C files/results of this directory instead of build/hunt/best")
    ap.add_argument("--quick", action="store_true", help="cap the stack-slot sizes tried (4x faster)")
    a = ap.parse_args()
    global STACK_MAX
    if a.quick:
        STACK_MAX = 128
    if a.from_dir:
        r = json.loads((Path(a.from_dir) / "results.json").read_text(encoding="utf-8"))
        want = ("near", "size") if a.size else ("near",)
        rows = sorted((v.get("k", [1, 9999])[1] if v.get("status") == "near" else 300 + v.get("k", [1, 0])[1], n)
                      for n, v in r.items()
                      if v.get("status") in want and not v.get("match") and
                      (v.get("k", [1, 9999])[1] <= a.max_score if v.get("status") == "near"
                       else v.get("k", [1, 9999])[1] <= max(a.max_score * 4, 24)))
        names = a.names or [n for _, n in rows[: a.n]]
    else:
        names = a.names or candidates(a.max_score, a.max_size, a.n, size_mode=a.size)
    if a.list:
        print("\n".join(names))
        return
    if not a.apply:
        print(f"{len(names)} candidates (dry run, use --apply):")
        print("\n".join(names[:20]))
        return
    with Pool(a.j, initializer=H._init, initargs=(True,)) as pool:
        run(names, pool, a.rounds, a.profiles, a.verbose, src_dir=a.from_dir)


if __name__ == "__main__":
    main()
