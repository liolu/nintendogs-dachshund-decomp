/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* FpStatus_Reset from https://github.com/sturmds/advance-wars-dual-strike-decomp src/sdk/msl/fp_status_reset.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
extern u32 *func_020638d0(void);
extern u8 *func_020638dc(void);
// clang-format off
asm void func_0205e340(void)
{
    stmfd sp!, {lr}
    bl func_020638d0
    mov r1, #0
    str r1, [r0]
    bl func_020638dc
    mov r1, #0
    str r1, [r0, #4]
    str r1, [r0, #8]
    str r1, [r0, #12]
    str r1, [r0, #16]
    str r1, [r0, #20]
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
