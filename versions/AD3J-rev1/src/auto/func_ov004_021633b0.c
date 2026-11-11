#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffda04();
extern void func_02027f40();
extern void func_020280f8();
extern void func_ov004_0215c764();
extern void func_ov004_02163140();
extern char data_ov004_02163ccc[];
// clang-format off
asm void func_ov004_021633b0(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0xc
    ldr r1, =data_ov004_02163ccc
    mov r6, r0
    ldr r7, [r1, #0x0]
    ldr r0, [r7, #0x214]
    ldrsh r0, [r0, #0x0]
    bl func_01ffda04
    movs r5, r0
    beq L_02165734
    bl func_ov004_0215c764
    cmp r0, #0x0
    beq L_02165734
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
    ldr r1, =0x733
    mov r3, #0x0
    umull lr, ip, r0, r1
    mla ip, r0, r3, ip
    mov r0, r0, asr #0x1f
    mov r2, #0x800
    mla ip, r0, r1, ip
    adds r2, lr, r2
    adc r0, ip, #0x0
    mov r1, r2, lsr #0xc
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
    mov r0, r0, asr #0x10
    str r0, [r6, #0x4c]
    ldr r0, =0x2328
    cmp r4, r0
    blt L_021656cc
    ldr r0, [r6, #0x1c]
    add r1, r6, #0x5c
    bic r0, r0, #0x2
    str r0, [r6, #0x1c]
    mov r0, #0x1
    swpb r0, r0, [r1]
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_021656cc:
    ldr r0, =0x1770
    cmp r4, r0
    ldrlt r0, [r6, #0x1c]
    addlt sp, sp, #0xc
    orrlt r0, r0, #0x2
    strlt r0, [r6, #0x1c]
    ldmltfd sp!, {r4, r5, r6, r7, lr}
    bxlt lr
    ldr r0, =0xffffe890
    ldr r2, =0x57619f1
    add r0, r4, r0
    mov r0, r0, lsl #0x2
    rsb r1, r0, #0x0
    mov r0, r1, lsr #0x1f
    smull r1, r3, r2, r1
    ldr r5, [r6, #0x1c]
    mov r3, r3, asr #0x6
    bic r1, r5, #0x2
    add r3, r0, r3
    str r1, [r6, #0x1c]
    add r0, r3, #0x5
    add r1, r6, #0x5c
    swpb r0, r0, [r1]
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02165734:
    ldr r0, [r6, #0x1c]
    orr r0, r0, #0x2
    str r0, [r6, #0x1c]
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
