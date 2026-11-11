#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02068380();
extern void func_ov018_021588f8();
extern char data_02124ad8[];
// clang-format off
asm void func_ov018_0215b5f4(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r4, r0
    bl func_ov018_021588f8
    cmp r0, #0x0
    movne r1, #0x29
    strne r1, [r0, #0x24]
    strne r1, [r0, #0x28]
    strne r1, [r0, #0x2c]
    mov r0, r4
    bl func_ov018_021588f8
    cmp r0, #0x0
    beq L_0215dac0
    ldrh r2, [r0, #0x20]
    add r1, r0, #0x1
    bic r2, r2, #0x1
    strh r2, [r0, #0x20]
    ldrb r0, [r0, #0x1]
    bic r0, r0, #0x1
    swpb r0, r0, [r1]
L_0215dac0:
    ldrsh r0, [r4, #0x1c]
    ldr r1, =data_02124ad8
    ldr r2, =0x1405
    sub r0, r0, #0x3
    mov r0, r0, lsl #0xc
    mov r0, r0, asr #0x4
    mov r0, r0, lsl #0x2
    ldrsh r0, [r1, r0]
    mov ip, #0x0
    mov r3, #0x800
    umull r6, r5, r0, r2
    mla r5, r0, ip, r5
    mov r0, r0, asr #0x1f
    adds r6, r6, r3
    mla r5, r0, r2, r5
    adc r0, r5, #0x0
    mov r5, r6, lsr #0xc
    orr r5, r5, r0, lsl #0x14
    str r5, [r4, #0x3c]
    mov r0, #0x6000
    str r0, [r4, #0x40]
    ldrsh r5, [r4, #0x1c]
    ldr lr, =0xfffe159f
    add r0, r4, #0x48
    sub r5, r5, #0x3
    mov r5, r5, lsl #0xc
    mov r5, r5, asr #0x4
    mov r5, r5, lsl #0x1
    add r5, r5, #0x1
    mov r5, r5, lsl #0x1
    ldrsh r1, [r1, r5]
    umull r6, r5, r1, r2
    adds r3, r6, r3
    mla r5, r1, ip, r5
    mov r1, r1, asr #0x1f
    mla r5, r1, r2, r5
    adc r1, r5, #0x0
    mov r2, r3, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    add r1, r2, lr
    str r1, [r4, #0x44]
    bl func_02068380
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
