#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02097550();
extern void func_020975ac();
extern char data_021545e8[];
extern char data_02154600[];
extern char data_02154604[];
extern char data_02154624[];
extern char data_02154634[];
extern char data_0215464c[];
extern char data_0215465c[];
extern char data_02154660[];
// clang-format off
asm void func_02096c3c(void) {
    stmfd sp!, {r4, lr}
    ldr r0, =data_02154660
    ldr r0, [r0, #0x0]
    cmp r0, #0x1
    ldmnefd sp!, {r4, lr}
    bxne lr
    ldr r0, =data_02154634
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    beq L_02096c74
    ldr r0, =data_02154624
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    bne L_02096c90
L_02096c74:
    bl func_02097550
    ldr r1, =data_02154624
    mov r2, #0x0
    ldr r0, =data_02154634
    str r2, [r1, #0x0]
    str r2, [r0, #0x0]
    b L_02096cc4
L_02096c90:
    ldr r0, =data_0215465c
    ldr r3, =data_02154604
    ldr r4, [r0, #0x0]
    ldr r2, =data_021545e8
    mov lr, #0x2
    ldr r1, =data_02154600
    mov ip, #0x0
    ldr r0, =data_0215464c
    str r4, [r3, #0x0]
    strh ip, [r1, #0x0]
    str ip, [r0, #0x0]
    swpb r0, lr, [r2]
    bl func_020975ac
L_02096cc4:
    ldr r0, =data_02154660
    mov r1, #0x0
    str r1, [r0, #0x0]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
