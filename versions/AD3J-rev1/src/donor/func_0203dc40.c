/* compiler: 2.0/sp1p5  */
/* func_0203dc40 from projets/nintendogs-chihuahua-friends/src/auto/func_0203dc40.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
// clang-format off
asm void func_0203dc40(void) {
    cmp r1, #0x0
    bxlt lr
    cmp r1, #0x14
    bxge lr
    add r3, r0, #0xc5
    mov r2, #0x1
    swpb r2, r2, [r3]
    add r2, r0, #0x100
    strh r1, [r0, #0xf8]
    mov r0, #0xb4
    strh r0, [r2, #0x26]
    mov r0, #0x0
    strh r0, [r2, #0x2c]
    bx lr
}
// clang-format on
