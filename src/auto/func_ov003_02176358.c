#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff832c();
extern void func_02028120();
extern void func_02037130();
extern void func_02039128();
extern void func_0203e5ac();
extern void func_0206823c();
extern void func_02114564();
extern void func_02114658();
extern void func_ov003_02177c58();
extern char data_0214da80[];
extern char data_0214da84[];
extern char data_02150e58[];
extern char data_0215a064[];
// clang-format off
asm void func_ov003_02176358(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x38
    ldr r1, =data_02150e58
    mov r6, r0
    ldr r3, [r1, #0x54]
    ldr r2, [r1, #0x60]
    ldr r1, [r1, #0x6c]
    str r3, [sp, #0x2c]
    str r2, [sp, #0x30]
    str r1, [sp, #0x34]
    mov r5, #0x0
    mov r4, #0x3c
    bl func_02028120
    ldr r2, =0x1338
    mov r7, r5
    umull r9, r8, r0, r2
    mla r8, r0, r7, r8
    mov r0, r0, asr #0x1f
    mla r8, r0, r2, r8
    mov r3, #0x800
    adds r0, r9, r3
    add r1, sp, #0x2c
    adc r2, r8, #0x0
    mov r0, r0, lsr #0xc
    orr r0, r0, r2, lsl #0x14
    mov r3, r1
    add r2, r6, #0x2dc
    bl func_01ff832c
    ldr r0, =data_0214da80
    add r1, sp, #0x20
    ldr r0, [r0, #0x0]
    add r2, sp, #0x2c
    bl func_02114658
    mov r0, r6
    bl func_02028120
    ldr r7, =0x802
    mov ip, r5
    umull r10, lr, r0, r7
    mov r8, #0x800
    mla lr, r0, ip, lr
    mov r9, r0, asr #0x1f
    mla lr, r9, r7, lr
    adds r8, r10, r8
    ldr r3, [sp, #0x24]
    adc r0, lr, #0x0
    mov r7, r8, lsr #0xc
    orr r7, r7, r0, lsl #0x14
    add r0, r3, r7
    str r0, [sp, #0x24]
    add r1, sp, #0x20
    add r2, sp, #0x2c
    add r0, r6, #0x278
    bl func_0206823c
    ldrsb r0, [r6, #0xa1]
    cmp r0, #0x0
    bne L_021764ac
    ldr r3, [sp, #0x2c]
    mov r0, #0x800
    smull r2, r1, r3, r3
    adds r2, r2, r0
    mov r0, r6
    adc r1, r1, #0x0
    mov r7, r2, lsr #0xc
    orr r7, r7, r1, lsl #0x14
    ldr r8, [sp, #0x34]
    bl func_02028120
    ldr r1, =0x1004
    mov r2, r5
    umull ip, r9, r0, r1
    mla r9, r0, r2, r9
    mov r3, r0, asr #0x1f
    smull lr, r0, r8, r8
    mov r2, #0x800
    adds lr, lr, r2
    adc r8, r0, #0x0
    mov r0, lr, lsr #0xc
    adds r2, ip, r2
    mla r9, r3, r1, r9
    orr r0, r0, r8, lsl #0x14
    adc r1, r9, #0x0
    mov r2, r2, lsr #0xc
    add r0, r7, r0
    orr r2, r2, r1, lsl #0x14
    cmp r0, r2
    ble L_021764c4
L_021764ac:
    mov r0, r6
    bl func_02039128
    add r0, sp, #0x20
    add r3, r6, #0x278
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
L_021764c4:
    add r0, sp, #0x20
    add r3, r6, #0x3b4
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, =data_0215a064
    ldr r1, [r0, #0x0]
    ldrh r0, [r1, #0x84]
    ands r0, r0, #0x1
    beq L_021765dc
    ldrsh r1, [r1, #0x88]
    mov r4, #0x12c
    cmp r1, #0x14
    ble L_0217650c
    mov r0, r6
    mov r1, #0x0
    mov r2, #0x85
    bl func_0203e5ac
    b L_0217653c
L_0217650c:
    mvn r0, #0x27
    cmp r1, r0
    ble L_0217652c
    mov r0, r6
    mov r1, #0x0
    mov r2, #0x86
    bl func_0203e5ac
    b L_0217653c
L_0217652c:
    mov r0, r6
    mov r1, #0x0
    mov r2, #0x87
    bl func_0203e5ac
L_0217653c:
    ldr r0, =0x4000304
    ldrh r0, [r0, #0x0]
    and r0, r0, #0x8000
    movs r0, r0, asr #0xf
    bne L_021765cc
    mov r0, r6
    bl func_02028120
    mov r7, r0
    mov r0, r6
    bl func_02028120
    smull r2, r1, r0, r7
    mov r3, #0x800
    adds r2, r2, r3
    adc r0, r1, #0x0
    mov ip, r2, lsr #0xc
    orr ip, ip, r0, lsl #0x14
    ldr r2, =0x1806
    ldr r0, =data_0214da80
    mov r7, #0x0
    umull r9, lr, ip, r2
    mla lr, ip, r7, lr
    mov r8, ip, asr #0x1f
    mla lr, r8, r2, lr
    adds r2, r9, r3
    ldr r0, [r0, #0x0]
    adc r3, lr, #0x0
    mov r2, r2, lsr #0xc
    add r1, r6, #0x2dc
    orr r2, r2, r3, lsl #0x14
    bl func_02114564
    cmp r0, #0x0
    addne r1, r6, #0x93
    movne r0, #0x10
    swpneb r0, r0, [r1]
    movne r5, #0x1
    bne L_021765f8
L_021765cc:
    add r1, r6, #0x93
    mov r0, #0x7
    swpb r0, r0, [r1]
    b L_021765f8
L_021765dc:
    mov r1, #0x0
    mov r0, r6
    mov r2, r1
    bl func_0203e5ac
    add r1, r6, #0x93
    mov r0, #0x3
    swpb r0, r0, [r1]
L_021765f8:
    mov r0, r6
    mov r1, #0x300
    bl func_02037130
    ldrh r0, [r6, #0xfc]
    mov r2, #0x0
    cmp r0, #0x28
    bls L_0217664c
    ldr r0, =data_0214da84
    ldr r1, =0x10dcd
    ldr r0, [r0, #0x0]
    ldr r3, [r0, #0x0]
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r1, r4, r1
    mov r1, r1, lsr #0x10
    mov r1, r1, lsl #0x10
    str r3, [r0, #0x0]
    movs r0, r1, lsr #0x10
    moveq r2, #0x1
L_0217664c:
    mov r1, #0x0
    str r1, [sp, #0x0]
    mov r3, #0x1
    str r3, [sp, #0x4]
    str r5, [sp, #0x8]
    str r2, [sp, #0xc]
    str r1, [sp, #0x10]
    str r1, [sp, #0x14]
    mov r0, #0x3
    str r0, [sp, #0x18]
    mov r0, r6
    str r1, [sp, #0x1c]
    mov r2, #0x1f8
    bl func_ov003_02177c58
    ldrsb r0, [r6, #0x93]
    cmp r0, #0x10
    addeq r1, r6, #0xb9
    moveq r0, #0x1
    swpeqb r0, r0, [r1]
    addne r1, r6, #0xb9
    movne r0, #0x0
    swpneb r0, r0, [r1]
    add sp, sp, #0x38
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
}
// clang-format on
