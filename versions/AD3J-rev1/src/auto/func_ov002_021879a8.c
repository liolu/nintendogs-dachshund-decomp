#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02039358();
extern void func_02039394();
extern void func_020393d0();
extern void func_0203945c();
extern void func_0203949c();
extern void func_0203e280();
extern void func_ov002_02187b10();
// clang-format off
asm void func_ov002_021879a8(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x8
    mov r4, r0
    ldrsb r2, [r4, #0xa4]
    cmp r2, #0x5
    addls pc, pc, r2, lsl #0x2
    b L_02187b04
L_021879c4:
    b L_02187ad8
    b L_02187aa0
    b L_02187a5c
    b L_02187a4c
    b L_02187a14
    b L_021879dc
L_021879dc:
    mov ip, #0x2
    mov r2, #0x3c
    mov r3, #0xc8
    str ip, [sp, #0x0]
    bl func_ov002_02187b10
    cmp r0, #0x0
    addne sp, sp, #0x8
    ldmnefd sp!, {r4, lr}
    bxne lr
    mov r0, r4
    bl func_02039358
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
L_02187a14:
    mov ip, #0x1
    mov r2, #0x3c
    mov r3, #0x32
    str ip, [sp, #0x0]
    bl func_ov002_02187b10
    cmp r0, #0x0
    addne sp, sp, #0x8
    ldmnefd sp!, {r4, lr}
    bxne lr
    mov r0, r4
    bl func_02039394
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
L_02187a4c:
    bl func_020393d0
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
L_02187a5c:
    add r1, r4, #0x100
    ldrh r1, [r1, #0x2c]
    cmp r1, #0x14
    bls L_02187a7c
    mov r1, #0x2
    mov r2, #0x10
    bl func_0203e280
    b L_02187a88
L_02187a7c:
    mov r1, #0x2
    mov r2, #0x3
    bl func_0203e280
L_02187a88:
    add r1, r4, #0xb0
    mov r0, #0x1
    swpb r0, r0, [r1]
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
L_02187aa0:
    mov ip, #0x0
    mov r2, #0x1e
    mov r3, #0x6
    str ip, [sp, #0x0]
    bl func_ov002_02187b10
    cmp r0, #0x0
    addne sp, sp, #0x8
    ldmnefd sp!, {r4, lr}
    bxne lr
    mov r0, r4
    bl func_0203945c
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
L_02187ad8:
    mov ip, #0x0
    mov r2, #0x3c
    mov r3, #0xc
    str ip, [sp, #0x0]
    bl func_ov002_02187b10
    cmp r0, #0x0
    addne sp, sp, #0x8
    ldmnefd sp!, {r4, lr}
    bxne lr
    mov r0, r4
    bl func_0203949c
L_02187b04:
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
