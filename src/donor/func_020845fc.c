/* compiler: 2.0/sp1p5  */
/* func_020845fc from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020845fc.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
// clang-format off
asm void func_020845fc(void) {
    mov r0, #0x1
    b L_0208460c
    mov r0, #0x0
    b L_0208460c
L_0208460c:
    mrc p15, 0, r1, c1, c0, 0
    and r2, r1, #0x1
    tst r0, r0
    biceq r1, r1, #0x1
    orrne r1, r1, #0x1
    mcr p15, 0, r1, c1, c0, 0
    mov r0, r2
    bx lr
}
// clang-format on
