#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_ov004_0215ba94();
extern void func_ov004_0215cc5c();
extern void func_ov004_0215cdc0();
extern void func_ov004_0215d4b8();
extern void func_ov004_0215d640();
extern void func_ov004_0215df60();
extern char data_ov004_0216e3c0[];
// clang-format off
asm void func_ov004_0215b964(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldr ip, =data_ov004_0216e3c0
    ldr r3, =0x88888889
    ldr r1, [ip, #0x0]
    ldr r2, =0x1e
    add r0, r1, #0x3000
    ldr r0, [r0, #0x6c4]
    add r1, r1, #0x1a
    ldrb r0, [r0, #0x0]
    swpb r0, r0, [r1]
    ldr r1, [ip, #0x0]
    add r0, r1, #0x3000
    ldr r0, [r0, #0x6c4]
    add r1, r1, #0x1b
    ldrb r0, [r0, #0x1]
    swpb r0, r0, [r1]
    ldr r1, [ip, #0x0]
    ldr r0, [r1, #0x4]
    add r0, r0, #0x1
    str r0, [r1, #0x4]
    ldr lr, [ip, #0x0]
    ldr ip, [lr, #0x4]
    umull r0, r1, ip, r3
    mov r1, r1, lsr #0x4
    umull r0, r1, r2, r1
    subs r1, ip, r0
    bne L_0215b9e8
    ldr r0, [lr, #0xc]
    cmp r0, #0x0
    moveq r0, #0x1
    movne r0, #0x0
    str r0, [lr, #0xc]
L_0215b9e8:
    ldr r0, =data_ov004_0216e3c0
    ldr r0, [r0, #0x0]
    ldrsb r0, [r0, #0x0]
    cmp r0, #0x4
    addls pc, pc, r0, lsl #0x2
    b L_0215ba3c
L_0215ba00:
    b L_0215ba14
    b L_0215ba20
    b L_0215ba28
    b L_0215ba30
    b L_0215ba38
L_0215ba14:
    bl func_ov004_0215d640
    bl func_ov004_0215df60
    b L_0215ba3c
L_0215ba20:
    bl func_ov004_0215d4b8
    b L_0215ba3c
L_0215ba28:
    bl func_ov004_0215cdc0
    b L_0215ba3c
L_0215ba30:
    bl func_ov004_0215cc5c
    b L_0215ba3c
L_0215ba38:
    bl func_ov004_0215ba94
L_0215ba3c:
    ldr r3, =data_ov004_0216e3c0
    ldr r0, =0x3bb
    mov lr, #0x0
L_0215ba48:
    ldr r1, [r3, #0x0]
    add ip, r1, lr
    add r1, ip, #0x3300
    ldrsb r2, [r1, #0xbb]
    add lr, lr, #0x1
    cmp r2, #0x0
    addgt r1, ip, #0x3000
    subgt ip, r2, #0x1
    addgt r2, r1, r0
    swpgtb r1, ip, [r2]
    cmp lr, #0x6
    blt L_0215ba48
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
