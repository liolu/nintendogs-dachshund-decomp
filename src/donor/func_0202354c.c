/* compiler: 2.0/sp1p5  */
/* func_0202354c from projets/nintendogs-chihuahua-friends/src/auto/func_0202354c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
// clang-format off
asm void func_0202354c(void) {
    add r2, r0, #0xc6
    mov r3, #0x0
    swpb r1, r3, [r2]
    add r2, r0, #0xc7
    strh r3, [r0, #0xf2]
    swpb r1, r3, [r2]
    add r0, r0, #0x100
    strh r3, [r0, #0x24]
    bx lr
}
// clang-format on
