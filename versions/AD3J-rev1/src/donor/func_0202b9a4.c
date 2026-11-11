/* compiler: 2.0/sp1p5  */
/* func_0202b9a4 from projets/nintendogs-chihuahua-friends/src/auto/func_0202b9a4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
// clang-format off
asm void func_0202b9a4(void) {
    ldr r1, [r0, #0x9e4]
    add r2, r0, #0x8b
    ldrsh r1, [r1, #0x1c]
    mov r3, #0x1
    sub r1, r1, #0x3e8
    mov r1, r1, lsl #0x10
    movs ip, r1, asr #0x10
    swpb r1, r3, [r2]
    movmi ip, #0x0
    ldr r1, =0x2710
    ldr r2, [r0, #0x9e4]
    cmp ip, r1
    movgt ip, r1
    ldr r1, =0x409
    strh ip, [r2, #0x1c]
    strh r1, [r0, #0xe8]
    mov r1, #0x0
    strh r1, [r0, #0xfa]
    bx lr
}
// clang-format on
