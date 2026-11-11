#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff832c();
extern void func_02027ed0();
extern void func_02027f68();
extern void func_02028120();
extern void func_0203e5ac();
extern void func_0203e5e8();
extern void func_02041be4();
extern void func_02067c34();
extern void func_02067ca0();
extern void func_0206823c();
extern void func_02114564();
extern void func_02114658();
extern char data_0213aa2d[];
extern char data_0214da80[];
extern char data_021555f8[];
extern char data_0215a064[];
// clang-format off
asm void func_ov005_0215a408(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x10
    mov r2, #0xc
    mov r8, r0
    smulbb r4, r1, r2
    ldr r0, =data_0214da80
    add r2, r8, #0x2f4
    add r1, r8, #0x3c0
    add r5, r2, r4
    add r6, r1, r4
    ldr r0, [r0, #0x0]
    mov r1, r6
    mov r2, r5
    bl func_02114658
    add r0, r8, #0x3c0
    add r2, sp, #0x0
    add r0, r0, r4
    add r1, r8, #0x2dc
    bl func_0206823c
    ldr r1, [sp, #0x8]
    ldr r2, [sp, #0x0]
    smull ip, r0, r1, r1
    ldr lr, [sp, #0x4]
    smull r7, r4, r2, r2
    smull r3, r2, lr, lr
    mov r1, #0x800
    adds lr, ip, r1
    adc ip, r0, #0x0
    adds r7, r7, r1
    adc r4, r4, #0x0
    adds r3, r3, r1
    mov r7, r7, lsr #0xc
    adc r1, r2, #0x0
    mov r2, r3, lsr #0xc
    mov r0, lr, lsr #0xc
    orr r7, r7, r4, lsl #0x14
    orr r2, r2, r1, lsl #0x14
    orr r0, r0, ip, lsl #0x14
    add r1, r7, r2
    add r7, r0, r1
    mov r0, r8
    bl func_02028120
    ldr r1, =0x19a0
    mov r3, #0x0
    umull lr, ip, r0, r1
    mla ip, r0, r3, ip
    mov r4, r0, asr #0x1f
    mla ip, r4, r1, ip
    mov r2, #0x800
    adds r1, lr, r2
    adc r0, ip, #0x0
    mov r4, r1, lsr #0xc
    orr r4, r4, r0, lsl #0x14
    smull r1, r0, r4, r4
    adds r1, r1, r2
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    cmp r7, r1
    bge L_0215a51c
    mov r0, r7
    bl func_02067c34
    mov r1, r0
    mov r0, r4
    bl func_02067ca0
    add r1, sp, #0x0
    mov r3, r6
    add r2, r8, #0x2dc
    bl func_01ff832c
L_0215a51c:
    mov r0, r8
    mov r1, #0x5
    mov r2, #0xa
    bl func_02027ed0
    ldr r0, =data_0215a064
    mov r2, #0x0
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x84]
    ands r0, r0, #0x1
    addeq r0, r8, #0x100
    ldreqh r1, [r0, #0x1a]
    addeq r1, r1, #0x1
    streqh r1, [r0, #0x1a]
    addne r0, r8, #0x100
    movne r1, #0x0
    strneh r1, [r0, #0x1a]
    add r0, r8, #0x100
    ldr r1, =data_0215a064
    strh r2, [r0, #0x1c]
    ldr r0, [r1, #0x0]
    ldr r1, [r0, #0x98]
    ldr r0, [r0, #0x94]
    cmp r1, #0x0
    rsble r1, r1, #0x0
    cmp r0, #0x0
    rsble r0, r0, #0x0
    add r0, r0, r1
    cmp r0, #0x2
    addgt r0, r8, #0x100
    movgt r1, #0xc
    strgth r1, [r0, #0x1e]
    bgt L_0215a5b0
    add r0, r8, #0x100
    ldrh r1, [r0, #0x1e]
    cmp r1, #0x0
    subne r1, r1, #0x1
    strneh r1, [r0, #0x1e]
L_0215a5b0:
    add r0, r8, #0x100
    ldrh r0, [r0, #0x1e]
    cmp r0, #0x0
    beq L_0215a620
    add r1, r8, #0x97
    mov r4, #0x2
    swpb r0, r4, [r1]
    add r0, r8, #0x278
    add r3, r8, #0x3b4
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r8
    mov r1, r4
    mov r2, #0x4
    bl func_0203e5ac
    ldr r0, [r8, #0x9e8]
    mov r1, #0x64
    ldrh r3, [r0, #0x0]
    ldr r2, =data_0213aa2d
    mov r0, r8
    mul r1, r3, r1
    ldrsb r2, [r2, r1]
    mov r1, #0x3
    add r2, r2, #0x2
    mov r2, r2, lsl #0x10
    mov r2, r2, asr #0x10
    bl func_0203e5ac
    b L_0215a668
L_0215a620:
    add r1, r8, #0x97
    mov r4, #0x0
    swpb r0, r4, [r1]
    add r3, r8, #0x3b4
    ldr r0, =data_0215a064
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x1c]
    add r0, r0, #0x30
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r8
    mov r2, r4
    mov r1, #0x2
    bl func_0203e5ac
    mov r0, r8
    mov r1, #0x3
    mov r2, r4
    bl func_0203e5ac
L_0215a668:
    mov r0, r8
    bl func_02028120
    mov r4, r0
    mov r0, r8
    bl func_02028120
    smull r3, r2, r0, r4
    mov r1, #0x800
    adds r3, r3, r1
    adc r0, r2, #0x0
    mov r3, r3, lsr #0xc
    orr r3, r3, r0, lsl #0x14
    mov r0, #0x334
    umull r2, r4, r3, r0
    adds r6, r2, r1
    mov r2, #0x0
    mla r4, r3, r2, r4
    mov r2, r3, asr #0x1f
    mla r4, r2, r0, r4
    ldr r0, =data_0214da80
    adc r3, r4, #0x0
    mov r2, r6, lsr #0xc
    ldr r0, [r0, #0x0]
    mov r1, r5
    orr r2, r2, r3, lsl #0x14
    bl func_02114564
    cmp r0, #0x0
    bne L_0215a6ec
    ldr r1, =0x43d
    mov r0, r8
    bl func_0203e5e8
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_0215a6ec:
    ldr r0, =data_0215a064
    ldr r0, [r0, #0x0]
    ldrsh r2, [r0, #0x7a]
    cmp r2, #0x0
    blt L_0215a714
    ldr r0, =data_021555f8
    ldr r1, [r0, #0x0]
    ldrsh r0, [r1, #0x20]
    cmp r0, r2
    bgt L_0215a71c
L_0215a714:
    mov r1, #0x0
    b L_0215a724
L_0215a71c:
    add r0, r1, r2, lsl #0x2
    ldr r1, [r0, #0x4]
L_0215a724:
    cmp r1, #0x0
    beq L_0215a748
    ldrsh r0, [r1, #0x96]
    cmp r0, #0x9
    bne L_0215a748
    ldrsh r0, [r1, #0x90]
    cmp r0, #0x3
    moveq r0, #0x1
    beq L_0215a74c
L_0215a748:
    mov r0, #0x0
L_0215a74c:
    cmp r0, #0x0
    bne L_0215a7ac
    cmp r2, #0x0
    blt L_0215a770
    ldr r0, =data_021555f8
    ldr r1, [r0, #0x0]
    ldrsh r0, [r1, #0x20]
    cmp r0, r2
    bgt L_0215a778
L_0215a770:
    mov r0, #0x0
    b L_0215a780
L_0215a778:
    add r0, r1, r2, lsl #0x2
    ldr r0, [r0, #0x4]
L_0215a780:
    cmp r0, #0x0
    beq L_0215a798
    ldrsh r0, [r0, #0x96]
    cmp r0, #0xa
    moveq r0, #0x1
    beq L_0215a79c
L_0215a798:
    mov r0, #0x0
L_0215a79c:
    cmp r0, #0x0
    addeq sp, sp, #0x10
    ldmeqfd sp!, {r4, r5, r6, r7, r8, lr}
    bxeq lr
L_0215a7ac:
    ldrsb r0, [r8, #0x8b]
    cmp r0, #0x2
    addne sp, sp, #0x10
    ldmnefd sp!, {r4, r5, r6, r7, r8, lr}
    bxne lr
    mov r0, r8
    mov r1, #0x5
    bl func_02027f68
    mov r4, r0
    mov r0, r8
    bl func_02041be4
    cmp r4, r0
    addle sp, sp, #0x10
    ldmlefd sp!, {r4, r5, r6, r7, r8, lr}
    bxle lr
    mov r0, r8
    mov r1, #0x440
    bl func_0203e5e8
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on
