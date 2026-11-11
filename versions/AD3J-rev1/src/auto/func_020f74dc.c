#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020f7d30();
extern char data_02155070[];
extern char data_02155088[];
extern char data_0215508c[];
extern char data_021550ac[];
extern char data_021550bc[];
extern char data_021550d4[];
extern char data_021550e4[];
// clang-format off
asm void func_020f74dc(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    ldr r0, =data_021550e4
    ldr r1, =data_02155070
    ldr r5, [r0, #0x0]
    ldr r0, =data_02155088
    mov ip, #0x0
    ldr r3, =data_0215508c
    mov lr, #0x2
    strh ip, [r0, #0x0]
    swpb r0, lr, [r1]
    ldr r2, =data_021550ac
    mov r4, #0x1
    str r5, [r3, #0x0]
    str r4, [r2, #0x0]
    bl func_020f7d30
    ldr r1, =data_021550d4
    mov r3, #0x0
    ldr r0, =data_021550bc
    mov r2, r4
    str r3, [r1, #0x0]
    str r2, [r0, #0x0]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
