#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8980();
extern void func_02009f28();
// clang-format off
asm void func_0202ba94(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x10
    mov r4, r0
    add r0, r4, #0x490
    add r3, sp, #0x0
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r2, [r4, #0x2a0]
    ldr r1, [sp, #0x0]
    mov r0, #0x0
    sub r1, r2, r1
    str r1, [r4, #0x260]
    str r0, [r4, #0x264]
    ldr r2, [r4, #0x2a8]
    ldr r1, [sp, #0x8]
    add r0, r4, #0x260
    sub r1, r2, r1
    str r1, [r4, #0x268]
    bl func_01ff8980
    ldr r1, [r4, #0x260]
    ldr r0, =0x668
    mov r1, r1, asr #0x3
    str r1, [r4, #0x260]
    str r0, [r4, #0x264]
    ldr r1, [r4, #0x268]
    add r0, r4, #0x260
    mov r2, r1, asr #0x3
    add r1, r4, #0x18c
    str r2, [r4, #0x268]
    bl func_02009f28
    cmp r0, #0x0
    beq L_0202bb6c
    ldr r1, [r4, #0x9e8]
    ldr r0, =0xfffff448
    ldrsh r3, [r1, #0x1c]
    add r1, r4, #0xd2
    mov r2, #0x1
    add r0, r3, r0
    mov r0, r0, lsl #0x10
    movs r3, r0, asr #0x10
    swpb r0, r2, [r1]
    movmi r3, #0x0
    ldr r0, =0x2710
    ldr r1, [r4, #0x9e8]
    cmp r3, r0
    movgt r3, r0
    mov r0, #0x410
    strh r3, [r1, #0x1c]
    strh r0, [r4, #0xea]
    mov r0, #0x0
    add sp, sp, #0x10
    strh r0, [r4, #0xfa]
    ldmfd sp!, {r4, lr}
    bx lr
L_0202bb6c:
    ldr r1, [r4, #0x9e8]
    ldr r0, =0xfffff448
    ldrsh r3, [r1, #0x1c]
    add r1, r4, #0xd2
    mov r2, #0x1
    add r0, r3, r0
    mov r0, r0, lsl #0x10
    movs r3, r0, asr #0x10
    swpb r0, r2, [r1]
    movmi r3, #0x0
    ldr r0, =0x2710
    ldr r1, [r4, #0x9e8]
    cmp r3, r0
    movgt r3, r0
    ldr r0, =0x411
    strh r3, [r1, #0x1c]
    strh r0, [r4, #0xea]
    mov r0, #0x0
    strh r0, [r4, #0xfa]
    add sp, sp, #0x10
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
