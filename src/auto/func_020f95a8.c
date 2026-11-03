#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void _u32_div_f();
extern void func_020f7aac();
extern void func_020f7cd4();
extern void func_020f7d30();
extern void func_020f7da8();
extern void func_020f803c();
extern void func_020f82dc();
extern void func_020f98e8();
extern char data_021473fc[];
extern char data_02147400[];
extern char data_021558a8[];
extern char data_021558ac[];
extern char data_021558b0[];
extern char data_021558b4[];
extern char data_021558b8[];
extern char data_021558bc[];
extern char data_021558c8[];
extern char data_021558cc[];
extern char data_021558d0[];
extern char data_021558d4[];
extern char data_021558d8[];
// clang-format off
asm void func_020f95a8(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x1c
    ldr r0, =data_021558d0
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    beq L_02099034
    bl func_020f7aac
    ldr r3, =data_02147400
    ldr r1, =data_021558c8
    mov r4, #0x1
    ldr r2, =data_021558d4
    str r4, [r1, #0x0]
    str r0, [sp, #0x4]
    ldr r3, [r3, #0x0]
    ldr r1, [r2, #0x0]
    ldrsh r0, [r0, #0x0]
    sub r2, r3, r1
    mov r10, #0x0
    cmp r2, r0
    movhi r2, r0
    ldrls r0, =data_021558d0
    movls r1, #0x0
    strls r1, [r0, #0x0]
    bics r0, r2, #0x1
    str r0, [sp, #0x8]
    beq L_02098fdc
    mov r0, #0x2
    ldr r5, =data_021558ac
    ldr r6, =data_021558d8
    ldr r4, =data_021558b0
    add r11, sp, #0x14
    str r10, [sp, #0xc]
    str r0, [sp, #0x10]
L_02098ea8:
    ldr r9, [sp, #0xc]
L_02098eac:
    ldr r0, =data_021558d4
    ldr r2, [r0, #0x0]
    ldr r0, =data_02147400
    add r8, r2, r10
    ldr r1, [r0, #0x0]
    ldr r0, =0xcccccccd
    umull r0, r7, r1, r0
    mov r7, r7, lsr #0x5
    mov r0, r8
    mov r1, r7
    bl _u32_div_f
    cmp r1, #0x0
    bne L_02098f2c
    mov r0, r8
    mov r1, r7
    bl _u32_div_f
    ldrsh r3, [r5, #0x0]
    mov r2, r0, lsl #0x2
    ldrsh r1, [r6, r2]
    cmp r3, r1
    bne L_02098f14
    add r1, r6, r2
    ldrsb r1, [r1, #0x2]
    ldrsb r2, [r5, #0x2]
    cmp r2, r1
    beq L_02098f2c
L_02098f14:
    mov r3, r0, lsl #0x2
    add r2, r6, r0, lsl #0x2
    ldrh r1, [r5, #0x0]
    ldrh r0, [r5, #0x2]
    strh r1, [r6, r3]
    strh r0, [r2, #0x2]
L_02098f2c:
    ldr r0, [sp, #0x4]
    add r0, r0, r10, lsl #0x1
    ldrsh r1, [r0, #0x6]
    mov r0, #0x96
    add r10, r10, #0x1
    smulbb r2, r1, r0
    ldr r0, =0x51eb851f
    smull r1, r3, r0, r2
    mov r0, r2, lsr #0x1f
    mov r3, r3, asr #0x5
    add r3, r0, r3
    ldr r0, [r4, #0x0]
    ldrsb r1, [r0, #0x0]
    add r2, r3, r1, lsl #0x6
    ldr r1, =0x7ff0
    cmp r2, r1
    movgt r2, r1
    bgt L_02098f80
    ldr r1, =0xffff8010
    cmp r2, r1
    movlt r2, r1
L_02098f80:
    mov r1, r9, lsl #0x1
    strh r2, [r11, r1]
    ldrsh r1, [r11, r1]
    ldr r2, [r4, #0x0]
    add r9, r9, #0x1
    add r2, r2, #0x1
    str r2, [r4, #0x0]
    mov r1, r1, asr #0x8
    swpb r1, r1, [r0]
    cmp r9, #0x2
    blt L_02098eac
    ldr r0, =data_021558a8
    ldr r2, =data_021558a8
    ldr r1, [r0, #0x0]
    mov r0, r11
    add r3, r1, #0x1
    str r3, [r2, #0x0]
    ldr r2, [sp, #0x10]
    mov r3, r5
    bl func_020f803c
    ldr r0, [sp, #0x8]
    cmp r10, r0
    blo L_02098ea8
L_02098fdc:
    ldr r1, =data_021558d4
    ldr r0, =data_021558cc
    ldr r3, [r1, #0x0]
    ldr r2, [r0, #0x0]
    ldr r0, [sp, #0x8]
    cmp r2, #0x1
    add r3, r3, r0
    str r3, [r1, #0x0]
    bne L_02099008
    bl func_020f98e8
    b L_02099034
L_02099008:
    ldr r0, =data_02147400
    ldr r0, [r0, #0x0]
    cmp r3, r0
    bne L_02099034
    bl func_020f7cd4
    mov r0, #0x1f40
    bl func_020f7da8
    bl func_020f7d30
    ldr r0, =data_021558d0
    mov r1, #0x0
    str r1, [r0, #0x0]
L_02099034:
    ldr r0, =data_021473fc
    ldr r7, [r0, #0x0]
    cmp r7, #0x28
    addhs sp, sp, #0x1c
    ldmhsfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxhs lr
    ldr r0, =data_021558b8
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    addeq sp, sp, #0x1c
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    ldr r1, =data_02147400
    ldr r2, =data_021558bc
    ldr r3, [r1, #0x0]
    ldr r1, =0xcccccccd
    add r4, r7, #0x1
    umull r1, r6, r3, r1
    mov r6, r6, lsr #0x5
    ldr r5, [r2, #0x0]
    mul r2, r7, r6
    mul r3, r4, r6
    ldr r1, =data_021558b4
    str r5, [sp, #0x0]
    ldr r1, [r1, #0x0]
    bl func_020f82dc
    ldr r0, =data_02147400
    ldr r2, =data_021473fc
    ldr r1, =data_021558bc
    ldr r4, [r2, #0x0]
    ldr r3, [r0, #0x0]
    ldr r0, =0xcccccccd
    add r5, r4, #0x1
    umull r0, r4, r3, r0
    ldr r0, [r1, #0x0]
    mov r4, r4, lsr #0x5
    add r0, r0, r4
    str r5, [r2, #0x0]
    str r0, [r1, #0x0]
    add sp, sp, #0x1c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
