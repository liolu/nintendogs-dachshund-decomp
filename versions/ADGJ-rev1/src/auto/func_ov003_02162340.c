#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020091f8();
extern void func_020093c8();
extern void func_020280f8();
extern void func_02029204();
extern void func_0203e2b8();
extern void func_020e17e0();
extern void func_020e2e24();
extern void func_020e2e40();
extern void func_ov003_02157ed4();
extern void func_ov003_02157f0c();
extern void func_ov003_02157f44();
extern void func_ov003_02165bc4();
extern char data_ov003_0216bd58[];
// clang-format off
asm void func_ov003_02162340(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x38
    mov r7, r0
    mov r0, #0x0
    str r0, [r7, #0x4a8]
    ldr r2, [r7, #0x2a0]
    ldr r0, [r7, #0x4a8]
    mov r6, r1
    sub r0, r2, r0
    str r0, [r7, #0x2a0]
    ldr r1, [r7, #0x414]
    ldr r0, [r7, #0x4a8]
    sub r0, r1, r0
    str r0, [r7, #0x414]
    ldr r1, [r7, #0x420]
    ldr r0, [r7, #0x4a8]
    sub r0, r1, r0
    str r0, [r7, #0x420]
    ldr r0, [r7, #0x4ac]
    add r0, r0, #0x1
    str r0, [r7, #0x4ac]
    bl func_020e2e24
    cmp r0, #0x0
    beq L_021623a8
    ldr r0, [r7, #0x4a8]
    bl func_020e17e0
L_021623a8:
    mov r0, r7
    bl func_ov003_02165bc4
    add r0, r7, #0x100
    ldrh r0, [r0, #0xa]
    cmp r0, #0x1e
    bne L_021624b8
    ldr r5, =data_ov003_0216bd58
    add r4, sp, #0x14
    ldmia r5!, {r0, r1, r2, r3}
    stmia r4!, {r0, r1, r2, r3}
    ldmia r5!, {r0, r1, r2, r3}
    stmia r4!, {r0, r1, r2, r3}
    ldr r1, [r5, #0x0]
    mov r0, r7
    str r1, [r4, #0x0]
    bl func_020280f8
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
    bl func_020093c8
    str r0, [r7, #0x488]
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
    bl func_020093c8
    str r0, [r7, #0x48c]
    mov r2, r8
L_02162490:
    add r0, r7, r2, lsl #0x2
    ldr r1, [r0, #0x488]
    add r0, r2, #0x1
    add r1, r7, r1, lsl #0x2
    mov r0, r0, lsl #0x10
    ldr r1, [r1, #0x914]
    mov r2, r0, asr #0x10
    str r5, [r1, #0x50]
    cmp r2, #0x2
    blt L_02162490
L_021624b8:
    add r0, r7, #0x100
    ldrh r0, [r0, #0xa]
    cmp r0, #0x3c
    bne L_0216252c
    bl func_020e2e40
    cmp r0, #0x0
    beq L_0216252c
    ldrsh r0, [r7, #0xf0]
    cmp r0, #0x4e
    bne L_0216252c
    mov r0, r7
    bl func_02029204
    ldrsb r0, [r7, #0xce]
    cmp r0, #0x1
    beq L_02162508
    cmp r0, #0x2
    beq L_02162510
    cmp r0, #0x3
    beq L_0216251c
    b L_02162520
L_02162508:
    bl func_ov003_02157f0c
    b L_02162520
L_02162510:
    mov r0, #0x1
    bl func_ov003_02157f44
    b L_02162520
L_0216251c:
    bl func_ov003_02157ed4
L_02162520:
    add r1, r7, #0xce
    mov r0, #0x0
    swpb r0, r0, [r1]
L_0216252c:
    add r0, r7, #0x100
    ldrh r0, [r0, #0xa]
    cmp r0, #0xfa
    bne L_0216255c
    mov r0, r7
    mov r1, #0x2e
    mov r2, #0x4
    bl func_020091f8
    mov r0, r7
    mov r1, #0x2f
    mov r2, #0x4
    bl func_020091f8
L_0216255c:
    add r0, r7, #0x100
    ldrh r0, [r0, #0xa]
    cmp r0, #0x12c
    addne sp, sp, #0x38
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bxne lr
    ldr r1, =0x485
    mov r0, r7
    add r1, r6, r1
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_0203e2b8
    add sp, sp, #0x38
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
}
// clang-format on
