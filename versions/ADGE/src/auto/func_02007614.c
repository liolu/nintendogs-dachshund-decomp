#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0206a39c();
extern char func_020078e4[];
extern char func_02007c78[];
extern char func_02007d14[];
// clang-format off
asm void func_02007614(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x4
    mov r6, r0
    mov r0, #0x1
    strh r0, [r6, #0x0]
    strh r0, [r6, #0x4]
    mov r7, #0x0
    strh r7, [r6, #0x6]
    ldr r0, =func_020078e4
    strh r3, [r6, #0x8]
    str r0, [r6, #0xc]
    ldrh r0, [r6, #0xa]
    mov r5, r1
    mov r4, r2
    cmp r0, #0x0
    streq r7, [r6, #0x10]
    streq r7, [r6, #0x14]
    beq L_0200772c
    mov r2, r7
    mov ip, #0xff
L_02007664:
    add r0, r6, r7, lsl #0x1
    add r7, r7, #0x1
    strh r2, [r0, #0x24]
    add r0, r0, #0x100
    strh ip, [r0, #0xa4]
    cmp r7, #0xc0
    blt L_02007664
    strh r2, [r6, #0x20]
    mov r3, #0xc0
    ldr r7, =0x4001000
    strh r3, [r6, #0x22]
    ldr r0, [r7, #0x0]
    ldr r1, =0x4001048
    bic r0, r0, #0xe000
    orr r0, r0, #0x2000
    str r0, [r7, #0x0]
    ldrh r0, [r1, #0x0]
    ldr r10, =0x400104a
    ldr r8, =0x4001040
    bic r0, r0, #0x3f
    orr r0, r0, #0x8
    orr r0, r0, #0x20
    strh r0, [r1, #0x0]
    ldrh r0, [r1, #0x0]
    ldr r7, =0x4001044
    add r11, sp, #0x1
    bic r0, r0, #0x3f00
    orr r0, r0, #0x800
    orr r0, r0, #0x2000
    strh r0, [r1, #0x0]
    ldrh r9, [r10, #0x0]
    add lr, sp, #0x0
    ldr r0, =0x4001050
    bic r9, r9, #0x3f
    orr r9, r9, #0x17
    strh r9, [r10, #0x0]
    strh ip, [r8, #0x0]
    strh r3, [r7, #0x0]
    ldrb r1, [r1, #0x0]
    swpb r1, r1, [r11]
    ldrb r1, [sp, #0x1]
    swpb r1, r1, [lr]
    ldrb r1, [sp, #0x0]
    mov r1, r1, lsl #0x1b
    mov r1, r1, lsr #0x1b
    bl func_0206a39c
    ldr r1, =func_02007c78
    ldr r0, =func_02007d14
    str r1, [r6, #0x10]
    str r0, [r6, #0x14]
L_0200772c:
    mov r0, #0xff000
    str r0, [r6, #0x18]
    strh r5, [r6, #0x1c]
    strh r4, [r6, #0x1e]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
