/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0203e670 from projets/battle-of-giants-dinosaurs/src/auto/func_0203e670.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
// clang-format off
#pragma cplusplus off
#pragma ipa file
asm void func_0206d670(register const void *src, register volatile void *fifo) {
    ldmia   r0!, {r2, r3, r12}
    stmia   r1, {r2, r3, r12}
    ldmia   r0!, {r2, r3, r12}
    stmia   r1, {r2, r3, r12}
    ldmia   r0!, {r2, r3, r12}
    stmia   r1, {r2, r3, r12}
    ldmia   r0!, {r2, r3, r12}
    stmia   r1, {r2, r3, r12}
    bx      lr
}
// clang-format on
