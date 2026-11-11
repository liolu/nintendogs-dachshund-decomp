#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202354c();
extern void func_020254f0();
extern void func_02026bcc();
extern void func_0202d5f0();
extern void func_02084980();
extern void func_020f07b4();
extern char data_02136dc8[];
extern char data_021386c4[];
extern char data_0214b484[];
extern char data_02154c9c[];
// clang-format off
asm void func_ov002_0215aeac(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r2, r4, #0x100
    mov r3, #0x6c
    strh r3, [r2, #0x50]
    ldr r1, =data_0214b484
    add r3, r4, #0xb0
    ldr lr, [r1, #0x0]
    ldr r1, =0x10dcd
    ldr ip, [lr, #0x0]
    mul r1, ip, r1
    add ip, r1, #0x1
    mov r1, ip, lsl #0x10
    mov r1, r1, lsr #0x1f
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    str ip, [lr, #0x0]
    add r1, r1, #0x51
    strh r1, [r2, #0x52]
    mov r1, #0x4
    swpb r1, r1, [r3]
    bl func_02026bcc
    mov r0, r4
    bl func_020254f0
    ldr r1, =data_021386c4
    mov r0, r4
    ldr r1, [r1, #0x2c]
    bl func_0202d5f0
    ldr r0, =data_02154c9c
    ldrsb r3, [r4, #0x88]
    ldr r0, [r0, #0x0]
    ldr r2, =data_02136dc8
    cmp r0, #0x0
    ldrne r0, [r0, #0x0]
    ldr r2, [r2, r3, lsl #0x2]
    moveq r0, #0x0
    mov r1, #0x73
    bl func_02084980
    ldr r0, =data_02154c9c
    ldrsb r3, [r4, #0x88]
    ldr r0, [r0, #0x0]
    ldr r2, =data_02136dc8
    cmp r0, #0x0
    ldrne r0, [r0, #0x0]
    ldr r2, [r2, r3, lsl #0x2]
    moveq r0, #0x0
    mov r1, #0x72
    bl func_02084980
    ldr r0, =data_02154c9c
    ldrsb r3, [r4, #0x88]
    ldr r0, [r0, #0x0]
    ldr r2, =data_02136dc8
    cmp r0, #0x0
    ldrne r0, [r0, #0x0]
    ldr r2, [r2, r3, lsl #0x2]
    moveq r0, #0x0
    mov r1, #0x74
    bl func_02084980
    mov r0, r4
    bl func_0202354c
    mov r0, #0x51
    bl func_020f07b4
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
