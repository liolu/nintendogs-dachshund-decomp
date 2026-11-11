#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffda04();
extern void func_02027f40();
extern void func_020280f8();
extern void func_ov004_0215c764();
extern void func_ov004_02163140();
extern char data_ov004_02163ccc[];
// clang-format off
asm void func_ov004_0216359c(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0xc
    ldr r1, =data_ov004_02163ccc
    mov r6, r0
    ldr r7, [r1, #0x0]
    ldr r0, [r7, #0x214]
    ldrsh r0, [r0, #0x0]
    bl func_01ffda04
    movs r5, r0
    beq L_02165918
    bl func_ov004_0215c764
    cmp r0, #0x0
    beq L_02165918
    mov r0, r5
    mov r1, #0x7
    bl func_02027f40
    mov r4, r0
    add r1, sp, #0x0
    mov r0, r7
    bl func_ov004_02163140
    ldr r0, [r6, #0x18]
    ldr r2, [sp, #0x0]
    ldr r1, [r0, #0x0]
    mov r0, r5
    ldr r1, [r1, #0x4]
    add r1, r2, r1
    str r1, [r6, #0x20]
    ldr r1, [r6, #0x18]
    ldr r2, [sp, #0x4]
    ldr r1, [r1, #0x0]
    ldr r1, [r1, #0x8]
    add r1, r2, r1
    str r1, [r6, #0x24]
    ldr r1, [r6, #0x18]
    ldr r2, [sp, #0x8]
    ldr r1, [r1, #0x0]
    ldr r1, [r1, #0xc]
    add r1, r2, r1
    str r1, [r6, #0x28]
    bl func_020280f8
    mov r0, r0, lsl #0x10
    mov r1, r0, asr #0x10
    mov r0, r5
    str r1, [r6, #0x54]
    bl func_020280f8
    mov r1, r0, asr #0x1f
    mov r2, r1, lsl #0xa
    mov r3, r0, lsl #0xa
    mov r1, #0x800
    adds r1, r3, r1
    orr r2, r2, r0, lsr #0x16
    adc r0, r2, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    mov r0, r5
    str r1, [r6, #0x44]
    bl func_020280f8
    mov r1, #0x29
    mov r2, #0x0
    umull r5, r3, r0, r1
    mla r3, r0, r2, r3
    mov r0, r0, asr #0x1f
    mla r3, r0, r1, r3
    mov r0, #0x800
    adds r1, r5, r0
    adc r0, r3, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    mov r0, r1, lsl #0x10
    ldr r1, =0x1770
    mov r0, r0, asr #0x10
    cmp r4, r1
    str r0, [r6, #0x4c]
    ldrge r0, [r6, #0x1c]
    addge sp, sp, #0xc
    orrge r0, r0, #0x2
    strge r0, [r6, #0x1c]
    ldmgefd sp!, {r4, r5, r6, r7, lr}
    bxge lr
    ldr r0, =0x5dc
    cmp r4, r0
    blt L_021658f4
    ldr r0, =0xfffffa24
    ldr r3, [r6, #0x1c]
    add r1, r4, r0
    mov r0, #0x23
    mul r2, r1, r0
    bic r4, r3, #0x2
    ldr r1, =0x7482296b
    str r4, [r6, #0x1c]
    smull r0, r3, r1, r2
    mov r3, r3, asr #0xb
    mov r0, r2, lsr #0x1f
    add r3, r0, r3
    add r0, r3, #0x5
    add r1, r6, #0x5c
    swpb r0, r0, [r1]
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_021658f4:
    ldr r0, [r6, #0x1c]
    add r1, r6, #0x5c
    bic r0, r0, #0x2
    str r0, [r6, #0x1c]
    mov r0, #0x5
    swpb r0, r0, [r1]
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02165918:
    ldr r0, [r6, #0x1c]
    orr r0, r0, #0x2
    str r0, [r6, #0x1c]
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
