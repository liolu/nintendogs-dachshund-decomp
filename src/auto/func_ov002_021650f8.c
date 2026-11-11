#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02023610();
extern void func_0202554c();
extern void func_0202649c();
extern void func_0202a2b4();
extern void func_0202d6f8();
// clang-format off
asm void func_ov002_021650f8(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    bl func_0202a2b4
    cmp r0, #0x1
    beq L_02165118
    cmp r0, #0x2
    beq L_02165120
    b L_02165128
L_02165118:
    ldr r2, =0x1e2
    b L_0216512c
L_02165120:
    ldr r2, =0x1e3
    b L_0216512c
L_02165128:
    mov r2, #0x0
L_0216512c:
    add r1, r4, #0x100
    mov r0, r4
    strh r2, [r1, #0x50]
    add r2, r4, #0xb0
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_0202649c
    mov r0, r4
    bl func_0202554c
    mov r0, r4
    mov r1, #0x1b
    mov r2, #0x1
    bl func_02023610
    mov r0, r4
    mov r1, #0x0
    bl func_0202d6f8
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
