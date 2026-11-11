#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02078bf4();
extern void func_0211c844();
extern void func_0211c894();
extern void func_0211c904();
extern void func_0211c98c();
extern void func_020c4eac();
extern void func_020c5138();
extern void func_020c514c();
extern void func_020c5188();
extern void func_020c51d4();
extern void func_020c5468();
extern char data_ov003_0216b8a0[];
extern char data_ov003_0216b8b0[];
extern char data_ov003_0216b8c0[];
extern char data_ov003_0216b8d0[];
extern char data_ov003_0216b8e0[];
extern char data_ov003_0216b8f0[];
extern char data_ov003_0216b900[];
extern char data_ov003_0216b910[];
extern char func_ov003_0216a568[];
extern char func_ov003_0216b47c[];
extern char func_ov003_0216b48c[];
extern char func_ov003_0216b49c[];
extern char func_ov003_0216b4ac[];
extern char func_ov003_0216b4bc[];
extern char func_ov003_0216b4cc[];
extern char func_ov003_0216b4dc[];
extern char func_ov003_0216b78c[];
// clang-format off
asm void func_ov003_0216b218(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0xc
    mov r2, r1
    mov r1, #0xe4
    mov r5, r0
    bl func_020c5468
    ldr r1, =0x39ce
    mov r4, r0
    bl func_020c514c
    ldr r1, =0x7fff
    mov r0, r4
    bl func_020c5188
    mov r0, r4
    mov r1, #0x3
    bl func_020c5138
    ldr r1, =func_ov003_0216a568
    mov r0, r4
    bl func_020c4eac
    mov r3, #0x0
    add r2, r4, #0xa4
    swpb r0, r3, [r2]
    mov r1, r5
    mov r0, #0x6000
    str r3, [r4, #0xa8]
    str r0, [r4, #0xac]
    str r3, [r4, #0xb0]
    ldr r3, =0x99a
    add r0, r4, #0x88
    mov r2, #0x9
    bl func_0211c98c
    add r0, r4, #0x88
    add r1, r4, #0xa8
    bl func_0211c904
    add r0, r4, #0x88
    mov r1, #0x0
    add r2, r4, #0xa8
    bl func_0211c844
    mov r0, #0x0
    str r0, [sp, #0x0]
    str r0, [sp, #0x8]
    mov r0, #0x5000
    str r0, [sp, #0x4]
    add r0, r4, #0x88
    mov r1, #0x8
    add r2, sp, #0x0
    bl func_0211c844
    add r0, r4, #0x88
    mov r1, #0x2
    bl func_0211c894
    ldr r0, [r4, #0x1c]
    ldr r1, =data_ov003_0216b8d0
    ldr r0, [r0, #0x8]
    add r0, r0, #0x40
    bl func_02078bf4
    mov r0, r0, lsl #0x10
    mov r1, r0, asr #0x10
    ldr r2, =func_ov003_0216b78c
    mov r0, r4
    bl func_020c51d4
    ldr r0, [r4, #0x1c]
    ldr r1, =data_ov003_0216b8f0
    ldr r0, [r0, #0x8]
    add r0, r0, #0x40
    bl func_02078bf4
    mov r0, r0, lsl #0x10
    mov r1, r0, asr #0x10
    ldr r2, =func_ov003_0216b4dc
    mov r0, r4
    bl func_020c51d4
    ldr r0, [r4, #0x1c]
    ldr r1, =data_ov003_0216b900
    ldr r0, [r0, #0x8]
    add r0, r0, #0x40
    bl func_02078bf4
    mov r0, r0, lsl #0x10
    mov r1, r0, asr #0x10
    ldr r2, =func_ov003_0216b4cc
    mov r0, r4
    bl func_020c51d4
    ldr r0, [r4, #0x1c]
    ldr r1, =data_ov003_0216b8b0
    ldr r0, [r0, #0x8]
    add r0, r0, #0x40
    bl func_02078bf4
    mov r0, r0, lsl #0x10
    mov r1, r0, asr #0x10
    ldr r2, =func_ov003_0216b4bc
    mov r0, r4
    bl func_020c51d4
    ldr r0, [r4, #0x1c]
    ldr r1, =data_ov003_0216b8a0
    ldr r0, [r0, #0x8]
    add r0, r0, #0x40
    bl func_02078bf4
    mov r0, r0, lsl #0x10
    mov r1, r0, asr #0x10
    ldr r2, =func_ov003_0216b4ac
    mov r0, r4
    bl func_020c51d4
    ldr r0, [r4, #0x1c]
    ldr r1, =data_ov003_0216b8e0
    ldr r0, [r0, #0x8]
    add r0, r0, #0x40
    bl func_02078bf4
    mov r0, r0, lsl #0x10
    mov r1, r0, asr #0x10
    ldr r2, =func_ov003_0216b49c
    mov r0, r4
    bl func_020c51d4
    ldr r0, [r4, #0x1c]
    ldr r1, =data_ov003_0216b910
    ldr r0, [r0, #0x8]
    add r0, r0, #0x40
    bl func_02078bf4
    mov r0, r0, lsl #0x10
    mov r1, r0, asr #0x10
    ldr r2, =func_ov003_0216b48c
    mov r0, r4
    bl func_020c51d4
    ldr r0, [r4, #0x1c]
    ldr r1, =data_ov003_0216b8c0
    ldr r0, [r0, #0x8]
    add r0, r0, #0x40
    bl func_02078bf4
    mov r0, r0, lsl #0x10
    mov r1, r0, asr #0x10
    ldr r2, =func_ov003_0216b47c
    mov r0, r4
    bl func_020c51d4
    mov r0, r4
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
