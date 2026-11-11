#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02039358();
extern void func_02039394();
extern void func_020393d0();
extern void func_0203e280();
extern char data_0213931d[];
extern char data_02153720[];
// clang-format off
asm void func_ov002_0218781c(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldrsb r1, [r4, #0xa4]
    cmp r1, #0x5
    addls pc, pc, r1, lsl #0x2
    b L_02187998
L_02187834:
    b L_021878dc
    b L_021878dc
    b L_02187890
    b L_02187884
    b L_02187878
    b L_0218784c
L_0218784c:
    add r0, r4, #0x278
    add r3, r4, #0x3d8
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r2, r4, #0xb1
    mov r1, #0x9
    swpb r1, r1, [r2]
    mov r0, r4
    bl func_02039358
    ldmfd sp!, {r4, lr}
    bx lr
L_02187878:
    bl func_02039394
    ldmfd sp!, {r4, lr}
    bx lr
L_02187884:
    bl func_020393d0
    ldmfd sp!, {r4, lr}
    bx lr
L_02187890:
    ldr r0, =data_02153720
    add r3, r4, #0x3d8
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x1c]
    add r0, r0, #0x30
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r4
    mov r1, #0x2
    mov r2, #0x10
    bl func_0203e280
    add r1, r4, #0xb1
    mov r0, #0x9
    swpb r0, r0, [r1]
    add r1, r4, #0xb0
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_021878dc:
    add r0, r4, #0x100
    ldrh r0, [r0, #0x2c]
    cmp r0, #0x0
    beq L_02187950
    add r1, r4, #0xb0
    mov ip, #0x2
    swpb r0, ip, [r1]
    add r3, r4, #0x3d8
    add r0, r4, #0x278
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r4
    mov r1, ip
    mov r2, #0x4
    bl func_0203e280
    ldr r0, [r4, #0x9e4]
    mov r1, #0x64
    ldrh r3, [r0, #0x0]
    ldr r2, =data_0213931d
    mov r0, r4
    mul r1, r3, r1
    ldrsb r2, [r2, r1]
    mov r1, #0x3
    add r2, r2, #0x2
    mov r2, r2, lsl #0x10
    mov r2, r2, asr #0x10
    bl func_0203e280
    ldmfd sp!, {r4, lr}
    bx lr
L_02187950:
    add r1, r4, #0xb0
    mov ip, #0x0
    swpb r0, ip, [r1]
    ldr r0, =data_02153720
    add r3, r4, #0x3d8
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x1c]
    add r0, r0, #0x30
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r4
    mov r2, ip
    mov r1, #0x2
    bl func_0203e280
    mov r0, r4
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e280
L_02187998:
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
