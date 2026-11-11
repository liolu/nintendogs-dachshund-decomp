#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200c488();
extern void func_02025ba0();
extern void func_020266e8();
extern char data_0214da7c[];
extern char data_0214da84[];
extern char data_0215a04c[];
// clang-format off
asm void func_0201e3c4(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x4
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x11
    strh r2, [r1, #0x52]
    add r2, r4, #0x93
    mov r1, #0x5
    swpb r1, r1, [r2]
    add r2, r4, #0x98
    mov r1, #0x9
    swpb r1, r1, [r2]
    bl func_020266e8
    mov r0, r4
    bl func_02025ba0
    ldr r0, =data_0215a04c
    ldr r0, [r0, #0x0]
    ldrh r1, [r0, #0x0]
    cmp r1, #0xc
    beq L_0201e420
    ldr r0, =0x8003
    cmp r1, r0
    bne L_0201e494
L_0201e420:
    ldr r0, =data_0214da84
    ldr r1, =data_0214da7c
    ldr r2, [r0, #0x0]
    ldr r3, [r1, #0x0]
    ldr r1, [r2, #0x0]
    ldr r0, =0x10dcd
    ldr r5, [r3, #0x20]
    mul r0, r1, r0
    add r3, r0, #0x1
    ldrh r1, [r5, #0x2e]
    mov r0, r3, lsl #0x10
    mov r0, r0, lsr #0x10
    mul r0, r1, r0
    mov r0, r0, lsr #0x10
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r0, r0, lsl #0x10
    mov r1, r0, asr #0x10
    mov r0, #0xb
    str r3, [r2, #0x0]
    bl func_0200c488
    cmp r0, #0x0
    addne r0, r0, #0x8
    addne r3, r4, #0x26c
    ldmneia r0, {r0, r1, r2}
    stmneia r3, {r0, r1, r2}
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_0201e494:
    ldr r7, =data_0214da84
    ldr r3, =0x10dcd
    ldr r1, [r7, #0x0]
    ldr ip, =0xfff
    ldr r0, [r1, #0x0]
    mov r6, #0x0
    mul r2, r0, r3
    add r0, r2, #0x1
    and r2, r0, ip
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    mov r2, r2, lsl #0x10
    mov r2, r2, asr #0x10
    mov lr, #0x14000
    umull r9, r8, r2, lr
    mla r8, r2, r6, r8
    mov r2, r2, asr #0x1f
    mov r5, #0x800
    adds r9, r9, r5
    mla r8, r2, lr, r8
    adc r2, r8, #0x0
    mov r8, r9, lsr #0xc
    orr r8, r8, r2, lsl #0x14
    str r0, [r1, #0x0]
    sub r0, r8, #0xa000
    str r0, [r4, #0x26c]
    ldr r1, [r7, #0x0]
    ldr r0, [r1, #0x0]
    mul r2, r0, r3
    add r0, r2, #0x1
    and r2, r0, ip
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    mov r2, r2, lsl #0x10
    mov r2, r2, asr #0x10
    umull r7, r3, r2, lr
    adds r5, r7, r5
    mla r3, r2, r6, r3
    mov r2, r2, asr #0x1f
    mla r3, r2, lr, r3
    adc r2, r3, #0x0
    mov r3, r5, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    str r0, [r1, #0x0]
    sub r0, r3, #0xa000
    str r0, [r4, #0x274]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
}
// clang-format on
