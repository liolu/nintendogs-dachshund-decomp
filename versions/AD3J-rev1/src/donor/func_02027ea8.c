/* compiler: 2.0/sp1p5  */
/* func_02027ea8 from projets/nintendogs-chihuahua-friends/src/auto/func_02027ea8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
// clang-format off
asm void func_02027ea8(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldr ip, [r0, #0x9e4]
    mov r3, r1, lsl #0x10
    add r3, ip, r3, asr #0xf
    ldrsh lr, [r3, #0x18]
    add r3, r0, #0x8b
    mov ip, #0x1
    add r2, r2, lr
    mov r2, r2, lsl #0x10
    movs lr, r2, asr #0x10
    swpb r2, ip, [r3]
    movmi lr, #0x0
    ldr r2, =0x2710
    cmp lr, r2
    movgt lr, r2
    ldr r2, [r0, #0x9e4]
    mov r0, r1, lsl #0x10
    add r0, r2, r0, asr #0xf
    strh lr, [r0, #0x18]
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
