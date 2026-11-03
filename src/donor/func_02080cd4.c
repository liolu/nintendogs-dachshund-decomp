/* compiler: 2.0/sp1p5  */
/* func_0203fc20 from projets/battle-of-giants-dinosaurs/src/auto/func_0203fc20.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
// clang-format off
asm void func_02080cd4(void) {
    mrc p15, 0, r0, c9, c1, 0
    ldr r1, =0xfffff000
    and r0, r0, r1
    bx lr
}
// clang-format on
