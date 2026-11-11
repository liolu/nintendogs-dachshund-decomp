#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0206a39c();
extern char func_02007a74[];
extern char func_02007c78[];
extern char func_02007d78[];
// clang-format off
asm void func_0200776c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x8
    mov r6, r0
    mov r0, #0x1
    strh r0, [r6, #0x0]
    strh r0, [r6, #0x4]
    mov r7, #0x0
    strh r7, [r6, #0x6]
    ldr r0, =func_02007a74
    strh r3, [r6, #0x8]
    str r0, [r6, #0xc]
    ldrh r0, [r6, #0xa]
    mov r5, r1
    mov r4, r2
    cmp r0, #0x0
    streq r7, [r6, #0x10]
    streq r7, [r6, #0x14]
    beq L_02007878
    ldr r1, =func_02007c78
    ldr r0, =func_02007d78
    str r1, [r6, #0x10]
    ldr r1, =0x4001000
    str r0, [r6, #0x14]
    ldr r0, [r1, #0x0]
    ldr r8, =0x400104a
    bic r0, r0, #0xe000
    orr r3, r0, #0x2000
    str r3, [r1, #0x0]
    ldr r0, =0x4001048
    mov r2, r5, lsl #0x8
    ldrh r3, [r0, #0x0]
    mov r1, r4, lsl #0x8
    ldr ip, =0x4001040
    bic r3, r3, #0x3f
    orr r3, r3, #0x17
    orr r3, r3, #0x20
    strh r3, [r0, #0x0]
    ldrh r7, [r0, #0x0]
    and r3, r2, #0xff00
    and r2, r5, #0xff
    bic r7, r7, #0x3f00
    orr r7, r7, #0x1700
    orr r7, r7, #0x2000
    strh r7, [r0, #0x0]
    orr lr, r3, r2
    ldrh r7, [r8, #0x0]
    and r3, r1, #0xff00
    ldr r1, =0x4001044
    bic r2, r7, #0x3f
    orr r2, r2, #0x8
    strh r2, [r8, #0x0]
    and r2, r4, #0xff
    orr r2, r3, r2
    strh lr, [ip, #0x0]
    strh r2, [r1, #0x0]
    ldrb r0, [r0, #0x0]
    add r1, sp, #0x1
    add r3, sp, #0x0
    swpb r0, r0, [r1]
    ldrb r1, [sp, #0x1]
    ldr r0, =0x4001050
    mvn r2, #0x7
    swpb r1, r1, [r3]
    ldrb r1, [sp, #0x0]
    mov r1, r1, lsl #0x1b
    mov r1, r1, lsr #0x1b
    bl func_0206a39c
L_02007878:
    mov r0, #0xff000
    str r0, [r6, #0x18]
    strh r5, [r6, #0x1c]
    strh r4, [r6, #0x1e]
    mov r2, #0x0
    strh r2, [r6, #0x20]
    strh r2, [r6, #0x22]
    mov r1, r2
L_02007898:
    add r0, r6, r2, lsl #0x1
    add r2, r2, #0x1
    strh r1, [r0, #0x24]
    add r0, r0, #0x100
    strh r1, [r0, #0xa4]
    cmp r2, #0xc0
    blt L_02007898
    add sp, sp, #0x8
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on
