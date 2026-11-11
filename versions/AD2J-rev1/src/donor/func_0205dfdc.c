/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0200c8d4 from projets/children-of-mana/src/donor/func_0200c8d4.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
extern u32 *func_02063538(void);
// clang-format off
asm u32 func_0205dfdc(u32 clearMask, u32 xorBits)
{
    stmfd sp!, {r0, r1, r2, r12, lr}
    bl func_02063538
    mov r3, r0
    ldmfd sp!, {r0, r1, r2, r12, lr}
    ldr r2, [r3]
    bic r12, r2, r0
    eor r12, r12, r1
    str r12, [r3]
    mov r0, r2
    bx lr
}
// clang-format on
