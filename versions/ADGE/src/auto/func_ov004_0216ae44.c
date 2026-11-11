#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_ov004_0215a354();
extern void func_ov004_0215a38c();
extern void func_ov004_0215a3c4();
// clang-format off
asm void func_ov004_0216ae44(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldrsb r0, [r4, #0xb7]
    cmp r0, #0x1
    beq L_0216ae6c
    cmp r0, #0x2
    beq L_0216ae74
    cmp r0, #0x3
    beq L_0216ae80
    b L_0216ae84
L_0216ae6c:
    bl func_ov004_0215a38c
    b L_0216ae84
L_0216ae74:
    mov r0, r1
    bl func_ov004_0215a3c4
    b L_0216ae84
L_0216ae80:
    bl func_ov004_0215a354
L_0216ae84:
    add r1, r4, #0xb7
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
