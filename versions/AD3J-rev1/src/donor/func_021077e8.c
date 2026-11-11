/* compiler: 2.0/sp1p5  */
/* func_020a7470 from projets/nintendogs-dachshund/src/auto/func_020a7470.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
// clang-format off
asm void func_021077e8(void) {
    ldrh r2, [r0, #0x20]
    add r1, r0, #0x1
    bic r2, r2, #0x1
    strh r2, [r0, #0x20]
    ldrb r0, [r0, #0x1]
    bic r0, r0, #0x1
    swpb r0, r0, [r1]
    bx lr
}
// clang-format on
