#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020975ac();
extern char data_021545e8[];
extern char data_02154600[];
extern char data_02154604[];
extern char data_02154624[];
extern char data_02154634[];
extern char data_0215464c[];
extern char data_0215465c[];
// clang-format off
asm void func_02096d50(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    ldr r0, =data_0215465c
    ldr r1, =data_021545e8
    ldr r5, [r0, #0x0]
    ldr r0, =data_02154600
    mov ip, #0x0
    ldr r3, =data_02154604
    mov lr, #0x2
    strh ip, [r0, #0x0]
    swpb r0, lr, [r1]
    ldr r2, =data_02154624
    mov r4, #0x1
    str r5, [r3, #0x0]
    str r4, [r2, #0x0]
    bl func_020975ac
    ldr r1, =data_0215464c
    mov r3, #0x0
    ldr r0, =data_02154634
    mov r2, r4
    str r3, [r1, #0x0]
    str r2, [r0, #0x0]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
