#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02069098();
extern char data_ov003_0216be20[];
// clang-format off
asm void func_ov003_0215a7dc(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    ldr r1, =data_ov003_0216be20
    ldr r2, [r1, #0x0]
    ldr r0, [r2, #0x8]
    add r0, r0, #0x1
    str r0, [r2, #0x8]
    ldr r2, [r1, #0x0]
    ldr r0, [r2, #0x8]
    cmp r0, #0x1e
    blt L_0215ccb0
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
    b L_0215cd48
L_0215ccb0:
    mov r0, r0, lsl #0xc
    mov r1, #0x1e000
    bl func_02069098
    ldr r5, =data_ov003_0216be20
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
L_0215cd48:
    cmp lr, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, r8, lr}
    bxeq lr
    ldr r2, =data_ov003_0216be20
    mov r3, #0x4
    ldr r0, [r2, #0x0]
    add r1, r0, #0x3000
    ldr r0, [r1, #0x6c4]
    ldrb r4, [r0, #0x0]
    ldrsh r0, [r0, #0x2]
    mov r4, r4, lsl #0x3
    sub r0, r4, r0
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [r1, #0x394]
    ldr r0, [r2, #0x0]
    add r1, r0, #0x3000
    ldr r0, [r1, #0x6c4]
    ldrb r4, [r0, #0x1]
    ldrsh r0, [r0, #0x4]
    mov r4, r4, lsl #0x3
    sub r0, r4, r0
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [r1, #0x398]
    ldr r1, [r2, #0x0]
    swpb r0, r3, [r1]
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on
