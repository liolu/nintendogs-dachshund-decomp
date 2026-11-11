#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025a88();
extern void func_02026bb4();
extern void func_0202814c();
extern void func_020e93a8();
extern char data_0214b484[];
extern char data_02153720[];
extern char data_02156080[];
// clang-format off
asm void func_ov003_02168de4(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r5, r0
    ldr r2, =0x151
    add r1, r5, #0x100
    strh r2, [r1, #0x50]
    add r2, r5, #0xb1
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_02026bb4
    mov r0, r5
    bl func_02025a88
    ldr r0, =data_02153720
    ldr r0, [r0, #0x0]
    ldrsh r2, [r0, #0x7a]
    cmp r2, #0x0
    blt L_02168e38
    ldr r0, =data_02156080
    ldr r1, [r0, #0x0]
    ldrsh r0, [r1, #0x20]
    cmp r0, r2
    bgt L_02168e40
L_02168e38:
    mov r4, #0x0
    b L_02168e48
L_02168e40:
    add r0, r1, r2, lsl #0x2
    ldr r4, [r0, #0x4]
L_02168e48:
    cmp r4, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    ldr r0, =data_0214b484
    ldr r1, =0x10dcd
    ldr r3, [r0, #0x0]
    mov r0, r5
    ldr r2, [r3, #0x0]
    mul r1, r2, r1
    add r6, r1, #0x1
    str r6, [r3, #0x0]
    bl func_0202814c
    mov r0, r6, lsl #0x10
    mov r1, r0, lsr #0x10
    mov r0, #0x14
    mul r0, r1, r0
    mov r0, r0, lsr #0x10
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    ldr r1, [r5, #0x9e4]
    add r2, r0, #0x75
    mov r0, r4
    strh r2, [r1, #0x70]
    bl func_020e93a8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
