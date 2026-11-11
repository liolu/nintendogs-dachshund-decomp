#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025ba0();
extern void func_02026628();
extern char data_0214da84[];
// clang-format off
asm void func_0201e570(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x4
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x10
    strh r2, [r1, #0x52]
    add r2, r4, #0x93
    mov r1, #0x5
    swpb r1, r1, [r2]
    add r2, r4, #0x97
    mov r1, #0x2
    swpb r1, r1, [r2]
    bl func_02026628
    mov r0, r4
    bl func_02025ba0
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
    mov r5, #0x800
    adds r9, r9, r5
    mla r8, r2, r6, r8
    str r0, [r1, #0x0]
    mov r0, r2, asr #0x1f
    mla r8, r0, lr, r8
    adc r0, r8, #0x0
    mov r1, r9, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    sub r0, r1, #0xa000
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
