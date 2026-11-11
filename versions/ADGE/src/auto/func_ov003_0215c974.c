#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02023580();
extern void func_02025594();
extern void func_020264e4();
extern void func_0202d6e0();
extern void func_02081208();
extern void func_0208d438();
extern char data_021384a4[];
extern char data_02138510[];
extern char data_0215a02c[];
// clang-format off
asm void func_ov003_0215c974(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x1e8
    strh r2, [r1, #0x52]
    add r2, r4, #0x97
    mov r1, #0x4
    swpb r1, r1, [r2]
    bl func_020264e4
    mov r0, r4
    bl func_02025594
    mov r0, r4
    mov r1, #0x8
    bl func_0202d6e0
    ldr r0, =data_0215a02c
    ldrsb r3, [r4, #0x88]
    ldr r0, [r0, #0x0]
    ldr r2, =data_02138510
    cmp r0, #0x0
    ldrne r0, [r0, #0x0]
    ldr r2, [r2, r3, lsl #0x2]
    moveq r0, #0x0
    mov r1, #0xf
    bl func_02081208
    ldr r0, =data_0215a02c
    ldrsb r3, [r4, #0x88]
    ldr r0, [r0, #0x0]
    ldr r2, =data_021384a4
    cmp r0, #0x0
    ldrne r0, [r0, #0x0]
    ldr r2, [r2, r3, lsl #0x2]
    moveq r0, #0x0
    mov r1, #0x10
    bl func_02081208
    mov r0, #0x1e
    mov r1, #0x7f
    bl func_0208d438
    mov r0, r4
    bl func_02023580
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
