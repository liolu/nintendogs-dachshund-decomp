#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02023580();
extern void func_02025594();
extern void func_020264e4();
extern void func_0202d6e0();
extern void func_02081208();
extern void func_0208ff8c();
extern char data_021384b0[];
extern char data_021384c8[];
extern char data_021384e0[];
extern char data_0214da84[];
extern char data_0215a02c[];
// clang-format off
asm void func_ov003_0215afe0(void) {
    stmfd sp!, {r4, lr}
    ldr r1, =data_0214da84
    ldr r2, =0x1f2
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
    strh r2, [r1, #0x52]
    add r2, r4, #0x97
    mov r1, #0x2
    swpb r1, r1, [r2]
    bl func_020264e4
    mov r0, r4
    bl func_02025594
    mov r0, r4
    mov r1, #0x5
    bl func_0202d6e0
    ldr r0, =data_0215a02c
    ldrsb r3, [r4, #0x88]
    ldr r0, [r0, #0x0]
    ldr r2, =data_021384e0
    cmp r0, #0x0
    ldrne r0, [r0, #0x0]
    ldr r2, [r2, r3, lsl #0x2]
    moveq r0, #0x0
    mov r1, #0x3f
    bl func_02081208
    ldr r0, =data_0215a02c
    ldrsb r3, [r4, #0x88]
    ldr r0, [r0, #0x0]
    ldr r2, =data_021384e0
    cmp r0, #0x0
    ldrne r0, [r0, #0x0]
    ldr r2, [r2, r3, lsl #0x2]
    moveq r0, #0x0
    mov r1, #0x40
    bl func_02081208
    ldr r0, =data_0215a02c
    ldrsb r3, [r4, #0x88]
    ldr r0, [r0, #0x0]
    ldr r2, =data_021384e0
    cmp r0, #0x0
    ldrne r0, [r0, #0x0]
    ldr r2, [r2, r3, lsl #0x2]
    moveq r0, #0x0
    mov r1, #0x41
    bl func_02081208
    ldr r0, =data_0215a02c
    ldrsb r3, [r4, #0x88]
    ldr r0, [r0, #0x0]
    ldr r2, =data_021384c8
    cmp r0, #0x0
    ldrne r0, [r0, #0x0]
    ldr r2, [r2, r3, lsl #0x2]
    moveq r0, #0x0
    mov r1, #0x42
    bl func_02081208
    ldr r0, =data_0215a02c
    ldrsb r3, [r4, #0x88]
    ldr r0, [r0, #0x0]
    ldr r2, =data_021384c8
    cmp r0, #0x0
    ldrne r0, [r0, #0x0]
    ldr r2, [r2, r3, lsl #0x2]
    moveq r0, #0x0
    mov r1, #0x43
    bl func_02081208
    ldr r0, =data_0215a02c
    ldrsb r3, [r4, #0x88]
    ldr r0, [r0, #0x0]
    ldr r2, =data_021384c8
    cmp r0, #0x0
    ldrne r0, [r0, #0x0]
    ldr r2, [r2, r3, lsl #0x2]
    moveq r0, #0x0
    mov r1, #0x44
    bl func_02081208
    ldr r0, =data_0215a02c
    ldrsb r3, [r4, #0x88]
    ldr r0, [r0, #0x0]
    ldr r2, =data_021384b0
    cmp r0, #0x0
    ldrne r0, [r0, #0x0]
    ldr r2, [r2, r3, lsl #0x2]
    moveq r0, #0x0
    mov r1, #0x45
    bl func_02081208
    ldr r0, =data_0215a02c
    ldrsb r3, [r4, #0x88]
    ldr r0, [r0, #0x0]
    ldr r2, =data_021384b0
    cmp r0, #0x0
    ldrne r0, [r0, #0x0]
    ldr r2, [r2, r3, lsl #0x2]
    moveq r0, #0x0
    mov r1, #0x46
    bl func_02081208
    ldr r0, =data_0215a02c
    ldrsb r3, [r4, #0x88]
    ldr r0, [r0, #0x0]
    ldr r2, =data_021384b0
    cmp r0, #0x0
    ldrne r0, [r0, #0x0]
    ldr r2, [r2, r3, lsl #0x2]
    moveq r0, #0x0
    mov r1, #0x47
    bl func_02081208
    mov r0, r4
    bl func_02023580
    mov r0, #0x51
    bl func_0208ff8c
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
