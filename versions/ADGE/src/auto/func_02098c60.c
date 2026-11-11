#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0205e15c();
extern void func_02071ae4();
extern void func_02071ce4();
extern void func_02097a2c();
extern void func_02097b58();
extern void func_02099544();
extern void func_020c608c();
extern void func_020c629c();
extern char data_0213d1a8[];
extern char data_0213d1ac[];
extern char data_02154e2c[];
extern char data_02154e30[];
extern char data_02154e34[];
extern char data_02154e3c[];
// clang-format off
asm void func_02098c60(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x1c
    mov r9, r1
    mov r10, r0
    ldr r1, =data_02154e3c
    mov r4, #0x0
    mov r0, r9
    mov r11, r2
    mov r8, r3
    str r4, [r1, #0x0]
    ldr r7, [sp, #0x40]
    bl func_02099544
    ldr r1, =data_0213d1ac
    ldr r0, =0x2040811
    ldr r4, [r1, #0x0]
    ldr r1, =0xcccccccd
    mul r2, r7, r4
    umull r0, r7, r2, r0
    sub r0, r2, r7
    add r7, r7, r0, lsr #0x1
    umull r0, r5, r4, r1
    mov r7, r7, lsr #0x6
    mov r5, r5, lsr #0x5
    bic r0, r7, #0x1
    mov r1, r5
    str r0, [sp, #0x8]
    bl func_0205e15c
    mov r6, r0
    add r0, r6, #0x2
    mul r3, r0, r5
    cmp r3, r4
    movhs r3, r4
    mov r4, #0x0
    ldr r2, [sp, #0x8]
    mov r0, r9
    mov r1, r10
    str r4, [sp, #0x0]
    bl func_02097b58
    add r1, r6, #0x2
    ldr r0, =data_0213d1a8
    cmp r1, #0x28
    str r1, [r0, #0x0]
    movhs r1, #0x28
    strhs r1, [r0, #0x0]
    ldr r0, =data_0213d1ac
    ldr r3, =data_0213d1a8
    ldr r2, [r0, #0x0]
    ldr r0, =0xcccccccd
    ldr r1, =0x51eb851f
    umull r0, r5, r2, r0
    umull r0, r4, r2, r1
    ldr r2, =data_02154e30
    ldr r0, =data_02154e2c
    ldr r3, [r3, #0x0]
    mov r5, r5, lsr #0x5
    mul r5, r3, r5
    bic r6, r7, #0x1
    str r10, [r0, #0x0]
    mov r4, r4, lsr #0x5
    mov r3, #0x64
    mul r3, r4, r3
    ldr r4, =data_02154e34
    sub r5, r5, r6
    str r5, [r4, #0x0]
    sub r4, r3, r6
    mov r1, #0x0
    str r9, [r2, #0x0]
    str r1, [sp, #0x0]
    mov r0, r10
    mov r2, r1
    mov r3, #0x1f40
    str r4, [sp, #0x4]
    bl func_02097a2c
    mov r0, r11
    bl func_02071ce4
    cmp r0, #0x0
    addeq sp, sp, #0x1c
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    ldr r0, [r0, #0x0]
    bl func_02071ae4
    movs r7, r0
    addeq sp, sp, #0x1c
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    add r3, sp, #0xc
    mov r1, r8
    mov r2, #0x3c
    bl func_020c629c
    mov r4, r10, lsr #0x10
    add r3, sp, #0xc
    mov r6, #0x4
    strh r4, [sp, #0x10]
    swpb r4, r6, [r3]
    add r5, sp, #0x12
    mov r2, #0x3c
    mov r0, r7
    mov r1, r8
    strh r10, [sp, #0xe]
    swpb r4, r2, [r5]
    bl func_020c608c
    add sp, sp, #0x1c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
