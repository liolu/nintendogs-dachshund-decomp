#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff832c();
extern void func_02026468();
extern void func_02026484();
extern void func_02028120();
extern void func_02034e44();
extern void func_0203535c();
extern void func_0203547c();
extern void func_02037130();
extern void func_02039128();
extern void func_02039948();
extern void func_020399a4();
extern void func_0203e5ac();
extern void func_0203e5e8();
extern void func_0204496c();
extern void func_020a5a1c();
extern void func_020a5d54();
extern void func_02114564();
extern void func_02114658();
extern void func_02114690();
extern void func_ov003_02177c58();
extern char data_0214da80[];
extern char data_0214da84[];
extern char data_02150e58[];
extern char data_0215a064[];
// clang-format off
asm void func_ov003_021766e8(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x30
    mov r5, r0
    mov r4, #0x1
    bl func_02039128
    ldr r0, =data_0214da80
    add r1, r5, #0x278
    ldr r0, [r0, #0x0]
    bl func_02114690
    cmp r0, #0x0
    beq L_021767e4
    ldr r1, =data_02150e58
    mov r0, r5
    ldr r3, [r1, #0x54]
    ldr r2, [r1, #0x60]
    ldr r1, [r1, #0x6c]
    str r3, [sp, #0x20]
    str r2, [sp, #0x24]
    str r1, [sp, #0x28]
    bl func_02028120
    ldr r2, =0x19a
    mov ip, #0x0
    umull r7, r6, r0, r2
    mla r6, r0, ip, r6
    mov r0, r0, asr #0x1f
    mov r3, #0x800
    mla r6, r0, r2, r6
    adds r3, r7, r3
    add r1, sp, #0x20
    mov r0, r3, lsr #0xc
    adc r2, r6, #0x0
    orr r0, r0, r2, lsl #0x14
    mov r3, r1
    add r2, r5, #0x2e8
    bl func_01ff832c
    ldr r0, =data_0214da80
    add r2, sp, #0x20
    ldr r0, [r0, #0x0]
    add r1, r5, #0x3b4
    bl func_02114658
    mov r0, r5
    bl func_02028120
    ldr r2, =0x802
    mov r6, #0x0
    umull r8, r7, r0, r2
    mov r3, #0x800
    mla r7, r0, r6, r7
    mov lr, r0, asr #0x1f
    mla r7, lr, r2, r7
    adds r3, r8, r3
    ldr r1, [r5, #0x3b8]
    adc r0, r7, #0x0
    mov r2, r3, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    add r0, r1, r2
    ldr ip, =data_0215a064
    str r0, [r5, #0x3b8]
    ldr r0, [ip, #0x0]
    ldrh r0, [r0, #0x84]
    ands r0, r0, #0x2
    strne r6, [r5, #0x450]
    strne r6, [r5, #0x454]
    b L_021767f4
L_021767e4:
    add r0, r5, #0x278
    add r3, r5, #0x3b4
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
L_021767f4:
    mov r0, r5
    mov r1, #0x300
    bl func_02037130
    add r0, r5, #0x100
    ldrsh r1, [r0, #0x52]
    ldr r0, =0x111
    cmp r1, r0
    bne L_021768d8
    ldrh r0, [r5, #0xfc]
    cmp r0, #0x78
    bls L_02176a04
    ldr r0, =0x4000304
    ldrh r0, [r0, #0x0]
    and r0, r0, #0x8000
    movs r0, r0, asr #0xf
    bne L_02176a04
    mov r0, r5
    bl func_02028120
    mov r6, r0
    mov r0, r5
    bl func_02028120
    smull r2, r1, r0, r6
    mov r0, #0x800
    adds r2, r2, r0
    adc r1, r1, #0x0
    mov r6, r2, lsr #0xc
    orr r6, r6, r1, lsl #0x14
    ldr r3, =0x802
    mov ip, #0x0
    umull r2, lr, r6, r3
    mla lr, r6, ip, lr
    mov r6, r6, asr #0x1f
    adds r2, r2, r0
    mla lr, r6, r3, lr
    ldr r1, =data_0214da80
    mov r2, r2, lsr #0xc
    ldr r0, [r1, #0x0]
    adc r3, lr, #0x0
    add r1, r5, #0x2e8
    orr r2, r2, r3, lsl #0x14
    bl func_02114564
    cmp r0, #0x0
    beq L_02176a04
    ldr r2, =0x166
    mov r0, r5
    mov r1, #0x0
    bl func_0203e5ac
    mov r0, r5
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e5ac
    mov r0, r5
    bl func_02026468
    add r1, r5, #0x93
    mov r0, #0x8
    swpb r0, r0, [r1]
    b L_02176a04
L_021768d8:
    bl func_020a5d54
    ldrsb r1, [r5, #0x88]
    cmp r1, r0
    bne L_021769b8
    bl func_0204496c
    ldrsb r1, [r5, #0x88]
    cmp r1, r0
    bne L_021769b8
    mov r0, r5
    mov r1, #0x1b
    bl func_0203547c
    cmp r0, #0x0
    beq L_021769b8
    mov r0, r5
    bl func_02028120
    mov r6, r0
    mov r0, r5
    bl func_02028120
    smull r2, r1, r0, r6
    mov r0, #0x800
    adds r2, r2, r0
    adc r1, r1, #0x0
    mov lr, r2, lsr #0xc
    orr lr, lr, r1, lsl #0x14
    ldr r3, =0x802
    mov ip, #0x0
    umull r2, r6, lr, r3
    mla r6, lr, ip, r6
    mov ip, lr, asr #0x1f
    adds r2, r2, r0
    mla r6, ip, r3, r6
    ldr r1, =data_0214da80
    mov r2, r2, lsr #0xc
    ldr r0, [r1, #0x0]
    adc r3, r6, #0x0
    add r1, r5, #0x2e8
    orr r2, r2, r3, lsl #0x14
    bl func_02114564
    cmp r0, #0x0
    beq L_021769b8
    mov r0, r5
    bl func_020399a4
    cmp r0, #0x0
    beq L_0217699c
    ldrsb r1, [r5, #0x88]
    mov r0, #0x4
    bl func_020a5a1c
    mov r0, r5
    bl func_02039948
L_0217699c:
    mov r2, #0x0
    mov r0, r5
    mov r1, #0x3a8
    str r2, [r5, #0x48c]
    bl func_0203e5e8
    mov r4, #0x0
    b L_02176a04
L_021769b8:
    mov r0, r5
    bl func_0203535c
    cmp r0, #0x0
    beq L_02176a04
    ldr r2, =0x111
    mov r0, r5
    mov r1, #0x0
    bl func_0203e5ac
    mov r0, r5
    bl func_02034e44
    mov r2, r0
    mov r0, r5
    mov r1, #0x3
    bl func_0203e5ac
    mov r0, r5
    bl func_02026484
    add r1, r5, #0x93
    mov r0, #0x5
    swpb r0, r0, [r1]
L_02176a04:
    ldrh r0, [r5, #0xfc]
    mov r2, #0x0
    cmp r0, #0x64
    bls L_02176a50
    ldr r0, =data_0214da84
    ldr r1, =0x10dcd
    ldr r0, [r0, #0x0]
    mov r3, #0x3c
    ldr ip, [r0, #0x0]
    mul r1, ip, r1
    add ip, r1, #0x1
    mov r1, ip, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r3, r1, r3
    mov r1, r3, lsr #0x10
    mov r1, r1, lsl #0x10
    str ip, [r0, #0x0]
    movs r0, r1, lsr #0x10
    moveq r2, #0x1
L_02176a50:
    mov r1, #0x0
    str r1, [sp, #0x0]
    mov r0, #0x1
    str r0, [sp, #0x4]
    str r1, [sp, #0x8]
    str r2, [sp, #0xc]
    mov r0, #0x30
    str r0, [sp, #0x10]
    str r1, [sp, #0x14]
    mov r0, #0x3
    str r0, [sp, #0x18]
    mov r0, r5
    mov r3, r4
    mov r2, #0x1f8
    str r1, [sp, #0x1c]
    bl func_ov003_02177c58
    add sp, sp, #0x30
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on
