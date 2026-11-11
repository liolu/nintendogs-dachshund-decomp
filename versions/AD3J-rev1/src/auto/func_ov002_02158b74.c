#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202354c();
extern void func_0202554c();
extern void func_0202649c();
extern void func_0202d5f0();
extern void func_02084980();
extern void func_020f07b4();
extern char data_02136d98[];
extern char data_02136db0[];
extern char data_02136dc8[];
extern char data_0214b484[];
extern char data_02154c9c[];
// clang-format off
asm void func_ov002_02158b74(void) {
    stmfd sp!, {r4, lr}
    ldr r1, =data_0214b484
    ldr r2, =0x1f1
    ldr ip, [r1, #0x0]
    ldr r1, =0x10dcd
    ldr r3, [ip, #0x0]
    mov r4, r0
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x1f
    mov r1, r1, lsl #0x10
    add r2, r2, r1, lsr #0x10
    str r3, [ip, #0x0]
    add r1, r4, #0x100
    strh r2, [r1, #0x50]
    add r2, r4, #0xb0
    mov r1, #0x2
    swpb r1, r1, [r2]
    bl func_0202649c
    mov r0, r4
    bl func_0202554c
    mov r0, r4
    mov r1, #0x5
    bl func_0202d5f0
    ldr r0, =data_02154c9c
    ldrsb r3, [r4, #0x88]
    ldr r0, [r0, #0x0]
    ldr r2, =data_02136dc8
    cmp r0, #0x0
    ldrne r0, [r0, #0x0]
    ldr r2, [r2, r3, lsl #0x2]
    moveq r0, #0x0
    mov r1, #0x3f
    bl func_02084980
    ldr r0, =data_02154c9c
    ldrsb r3, [r4, #0x88]
    ldr r0, [r0, #0x0]
    ldr r2, =data_02136dc8
    cmp r0, #0x0
    ldrne r0, [r0, #0x0]
    ldr r2, [r2, r3, lsl #0x2]
    moveq r0, #0x0
    mov r1, #0x40
    bl func_02084980
    ldr r0, =data_02154c9c
    ldrsb r3, [r4, #0x88]
    ldr r0, [r0, #0x0]
    ldr r2, =data_02136dc8
    cmp r0, #0x0
    ldrne r0, [r0, #0x0]
    ldr r2, [r2, r3, lsl #0x2]
    moveq r0, #0x0
    mov r1, #0x41
    bl func_02084980
    ldr r0, =data_02154c9c
    ldrsb r3, [r4, #0x88]
    ldr r0, [r0, #0x0]
    ldr r2, =data_02136db0
    cmp r0, #0x0
    ldrne r0, [r0, #0x0]
    ldr r2, [r2, r3, lsl #0x2]
    moveq r0, #0x0
    mov r1, #0x42
    bl func_02084980
    ldr r0, =data_02154c9c
    ldrsb r3, [r4, #0x88]
    ldr r0, [r0, #0x0]
    ldr r2, =data_02136db0
    cmp r0, #0x0
    ldrne r0, [r0, #0x0]
    ldr r2, [r2, r3, lsl #0x2]
    moveq r0, #0x0
    mov r1, #0x43
    bl func_02084980
    ldr r0, =data_02154c9c
    ldrsb r3, [r4, #0x88]
    ldr r0, [r0, #0x0]
    ldr r2, =data_02136db0
    cmp r0, #0x0
    ldrne r0, [r0, #0x0]
    ldr r2, [r2, r3, lsl #0x2]
    moveq r0, #0x0
    mov r1, #0x44
    bl func_02084980
    ldr r0, =data_02154c9c
    ldrsb r3, [r4, #0x88]
    ldr r0, [r0, #0x0]
    ldr r2, =data_02136d98
    cmp r0, #0x0
    ldrne r0, [r0, #0x0]
    ldr r2, [r2, r3, lsl #0x2]
    moveq r0, #0x0
    mov r1, #0x45
    bl func_02084980
    ldr r0, =data_02154c9c
    ldrsb r3, [r4, #0x88]
    ldr r0, [r0, #0x0]
    ldr r2, =data_02136d98
    cmp r0, #0x0
    ldrne r0, [r0, #0x0]
    ldr r2, [r2, r3, lsl #0x2]
    moveq r0, #0x0
    mov r1, #0x46
    bl func_02084980
    ldr r0, =data_02154c9c
    ldrsb r3, [r4, #0x88]
    ldr r0, [r0, #0x0]
    ldr r2, =data_02136d98
    cmp r0, #0x0
    ldrne r0, [r0, #0x0]
    ldr r2, [r2, r3, lsl #0x2]
    moveq r0, #0x0
    mov r1, #0x47
    bl func_02084980
    mov r0, r4
    bl func_0202354c
    mov r0, #0x51
    bl func_020f07b4
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
