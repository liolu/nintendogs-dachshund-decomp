#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8958();
extern void func_02025538();
extern void func_020266e8();
extern void func_020285d8();
extern void func_02033dd4();
extern void func_02067c34();
extern char data_0215a048[];
// clang-format off
asm void func_ov003_02165a78(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r5, r0
    add r1, r5, #0x100
    mov r2, #0x11
    strh r2, [r1, #0x52]
    add r2, r5, #0x93
    mov r1, #0x5
    swpb r1, r1, [r2]
    add r2, r5, #0x98
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_020266e8
    mov r0, r5
    bl func_02025538
    mov r0, r5
    add r1, r5, #0x26c
    mov r2, #0x0
    bl func_020285d8
    ldr lr, [r5, #0x274]
    ldr r0, [r5, #0x26c]
    ldr r1, =data_0215a048
    smull r4, ip, r0, r0
    mov r0, #0x800
    smull r3, r2, lr, lr
    ldr r1, [r1, #0x0]
    adds lr, r4, r0
    ldr r4, [r1, #0xc]
    adc ip, ip, #0x0
    adds r1, r3, r0
    mov r3, lr, lsr #0xc
    orr r3, r3, ip, lsl #0x14
    adc r0, r2, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, r3, r1
    bl func_02067c34
    mov r1, r0
    sub r0, r4, #0x18000
    bl func_01ff8958
    ldr r2, [r5, #0x26c]
    mov r1, #0x800
    smull r3, r2, r0, r2
    adds r3, r3, r1
    adc r2, r2, #0x0
    mov r3, r3, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    str r3, [r5, #0x26c]
    ldr r2, [r5, #0x274]
    smull r3, r2, r0, r2
    adds r1, r3, r1
    adc r0, r2, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [r5, #0x274]
    mov r0, r5
    bl func_02033dd4
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
