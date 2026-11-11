/* compiler: 2.0/sp1p5  */
/* func_02027f08 from projets/nintendogs-chihuahua-friends/src/auto/func_02027f08.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
// clang-format off
asm void func_02027f08(void) {
    add ip, r0, #0x8b
    mov r3, #0x1
    swpb r3, r3, [ip]
    cmp r2, #0x0
    ldr r3, =0x2710
    movlt r2, #0x0
    cmp r2, r3
    movgt r2, r3
    ldr r3, [r0, #0x9e4]
    mov r0, r1, lsl #0x10
    add r0, r3, r0, asr #0xf
    strh r2, [r0, #0x18]
    bx lr
}
// clang-format on
