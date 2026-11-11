"""Fake matches: code that gets the target's bytes without being C that compiles to them.

    from fakematch import fake_match
    why = fake_match(candidate, starting_file)   # None when the candidate is plain C

Inline assembly, preprocessor tricks, sections, machine code written as numbers, or preprocessor lines the starting
file did not have. Everything is counted against the starting file, so what it already had (an asm function written
by auto_match for instructions no compiler emits, the file's own #include lines) stays allowed. Comments and strings
are ignored.

One exception, for `__sinit_*` functions only (C++ static initializers that the compiler itself places in `.init`,
with a pointer to them in `.ctor`): `#pragma define_section NAME ".init" ".init"` and
`#pragma define_section NAME ".ctor" ".ctor"` and `__declspec(NAME)` with those NAMEs are allowed, so the C version
lands in the same sections as the original (user decision 2026-10-29 for .ctor). No other section, and no other
function, gets it.

Second exception, for `BuildInfo` only (NitroSDK crt0 `_start_ModuleParams` + the `[SDK+...]` version string, data the
original build places inside `.text`): `#pragma define_section NAME ".text" ".text"` and `__declspec(NAME)` with that
NAME are allowed (user decision 2026-11-10).
"""
import re

_STRIP = re.compile(r'//[^\n]*|/\*.*?\*/|"(?:\\.|[^"\\\n])*"|\'(?:\\.|[^\'\\\n])*\'', re.S)
FAKE = [
    (re.compile(r"\b(?:__)?asm(?:__)?\b"), "inline assembly (asm)"),
    (re.compile(r"##|\b_Pragma\b"), "preprocessor tricks (## or _Pragma)"),
    (re.compile(r"\b__declspec\b|\b__attribute__\b"), "__declspec/__attribute__ (sections, naked functions)"),
    (re.compile(r"\.(?:incbin|section|word|byte|long)\b"), "assembler directives"),
]
OPCODE = re.compile(r"\b0x[eE][0-9a-fA-F]{7}\b")  # an ARM instruction (condition AL) written as a number


def _directives(code: str) -> list[str]:
    return [re.sub(r"\s+", " ", l.strip()) for l in code.split("\n") if l.lstrip().startswith("#")]


# .init holds the __sinit_ function, .ctor the pointer to it that the C++ compiler emits in the same file
INIT_SECTION = re.compile(r'^[ \t]*#[ \t]*pragma[ \t]+define_section[ \t]+(\w+)[ \t]+"\.(?:init|ctor)"[ \t]+"\.(?:init|ctor)"(?:[ \t]+RW)?[ \t]*\r?$',
                          re.M)


# BuildInfo: crt0 module params + SDK version string, data the original build places inside .text
TEXT_SECTION = re.compile(r'^[ \t]*#[ \t]*pragma[ \t]+define_section[ \t]+(\w+)[ \t]+"\.text"[ \t]+"\.text"(?:[ \t]+RW)?[ \t]*\r?$',
                          re.M)
TEXT_DATA_NAMES = ("BuildInfo",)


def _allow_sinit(code: str, section: re.Pattern = INIT_SECTION) -> str:
    """Remove the allowed section declarations and their __declspec uses (__sinit_ functions: .init/.ctor;
    BuildInfo: .text)."""
    code = re.sub(r"\\\r?\n[ \t]*", " ", code)  # clang-format splits the long #pragma line with a continuation
    for sec in section.findall(code):
        code = re.sub(r"\b__declspec\s*\(\s*" + re.escape(sec) + r"\s*\)", " ", code)
    return section.sub("", code)


def fake_match(code: str, base: str | None, name: str | None = None) -> str | None:
    """Why `code` would be a fake match, or None when it is plain C (compared with the starting file `base`).
    `name` = the function being matched: a `__sinit_*` may declare the .init section (see module doc)."""
    if name and name.startswith("__sinit_"):
        code = _allow_sinit(code)
    elif name in TEXT_DATA_NAMES:
        code = _allow_sinit(code, TEXT_SECTION)
    c, b = _STRIP.sub(" ", code), _STRIP.sub(" ", base or "")
    for pattern, why in FAKE:
        if len(pattern.findall(c)) > len(pattern.findall(b)):
            return why
    if len(OPCODE.findall(c)) - len(OPCODE.findall(b)) >= 3:
        return "machine code written as numbers"
    known = list(_directives(b))
    for d in _directives(c):
        if d in known:
            known.remove(d)
        else:
            return f"new preprocessor line `{d[:60]}`"
    return None
