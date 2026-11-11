#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200925c();
extern void func_020093f8();
extern void func_02021fd0();
extern void func_02022a38();
extern void func_02024104();
extern void func_0202801c();
extern void func_02028120();
extern void func_02028174();
extern void func_0203e5ac();
extern void func_0203e5e8();
extern void func_0208a2b4();
extern void func_02114564();
extern void func_02114658();
extern char data_0214da80[];
extern char data_0215a064[];
// clang-format off
asm void func_ov003_021877e0(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x4
    mov r6, r0
    ldr r0, [r6, #0x468]
    mov r5, r1
    cmp r0, #0x0
    mov r4, #0x0
    ble L_02187884
    sub r0, r0, #0x1
    str r0, [r6, #0x468]
    add r1, r6, #0x97
    mov r0, #0x4
    swpb r0, r0, [r1]
    ldr r0, [r6, #0x468]
    cmp r0, #0x54
    beq L_02187830
    cmp r0, #0x48
    beq L_02187830
    cmp r0, #0x3c
    bne L_02187844
L_02187830:
    ldr r0, =0x95c
    mvn r1, #0x1
    add r0, r6, r0
    mov r2, #0x0
    bl func_0208a2b4
L_02187844:
    ldr r0, [r6, #0x468]
    cmp r0, #0x28
    bne L_02187870
    mov r0, r6
    mov r1, #0x77
    mov r2, #0x3
    bl func_0200925c
    mov r0, r6
    mov r1, #0x2
    mov r2, #0x14
    bl func_0203e5ac
L_02187870:
    ldr r0, [r6, #0x468]
    cmp r0, #0x0
    moveq r4, #0x1
    movne r4, #0x0
    b L_02187a54
L_02187884:
    ldr r0, =data_0214da80
    add r1, r6, #0x3b4
    ldr r0, [r0, #0x0]
    add r2, r6, #0x2e8
    bl func_02114658
    ldr r0, =0x4000304
    ldrh r0, [r0, #0x0]
    and r0, r0, #0x8000
    movs r0, r0, asr #0xf
    bne L_02187a40
    mov r0, r6
    bl func_02028120
    mov r7, r0
    mov r0, r6
    bl func_02028120
    smull r2, r1, r0, r7
    mov r3, #0x800
    adds r2, r2, r3
    adc r0, r1, #0x0
    mov r7, r2, lsr #0xc
    orr r7, r7, r0, lsl #0x14
    ldr r2, =0x19a
    ldr r0, =data_0214da80
    mov ip, r4
    umull r9, r8, r7, r2
    mla r8, r7, ip, r8
    mov lr, r7, asr #0x1f
    mla r8, lr, r2, r8
    adds r2, r9, r3
    ldr r0, [r0, #0x0]
    adc r3, r8, #0x0
    mov r2, r2, lsr #0xc
    add r1, r6, #0x2e8
    orr r2, r2, r3, lsl #0x14
    bl func_02114564
    cmp r0, #0x0
    beq L_02187a40
    ldrsb r0, [r6, #0x88]
    bl func_02021fd0
    mov r1, r0
    cmp r1, #0x14
    bne L_02187980
    mov r0, r6
    mov r1, r4
    mvn r2, #0x18
    bl func_0202801c
    mov r0, r6
    mov r1, #0x1
    mvn r2, #0x18
    bl func_0202801c
    mov r0, r6
    mov r1, #0x2
    mov r2, #0x19
    bl func_0202801c
    mov r0, r6
    mov r1, #0x3
    mov r2, #0x19
    bl func_0202801c
    mov r0, r6
    mov r1, #0x4
    mov r2, #0x19
    bl func_0202801c
    b L_02187a00
L_02187980:
    cmp r1, #0x0
    bne L_021879d0
    mov r0, r6
    bl func_02024104
    movs r4, r0
    beq L_021879ac
    mov r0, r6
    bl func_02028174
    ldrh r0, [r4, #0x2]
    add r0, r0, #0x32
    strh r0, [r4, #0x2]
L_021879ac:
    mov r0, r6
    mov r1, #0x1
    mvn r2, #0x9
    bl func_0202801c
    mov r0, r6
    mov r1, #0x2
    mov r2, #0xa
    bl func_0202801c
    b L_02187a00
L_021879d0:
    mvn r0, #0x0
    cmp r1, r0
    beq L_02187a00
    mov r0, r6
    bl func_02024104
    movs r4, r0
    beq L_02187a00
    mov r0, r6
    bl func_02028174
    ldrh r0, [r4, #0x2]
    add r0, r0, #0x32
    strh r0, [r4, #0x2]
L_02187a00:
    bl func_02022a38
    mov r4, #0x1
    mov r0, r6
    mov r1, #0x77
    mov r2, #0x3
    mov r3, #0x0
    str r4, [sp, #0x0]
    bl func_020093f8
    mov r0, r6
    mov r1, #0x2
    mov r2, #0xd
    bl func_0203e5ac
    mov r0, #0x5a
    str r0, [r6, #0x468]
    mov r4, #0x0
    b L_02187a54
L_02187a40:
    ldr r0, =data_0215a064
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x84]
    ands r0, r0, #0x1
    moveq r4, #0x1
L_02187a54:
    cmp r4, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bxeq lr
    bl func_02022a38
    mov r0, r6
    mov r1, #0x77
    mov r2, #0x3
    bl func_0200925c
    add r0, r5, #0xec
    mov r1, r0, lsl #0x10
    mov r0, r6
    mov r1, r1, asr #0x10
    bl func_0203e5e8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
}
// clang-format on
