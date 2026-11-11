/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0210e6f8 from https://github.com/sturmds/advance-wars-dual-strike-decomp src/sdk/os/func_0210e6f8.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
extern void func_020807b4(void);
extern void func_02080844(void);
// clang-format off
asm void func_020807a0(void)
{
    stmdb sp!, {lr}
    bl func_020807b4
    bl func_02080844
    ldmia sp!, {lr}
    bx lr
}
// clang-format on
