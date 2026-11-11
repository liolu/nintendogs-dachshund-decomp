/* compiler: 2.0/sp1p5  */
/* func_020290d8 from projets/nintendogs-chihuahua-friends/src/auto/func_020290d8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
// clang-format off
asm void func_020290d8(void) {
    add ip, r0, #0xbe
    mov r3, #0x1
    swpb r3, r3, [ip]
    add r3, r0, #0x100
    mov ip, #0x0
    strh ip, [r3, #0x20]
    strh r1, [r0, #0xf0]
    add r1, r0, #0xc4
    swpb r0, r2, [r1]
    bx lr
}
// clang-format on
