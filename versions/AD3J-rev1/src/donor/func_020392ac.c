/* compiler: 2.0/sp1p5  */
/* func_020392ac from projets/nintendogs-chihuahua-friends/src/auto/func_020392ac.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
// clang-format off
asm void func_020392ac(void) {
    ldrsh r3, [r0, #0xec]
    add r1, r0, #0x8a
    mvn r2, #0x0
    strh r3, [r0, #0xe8]
    swpb r0, r2, [r1]
    mov r0, #0x1
    bx lr
}
// clang-format on
