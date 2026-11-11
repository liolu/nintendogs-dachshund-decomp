#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020038a8();
extern void func_020c9f94();
extern void func_020ca4b0();
extern void func_020fb170();
extern void func_020fb3b8();
extern void func_020fb758();
extern char data_02131634[];
extern char data_02131636[];
extern char data_02131638[];
extern char data_0215a048[];
extern char data_027c0bb0[];
extern char func_020fb07c[];
// clang-format off
asm void func_020faf6c(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r4, r1
    mov r1, #0x34
    bl func_020038a8
    mov r1, r4
    mov r6, r0
    mov r5, #0x0
    bl func_020c9f94
    ldr r0, =data_0215a048
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    beq L_020fafa8
    ldrh r0, [r0, #0x6]
    cmp r0, #0x18
    moveq r5, #0x1
L_020fafa8:
    ldr r0, [r6, #0x24]
    cmp r0, #0x0
    bne L_020fafc4
    ldr r1, =data_027c0bb0
    mov r0, #0x4
    swpb r0, r0, [r1]
    bl func_020fb758
L_020fafc4:
    ldr r0, [r6, #0x24]
    cmp r0, #0x0
    moveq r4, #0x0
    beq L_020fafec
    cmp r0, #0x1
    moveq r4, #0x1
    beq L_020fafec
    cmp r0, #0x2
    moveq r4, #0x2
    movne r4, #0x0
L_020fafec:
    mov r0, r5
    mov r1, r4
    bl func_020fb3b8
    mov r2, #0x12
    mov r1, #0x6
    mul ip, r5, r2
    ldr r5, =data_02131634
    ldr r3, =data_02131636
    ldr r2, =data_02131638
    mul lr, r4, r1
    strh r0, [r6, #0x28]
    add r0, r5, ip
    ldrsh r4, [lr, r0]
    add r1, r3, ip
    add r0, r2, ip
    strh r4, [r6, #0x2a]
    ldrsh r1, [lr, r1]
    strh r1, [r6, #0x2c]
    ldrsh r0, [lr, r0]
    strh r0, [r6, #0x2e]
    ldr r0, [r6, #0x24]
    cmp r0, #0x0
    bne L_020fb04c
    bl func_020fb170
L_020fb04c:
    ldr r1, =func_020fb07c
    mov r0, r6
    bl func_020ca4b0
    mov r0, r6
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
