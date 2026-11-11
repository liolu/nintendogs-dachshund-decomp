#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020f7cd4();
extern void func_020f7d30();
extern char data_02155070[];
extern char data_02155088[];
extern char data_0215508c[];
extern char data_021550ac[];
extern char data_021550bc[];
extern char data_021550d4[];
extern char data_021550e4[];
extern char data_021550e8[];
// clang-format off
asm void func_020f73c8(void) {
    stmfd sp!, {r4, lr}
    ldr r0, =data_021550e8
    ldr r0, [r0, #0x0]
    cmp r0, #0x1
    ldmnefd sp!, {r4, lr}
    bxne lr
    ldr r0, =data_021550bc
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    beq L_02096c74
    ldr r0, =data_021550ac
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    bne L_02096c90
L_02096c74:
    bl func_020f7cd4
    ldr r1, =data_021550ac
    mov r2, #0x0
    ldr r0, =data_021550bc
    str r2, [r1, #0x0]
    str r2, [r0, #0x0]
    b L_02096cc4
L_02096c90:
    ldr r0, =data_021550e4
    ldr r3, =data_0215508c
    ldr r4, [r0, #0x0]
    ldr r2, =data_02155070
    mov lr, #0x2
    ldr r1, =data_02155088
    mov ip, #0x0
    ldr r0, =data_021550d4
    str r4, [r3, #0x0]
    strh ip, [r1, #0x0]
    str ip, [r0, #0x0]
    swpb r0, lr, [r2]
    bl func_020f7d30
L_02096cc4:
    ldr r0, =data_021550e8
    mov r1, #0x0
    str r1, [r0, #0x0]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
