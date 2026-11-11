/* compiler: 2.0/sp1p5  */
/* func_0202bd84 from projets/nintendogs-chihuahua-friends/src/auto/func_0202bd84.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
// clang-format off
asm void func_0202bd84(void) {
    add r2, r0, #0xac
    mov r3, #0x0
    swpb r1, r3, [r2]
    add r1, r0, #0x100
    strh r3, [r1, #0x8]
    mov r1, #0x1000
    str r1, [r0, #0x478]
    str r1, [r0, #0x474]
    bx lr
}
// clang-format on
