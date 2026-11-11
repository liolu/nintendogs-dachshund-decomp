/* compiler: 2.0/sp1p5  */
/* func_0203e840 from projets/nintendogs-chihuahua-friends/src/auto/func_0203e840.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
// clang-format off
asm void func_0203e840(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    add r2, r0, #0x8b
    mov lr, #0x1
    swpb r1, lr, [r2]
    ldr ip, =0x1388
    ldr r1, [r0, #0x9e4]
    mov r3, #0x7d0
    strh ip, [r1, #0x18]
    swpb r1, lr, [r2]
    ldr r1, [r0, #0x9e4]
    strh r3, [r1, #0x1c]
    ldr r1, [r0, #0x9e4]
    ldrsh r1, [r1, #0x1e]
    add r1, r1, #0xc8
    mov r1, r1, lsl #0x10
    movs r3, r1, asr #0x10
    swpb r1, lr, [r2]
    movmi r3, #0x0
    ldr r1, =0x2710
    add r2, r0, #0x8b
    cmp r3, r1
    movgt r3, r1
    ldr r1, [r0, #0x9e4]
    ldr lr, =0x2710
    strh r3, [r1, #0x1e]
    ldr r1, [r0, #0x9e4]
    mov r3, #0x1
    ldrsh r1, [r1, #0x20]
    add r1, r1, #0xc8
    mov r1, r1, lsl #0x10
    movs ip, r1, asr #0x10
    swpb r1, r3, [r2]
    movmi ip, #0x0
    ldr r1, =0x2710
    add r3, r0, #0x8b
    cmp ip, r1
    movgt ip, r1
    ldr r1, [r0, #0x9e4]
    strh ip, [r1, #0x20]
    mov r1, #0x1
    swpb r2, r1, [r3]
    mov ip, #0x0
    ldr r2, [r0, #0x9e4]
    strh lr, [r2, #0x1a]
    swpb r2, r1, [r3]
    ldr r2, [r0, #0x9e4]
    strh ip, [r2, #0x22]
    swpb r2, r1, [r3]
    ldr r2, [r0, #0x9e4]
    strh ip, [r2, #0x24]
    ldr r2, [r0, #0x9e4]
    ldrsh r2, [r2, #0x26]
    swpb r1, r1, [r3]
    sub r2, r2, #0x1f4
    mov r2, r2, lsl #0x10
    movs r2, r2, asr #0x10
    ldr r1, =0x2710
    movmi r2, ip
    cmp r2, r1
    ldr r0, [r0, #0x9e4]
    movgt r2, r1
    strh r2, [r0, #0x26]
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
