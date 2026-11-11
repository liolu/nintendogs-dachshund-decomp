#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02066f88();
extern void func_0208bad4();
extern void func_020a6b10();
extern void func_020ca4a8();
extern void func_020ca4b0();
extern void func_020ca73c();
extern void func_020ca750();
extern void func_020ca78c();
extern char data_027c0bbc[];
extern char func_020a7490[];
extern char func_020a74b8[];
// clang-format off
asm void func_020a7924(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    mov r0, #0x0
    strh r0, [r4, #0x8a]
    strh r0, [r4, #0x90]
    strh r0, [r4, #0x92]
    mov r0, r1
    strh r1, [r4, #0x94]
    bl func_020a6b10
    strh r0, [r4, #0x96]
    mvn r0, #0x0
    strh r0, [r4, #0x98]
    strh r0, [r4, #0x8c]
    strh r0, [r4, #0x9a]
    strh r0, [r4, #0x8e]
    strh r0, [r4, #0x9c]
    mov r1, #0x0
    strh r1, [r4, #0x9e]
    strh r1, [r4, #0xa0]
    strh r1, [r4, #0xa2]
    strh r1, [r4, #0xa4]
    str r1, [r4, #0x16c]
    mov r0, #0xff
    strh r0, [r4, #0xa6]
    str r1, [r4, #0xa8]
    mov r0, #0x3e8
    str r0, [r4, #0xac]
    str r1, [r4, #0xbc]
    str r1, [r4, #0xc0]
    str r1, [r4, #0xc4]
    str r1, [r4, #0xb0]
    str r1, [r4, #0xb4]
    add r0, r4, #0xc8
    str r1, [r4, #0xb8]
    bl func_02066f88
    mov r1, #0x800
    str r1, [r4, #0xf8]
    mov r2, #0x0
    str r2, [r4, #0xfc]
    str r2, [r4, #0x100]
    str r2, [r4, #0x104]
    str r1, [r4, #0x120]
    ldr r0, =0x19a
    add r1, r4, #0x160
    str r0, [r4, #0x124]
    str r0, [r4, #0x128]
    str r2, [r4, #0x12c]
    mov r0, #0x1
    str r0, [r4, #0x168]
    swpb r0, r2, [r1]
    str r2, [r4, #0x170]
    str r2, [r4, #0x174]
    str r2, [r4, #0x178]
    str r2, [r4, #0x17c]
    str r2, [r4, #0x180]
    str r2, [r4, #0x184]
    str r2, [r4, #0x188]
    ldrsh r1, [r4, #0x94]
    add r0, r4, #0x190
    bl func_0208bad4
    add r0, r4, #0x100
    mov r2, #0x0
    strh r2, [r0, #0xdc]
    str r2, [r4, #0x1e0]
    str r2, [r4, #0x1f4]
    str r2, [r4, #0x1f8]
    str r2, [r4, #0x1fc]
    str r2, [r4, #0x1f0]
    str r2, [r4, #0x200]
    str r2, [r4, #0x204]
    str r2, [r4, #0x208]
    str r2, [r4, #0x20c]
    ldr r1, =func_020a74b8
    mov r0, r4
    str r2, [r4, #0x210]
    bl func_020ca4b0
    ldr r1, =func_020a7490
    mov r0, r4
    bl func_020ca4a8
    ldr r0, [r4, #0x1c]
    cmp r0, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    cmp r4, #0x0
    beq L_020a7aa0
    ldr r1, =data_027c0bbc
    mov r0, r4
    ldrb r3, [r1, #0x0]
    ldrb r2, [r1, #0x1]
    ldrb ip, [r1, #0x2]
    orr r1, r3, r2, lsl #0x5
    orr r1, r1, ip, lsl #0xa
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    bl func_020ca750
L_020a7aa0:
    ldr r1, =0x7fff
    mov r0, r4
    bl func_020ca78c
    mov r0, r4
    mov r1, #0x3
    bl func_020ca73c
    mov r0, #0x1000
    str r0, [r4, #0x24]
    str r0, [r4, #0x28]
    str r0, [r4, #0x2c]
    ldrh r0, [r4, #0x20]
    orr r0, r0, #0x1
    strh r0, [r4, #0x20]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
