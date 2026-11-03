#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void _u32_div_f();
extern void func_020f7cd4();
extern void func_020f7d30();
extern void func_020f7da8();
extern void func_020f7e6c();
extern void func_020f803c();
extern void func_020f82dc();
extern void func_020f9cc8();
extern char data_021473fc[];
extern char data_02147400[];
extern char data_021558a8[];
extern char data_021558ac[];
extern char data_021558b0[];
extern char data_021558c4[];
extern char data_021558cc[];
extern char data_021558d0[];
extern char data_021558d4[];
extern char data_021558d8[];
// clang-format off
asm void func_020f9a60(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    mov r6, r0
    mov r5, r1
    mov r4, r2
    mov r7, r3
    bl func_020f7cd4
    mov r0, #0x1f40
    mul r1, r7, r0
    mov r0, r1, asr #0x7
    add r0, r1, r0, lsr #0x18
    mov r0, r0, asr #0x8
    bl func_020f7da8
    bl func_020f7d30
    ldr r1, =data_02147400
    ldr r0, =0x2040811
    ldr r1, [r1, #0x0]
    cmp r5, #0x0
    mul r1, r4, r1
    umull r0, r4, r1, r0
    sub r0, r1, r4
    add r4, r4, r0, lsr #0x1
    mov r4, r4, lsr #0x6
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r0, r5
    add r9, r6, #0xc
    add r8, r5, #0xc
    bl func_020f9cc8
    ldr r1, =data_021558c4
    bic r7, r4, #0x1
    ldr r11, [r1, #0x0]
    ldr r4, =data_021558d4
    ldr r10, =data_021558d0
    mov r0, #0x1
    ldr r2, =data_021558b0
    add ip, r9, r7
    ldr r3, =data_021558cc
    str ip, [r2, #0x0]
    mov r2, #0x0
    str r0, [r10, #0x0]
    str r7, [r4, #0x0]
    str r2, [r3, #0x0]
    cmp r11, #0x0
    bne L_020993b0
    str r0, [r1, #0x0]
    ldr r0, =data_02147400
    str r2, [sp, #0x0]
    ldr r3, [r0, #0x0]
    mov r0, r5
    mov r1, r6
    bl func_020f82dc
L_020993b0:
    ldrsh r1, [r8, #0x0]
    ldr r0, =data_021558ac
    strh r1, [r0, #0x0]
    ldrsb r1, [r8, #0x2]
    add r2, r0, #0x2
    swpb r1, r1, [r2]
    ldrsb r1, [r9, #0x0]
    bl func_020f7e6c
    ldr r0, =data_021558ac
    add r2, r8, #0x2
    ldrsh r1, [r0, #0x0]
    ldr r4, =data_02147400
    ldr r3, =0xcccccccd
    strh r1, [r8, #0x0]
    ldrsb r1, [r0, #0x2]
    mov r0, r7
    add r8, r8, #0x4
    swpb r1, r1, [r2]
    ldr r2, [r4, #0x0]
    umull r1, r4, r2, r3
    mov r4, r4, lsr #0x5
    mov r1, r4
    bl _u32_div_f
    mul r10, r0, r4
    ldr r5, =data_021558d8
    mov r1, r0, lsl #0x2
    add r0, r5, r0, lsl #0x2
    ldrh r1, [r5, r1]
    ldr r4, =data_021558ac
    ldrh r0, [r0, #0x2]
    strh r1, [r4, #0x0]
    cmp r10, r7
    strh r0, [r4, #0x2]
    add r8, r8, r10, lsr #0x1
    bhs L_020994f4
    mov r11, #0x2
L_02099440:
    ldr r0, =data_02147400
    ldr r1, =0xcccccccd
    ldr r2, [r0, #0x0]
    mov r0, r10
    umull r1, r6, r2, r1
    mov r6, r6, lsr #0x5
    mov r1, r6
    bl _u32_div_f
    cmp r1, #0x0
    bne L_020994b4
    mov r0, r10
    mov r1, r6
    bl _u32_div_f
    mov r2, r0, lsl #0x2
    ldrsh r3, [r4, #0x0]
    ldrsh r1, [r5, r2]
    cmp r3, r1
    bne L_0209949c
    add r1, r5, r2
    ldrsb r2, [r4, #0x2]
    ldrsb r1, [r1, #0x2]
    cmp r2, r1
    beq L_020994b4
L_0209949c:
    ldrh r2, [r4, #0x0]
    ldrh r1, [r4, #0x2]
    mov r3, r0, lsl #0x2
    add r0, r5, r0, lsl #0x2
    strh r2, [r5, r3]
    strh r1, [r0, #0x2]
L_020994b4:
    ldrsb r2, [r9, r10]
    add r1, r10, #0x1
    add r0, sp, #0x4
    mov r2, r2, lsl #0x8
    strh r2, [sp, #0x4]
    ldrsb r3, [r9, r1]
    mov r1, r8
    mov r2, r11
    mov r3, r3, lsl #0x8
    strh r3, [sp, #0x6]
    mov r3, r4
    add r10, r10, #0x2
    bl func_020f803c
    cmp r10, r7
    add r8, r8, #0x1
    blo L_02099440
L_020994f4:
    ldr r1, =data_021558a8
    ldr r0, =data_021473fc
    mov r2, #0x28
    str r8, [r1, #0x0]
    str r2, [r0, #0x0]
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
