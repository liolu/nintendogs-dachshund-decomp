#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020038a8();
extern void func_ov019_0215ad78();
extern void func_ov019_0215f240();
// clang-format off
asm void func_ov019_0215d830(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    mov r4, r0
    mov r0, r1
    mov r1, #0x150
    bl func_020038a8
    str r0, [r4, #0xac]
    ldr r0, [r4, #0xac]
    cmp r0, #0x0
    beq L_0215d91c
    mov r6, #0x0
    mov r5, r6
    mov r1, #0x8000
    mov r0, r6
    rsb r3, r1, #0x0
L_0215d868:
    ldr r2, [r4, #0xac]
    add r1, r6, #0x1
    str r0, [r2, r5]
    add r2, r2, r5
    str r0, [r2, #0x4]
    str r3, [r2, #0x8]
    ldr r2, [r4, #0xac]
    mov r1, r1, lsl #0x10
    add r2, r2, #0x18
    mov r6, r1, asr #0x10
    str r0, [r2, r5]
    add r1, r2, r5
    str r0, [r1, #0x4]
    str r0, [r1, #0x8]
    cmp r6, #0x2
    add r5, r5, #0xc
    blt L_0215d868
    mov ip, r0
    mov r3, #0x0
L_0215d8b4:
    ldr r2, [r4, #0xac]
    mov r1, r0, lsl #0xc
    add r2, r2, #0x30
    str r3, [r2, ip]
    add r2, r2, ip
    str r3, [r2, #0x4]
    rsb r1, r1, #0x0
    str r1, [r2, #0x8]
    ldr r1, [r4, #0xac]
    add r5, r0, #0x1
    add r1, r1, ip
    add r0, r1, #0x30
    add r6, r1, #0x90
    ldmia r0, {r0, r1, r2}
    stmia r6, {r0, r1, r2}
    ldr r1, [r4, #0xac]
    mov r0, r5, lsl #0x10
    add r1, r1, #0xf0
    mov r0, r0, asr #0x10
    str r3, [r1, ip]
    add r1, r1, ip
    str r3, [r1, #0x4]
    str r3, [r1, #0x8]
    cmp r0, #0x8
    add ip, ip, #0xc
    blt L_0215d8b4
L_0215d91c:
    mov r0, r4
    bl func_ov019_0215ad78
    cmp r0, #0x0
    movne r1, #0x100
    strne r1, [r0, #0x24]
    strne r1, [r0, #0x28]
    movne r1, #0xcd0
    strne r1, [r0, #0x2c]
    mov r0, r4
    bl func_ov019_0215ad78
    cmp r0, #0x0
    beq L_0215d968
    ldrh r2, [r0, #0x20]
    add r1, r0, #0x1
    bic r2, r2, #0x1
    strh r2, [r0, #0x20]
    ldrb r0, [r0, #0x1]
    bic r0, r0, #0x1
    swpb r0, r0, [r1]
L_0215d968:
    ldrsh r0, [r4, #0x1c]
    add r0, r0, #0x1
    mov r0, r0, lsl #0x10
    mov r8, r0, asr #0x10
    cmp r8, #0x7
    ldmgefd sp!, {r4, r5, r6, r7, r8, lr}
    bxge lr
    mov r7, #0x0
    mvn r6, #0x0
    mov r5, #0x6
    mov r4, #0x1
L_0215d994:
    cmp r8, #0x0
    blt L_0215d9a4
    cmp r8, #0x32
    blt L_0215d9ac
L_0215d9a4:
    mov r0, r7
    b L_0215d9b8
L_0215d9ac:
    bl func_ov019_0215f240
    add r0, r0, r8, lsl #0x2
    ldr r0, [r0, #0x4]
L_0215d9b8:
    cmp r0, #0x0
    beq L_0215d9d8
    cmp r0, #0x0
    ldrnesh r1, [r0, #0x24]
    moveq r1, r6
    cmp r1, #0x6
    strneh r5, [r0, #0x28]
    strneh r4, [r0, #0x1e]
L_0215d9d8:
    add r0, r8, #0x1
    mov r0, r0, lsl #0x10
    mov r8, r0, asr #0x10
    cmp r8, #0x7
    blt L_0215d994
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on
