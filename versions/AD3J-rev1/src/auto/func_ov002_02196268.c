#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02027e2c();
extern void func_02027e90();
extern void func_020342ec();
extern void func_02038358();
extern void func_0203e2b8();
// clang-format off
asm void func_ov002_02196268(void) {
    stmfd sp!, {r4, lr}
    mov r2, #0x1
    mov r4, r0
    bl func_020342ec
    cmp r0, #0x0
    beq L_021962b4
    ldrb r0, [r4, #0xc9]
    ands r1, r0, #0x10
    bicne r0, r0, #0x10
    addne r1, r4, #0xc9
    swpneb r0, r0, [r1]
    movne r0, #0x1
    moveq r0, #0x0
    cmp r0, #0x0
    beq L_021962b4
    mov r0, r4
    mov r1, #0x4
    mov r2, #0x32
    bl func_02027e2c
L_021962b4:
    mov r0, r4
    mov r1, #0x4
    bl func_02027e90
    mov r1, r0
    mov r0, r4
    bl func_02038358
    mov r2, r0
    ldr r1, =0x3ba
    mov r0, r4
    add r1, r2, r1
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_0203e2b8
    mov r0, #0x1
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
