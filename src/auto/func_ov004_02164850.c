#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200925c();
extern void func_02009434();
extern void func_02028120();
extern void func_02029248();
extern void func_0203e5e8();
extern void func_021058ac();
extern void func_02106ef0();
extern void func_02106f0c();
extern void func_ov004_0215a354();
extern void func_ov004_0215a38c();
extern void func_ov004_0215a3c4();
extern void func_ov004_02168094();
extern char data_ov004_0216e308[];
// clang-format off
asm void func_ov004_02164850(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x38
    mov r7, r0
    mov r0, #0x0
    str r0, [r7, #0x484]
    ldr r2, [r7, #0x2a0]
    ldr r0, [r7, #0x484]
    mov r6, r1
    sub r0, r2, r0
    str r0, [r7, #0x2a0]
    ldr r1, [r7, #0x3f0]
    ldr r0, [r7, #0x484]
    sub r0, r1, r0
    str r0, [r7, #0x3f0]
    ldr r1, [r7, #0x3fc]
    ldr r0, [r7, #0x484]
    sub r0, r1, r0
    str r0, [r7, #0x3fc]
    ldr r0, [r7, #0x488]
    add r0, r0, #0x1
    str r0, [r7, #0x488]
    bl func_02106ef0
    cmp r0, #0x0
    beq L_021648b8
    ldr r0, [r7, #0x484]
    bl func_021058ac
L_021648b8:
    mov r0, r7
    bl func_ov004_02168094
    ldrh r0, [r7, #0xfc]
    cmp r0, #0x1e
    bne L_021649c4
    ldr r5, =data_ov004_0216e308
    add r4, sp, #0x14
    ldmia r5!, {r0, r1, r2, r3}
    stmia r4!, {r0, r1, r2, r3}
    ldmia r5!, {r0, r1, r2, r3}
    stmia r4!, {r0, r1, r2, r3}
    ldr r1, [r5, #0x0]
    mov r0, r7
    str r1, [r4, #0x0]
    bl func_02028120
    ldr r5, =0x133
    mov r8, #0x0
    umull r10, r9, r0, r5
    mov lr, #0x800
    mla r9, r0, r8, r9
    mov ip, r0, asr #0x1f
    add r2, sp, #0x14
    mov r1, #0xc
    mla r4, r6, r1, r2
    mov r1, #0x4
    str r1, [sp, #0x0]
    str r8, [sp, #0x4]
    str r4, [sp, #0x8]
    str r8, [sp, #0xc]
    mla r9, ip, r5, r9
    adds r10, r10, lr
    adc r0, r9, #0x0
    mov r5, r10, lsr #0xc
    orr r5, r5, r0, lsl #0x14
    mov r0, r5, lsl #0x10
    mov r5, r0, asr #0x10
    str r8, [sp, #0x10]
    mov r1, #0x2e
    mov r2, #0x2
    mov r3, #0x1
    mov r0, r7
    bl func_02009434
    str r0, [r7, #0x464]
    mov r0, #0x4
    str r0, [sp, #0x0]
    mov r0, r8
    str r0, [sp, #0x4]
    str r4, [sp, #0x8]
    str r0, [sp, #0xc]
    str r0, [sp, #0x10]
    mov r0, r7
    mov r1, #0x2f
    mov r2, #0x2
    mov r3, #0x1
    bl func_02009434
    str r0, [r7, #0x468]
    mov r2, r8
L_0216499c:
    add r0, r7, r2, lsl #0x2
    ldr r1, [r0, #0x464]
    add r0, r2, #0x1
    add r1, r7, r1, lsl #0x2
    mov r0, r0, lsl #0x10
    ldr r1, [r1, #0x8fc]
    mov r2, r0, asr #0x10
    str r5, [r1, #0x50]
    cmp r2, #0x2
    blt L_0216499c
L_021649c4:
    ldrh r0, [r7, #0xfc]
    cmp r0, #0x3c
    bne L_02164a34
    bl func_02106f0c
    cmp r0, #0x0
    beq L_02164a34
    ldrsh r0, [r7, #0xf0]
    cmp r0, #0x4e
    bne L_02164a34
    mov r0, r7
    bl func_02029248
    ldrsb r0, [r7, #0xb7]
    cmp r0, #0x1
    beq L_02164a10
    cmp r0, #0x2
    beq L_02164a18
    cmp r0, #0x3
    beq L_02164a24
    b L_02164a28
L_02164a10:
    bl func_ov004_0215a38c
    b L_02164a28
L_02164a18:
    mov r0, #0x1
    bl func_ov004_0215a3c4
    b L_02164a28
L_02164a24:
    bl func_ov004_0215a354
L_02164a28:
    add r1, r7, #0xb7
    mov r0, #0x0
    swpb r0, r0, [r1]
L_02164a34:
    ldr r0, [r7, #0x46c]
    ldrh r1, [r7, #0xfc]
    sub r0, r0, #0x32
    cmp r1, r0
    bne L_02164a68
    mov r0, r7
    mov r1, #0x2e
    mov r2, #0x4
    bl func_0200925c
    mov r0, r7
    mov r1, #0x2f
    mov r2, #0x4
    bl func_0200925c
L_02164a68:
    ldrh r1, [r7, #0xfc]
    ldr r0, [r7, #0x46c]
    cmp r1, r0
    addne sp, sp, #0x38
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bxne lr
    ldr r1, =0x486
    mov r0, r7
    add r1, r6, r1
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_0203e5e8
    add sp, sp, #0x38
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
}
// clang-format on
