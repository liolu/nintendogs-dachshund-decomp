/* compiler: 2.0/sp1p5  */
/* func_02027db0 from projets/nintendogs-chihuahua-friends/src/auto/func_02027db0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
// clang-format off
asm void func_02027db0(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    add lr, r1, #0xe
    ldr r3, [r0, #0x9e4]
    mov r1, lr, lsl #0x10
    add r1, r3, r1, asr #0xf
    ldrsh r1, [r1, #0x18]
    add r3, r0, #0x8b
    mov ip, #0x1
    add r1, r2, r1
    mov r1, r1, lsl #0x10
    movs r2, r1, asr #0x10
    swpb r1, ip, [r3]
    movmi r2, #0x0
    ldr r1, =0x2710
    cmp r2, r1
    movgt r2, r1
    ldr r1, [r0, #0x9e4]
    mov r0, lr, lsl #0x10
    add r0, r1, r0, asr #0xf
    strh r2, [r0, #0x18]
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
