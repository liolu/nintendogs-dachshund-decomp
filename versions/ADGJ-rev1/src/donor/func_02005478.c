/* compiler: 2.0/sp1p5  */
/* func_02005478 from projets/nintendogs-chihuahua-friends/src/auto/func_02005478.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
// clang-format off
asm void func_02005478(void) {
    ldr r3, [r0, #0x74]
    add r3, r3, #0x2
    swpb r1, r1, [r3]
    ldr r0, [r0, #0x74]
    add r1, r0, #0x3
    swpb r0, r2, [r1]
    bx lr
}
// clang-format on
