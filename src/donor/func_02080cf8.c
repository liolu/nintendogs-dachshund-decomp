/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0203fc44 from projets/battle-of-giants-dinosaurs/src/auto/func_0203fc44.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
// clang-format off
#pragma cplusplus off
#pragma ipa file
asm void func_02080cf8(void) {
    mrc     p15, 0, r0, c1, c0, 0
    bic     r0, r0, #1
    mcr     p15, 0, r0, c1, c0, 0
    bx      lr
}
// clang-format on
