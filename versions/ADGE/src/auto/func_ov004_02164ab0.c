#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02022dc0();
extern void func_02022e04();
extern void func_02029248();
extern void func_0202d930();
extern void func_020325f8();
extern void func_02037130();
extern void func_0203910c();
extern void func_0203b920();
extern void func_0203e5e8();
extern void func_020427d4();
extern void func_021058ac();
extern void func_02106ef0();
extern void func_ov004_0215a1a8();
// clang-format off
asm void func_ov004_02164ab0(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x8
    mov r4, r0
    mov r0, #0x0
    str r0, [r4, #0x484]
    ldr r1, [r4, #0x2a0]
    ldr r0, [r4, #0x484]
    sub r0, r1, r0
    str r0, [r4, #0x2a0]
    ldr r1, [r4, #0x3f0]
    ldr r0, [r4, #0x484]
    sub r0, r1, r0
    str r0, [r4, #0x3f0]
    ldr r1, [r4, #0x3fc]
    ldr r0, [r4, #0x484]
    sub r0, r1, r0
    str r0, [r4, #0x3fc]
    ldr r0, [r4, #0x488]
    add r0, r0, #0x1
    str r0, [r4, #0x488]
    bl func_02106ef0
    cmp r0, #0x0
    beq L_02164b14
    ldr r0, [r4, #0x484]
    bl func_021058ac
L_02164b14:
    mov r0, #0x64000
    str r0, [r4, #0x26c]
    mov r1, #0x0
    str r1, [r4, #0x270]
    mov r0, r4
    str r1, [r4, #0x274]
    bl func_0203910c
    add r0, r4, #0x26c
    add r3, r4, #0x3b4
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r4
    mov r1, #0x100
    bl func_02037130
    mov r0, r4
    mov r1, #0x47
    bl func_02022e04
    cmp r0, #0x0
    bne L_02164c00
    mov r0, r4
    mov r1, #0x48
    bl func_02022e04
    cmp r0, #0x0
    bne L_02164c00
    add r0, r4, #0x100
    ldrh r0, [r0, #0x12]
    cmp r0, #0x0
    movne r0, #0x0
    bne L_02164bf0
    ldrsh r0, [r4, #0xf0]
    cmp r0, #0x0
    beq L_02164ba4
    cmp r0, #0x6f
    bne L_02164ba4
    mov r0, #0x0
    b L_02164bf0
L_02164ba4:
    mov r0, r4
    bl func_02022dc0
    cmp r0, #0x0
    beq L_02164be4
    mov r0, r4
    bl func_0203b920
    ldrb ip, [r4, #0xa5]
    mov r1, #0x0
    mov r3, r0
    mov r0, r4
    mov r2, r1
    str ip, [sp, #0x0]
    mov ip, #0x1
    str ip, [sp, #0x4]
    bl func_0202d930
    b L_02164bf0
L_02164be4:
    mov r0, r4
    bl func_02029248
    mov r0, #0x0
L_02164bf0:
    cmp r0, #0x0
    addne sp, sp, #0x8
    ldmnefd sp!, {r4, lr}
    bxne lr
L_02164c00:
    mov r0, r4
    bl func_020325f8
    cmp r0, #0x0
    addeq sp, sp, #0x8
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    ldrsh r0, [r4, #0xf0]
    cmp r0, #0x53
    beq L_02164c38
    cmp r0, #0x54
    beq L_02164c58
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
L_02164c38:
    ldrsb r0, [r4, #0x88]
    bl func_020427d4
    ldr r1, =0x47b
    mov r0, r4
    bl func_0203e5e8
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
L_02164c58:
    bl func_ov004_0215a1a8
    mov r0, r4
    bl func_02029248
    ldrb r0, [r4, #0xb0]
    add r1, r4, #0xb0
    bic r0, r0, #0x10
    swpb r0, r0, [r1]
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
