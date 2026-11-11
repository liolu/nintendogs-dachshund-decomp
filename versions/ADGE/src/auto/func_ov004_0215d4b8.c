#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02067ca0();
extern char data_ov004_0216e3c0[];
// clang-format off
asm void func_ov004_0215d4b8(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    ldr r1, =data_ov004_0216e3c0
    ldr r2, [r1, #0x0]
    ldr r0, [r2, #0x8]
    add r0, r0, #0x1
    str r0, [r2, #0x8]
    ldr r2, [r1, #0x0]
    ldr r0, [r2, #0x8]
    cmp r0, #0x1e
    blt L_0215d50c
    add r0, r2, #0x3000
    ldrsh r2, [r2, #0x16]
    ldr r0, [r0, #0x6c4]
    mov lr, #0x1
    strh r2, [r0, #0x2]
    ldr r1, [r1, #0x0]
    add r0, r1, #0x3000
    ldrsh r1, [r1, #0x18]
    ldr r0, [r0, #0x6c4]
    strh r1, [r0, #0x4]
    b L_0215d5a4
L_0215d50c:
    mov r0, r0, lsl #0xc
    mov r1, #0x1e000
    bl func_02067ca0
    ldr r5, =data_ov004_0216e3c0
    mov r4, #0x800
    ldr ip, [r5, #0x0]
    mov lr, #0x0
    ldrsh r3, [ip, #0x14]
    ldrsh r6, [ip, #0x18]
    ldrsh r1, [ip, #0x12]
    ldrsh r2, [ip, #0x16]
    sub r6, r6, r3
    mov r7, r6, lsl #0xc
    sub r2, r2, r1
    mov r6, r2, lsl #0xc
    smull r2, r8, r0, r7
    adds r2, r2, r4
    add ip, ip, #0x3000
    smull r7, r6, r0, r6
    adc r0, r8, #0x0
    adds r4, r7, r4
    mov r2, r2, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    add r0, r2, r3, lsl #0xc
    add r2, r0, #0x800
    adc r0, r6, #0x0
    mov r3, r4, lsr #0xc
    orr r3, r3, r0, lsl #0x14
    add r0, r3, r1, lsl #0xc
    add r1, r0, #0x800
    ldr r0, [ip, #0x6c4]
    mov r1, r1, asr #0xc
    strh r1, [r0, #0x2]
    ldr r0, [r5, #0x0]
    mov r1, r2, asr #0xc
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6c4]
    strh r1, [r0, #0x4]
L_0215d5a4:
    cmp lr, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, r8, lr}
    bxeq lr
    ldr r2, =data_ov004_0216e3c0
    mov r0, #0x0
    ldr r1, [r2, #0x0]
    str r0, [r1, #0x20]
    ldr r5, [r2, #0x0]
    add r1, r5, #0x3000
    ldr r4, [r1, #0x6c4]
    ldr r1, [r4, #0x8]
    cmp r1, #0x0
    ble L_0215d628
    ldrb r3, [r4, #0x0]
    ldrb r1, [r5, #0x1c]
    cmp r3, r1
    bne L_0215d628
    ldrb r3, [r4, #0x1]
    ldrb r1, [r5, #0x1d]
    cmp r3, r1
    bne L_0215d628
    add r1, r5, #0x1000
    str r0, [r1, #0x2f0]
    ldr r3, [r2, #0x0]
    mov r1, #0x2
    swpb r1, r1, [r3]
    ldr r2, [r2, #0x0]
    ldr r1, =0x6cc
    add r2, r2, #0x3000
    add r1, r2, r1
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_0215d628:
    mov r0, #0x0
    swpb r0, r0, [r5]
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on
