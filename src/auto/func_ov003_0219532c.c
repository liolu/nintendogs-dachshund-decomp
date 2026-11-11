#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200cf10();
extern void func_02026c30();
extern void func_02027eb8();
extern void func_02028114();
extern void func_02028714();
extern void func_0202fa5c();
extern void func_0203560c();
extern void func_02035780();
extern void func_020358c8();
extern void func_02035fd8();
extern void func_020361ac();
extern void func_020362a8();
extern void func_02036768();
extern void func_02037130();
extern void func_02037c80();
extern void func_0203910c();
extern void func_0203e5e8();
extern void func_020abb3c();
extern void func_ov003_0219569c();
extern void func_ov003_02196c40();
extern void func_ov003_02196f4c();
extern void func_ov003_02198408();
extern char data_0215a04c[];
extern char data_ov003_021987c0[];
extern char data_ov003_021987c8[];
// clang-format off
asm void func_ov003_0219532c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x8
    ldr r1, =data_0215a04c
    mov r8, r0
    ldr r0, [r1, #0x0]
    mov r6, #0x0
    ldrh r0, [r0, #0x0]
    cmp r0, #0xa
    moveq r0, #0x1
    beq L_02195360
    cmp r0, #0x1
    moveq r0, #0x1
    movne r0, r6
L_02195360:
    cmp r0, #0x0
    movne r0, #0x1
    moveq r0, #0x0
    mov r1, r0, lsl #0x10
    mov r0, r8
    mov r4, r1, lsr #0x10
    bl func_020358c8
    mov r0, r8
    bl func_02035780
    mov r0, r8
    bl func_020361ac
    movs r7, r0
    beq L_02195458
    mov r0, r8
    mov r1, r7
    bl func_ov003_0219569c
    add r0, r7, #0xbc
    ldr r6, [r7, #0xf8]
    add r3, r8, #0x26c
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r1, sp, #0x4
    str r1, [sp, #0x0]
    mov r0, r8
    mov r1, r7
    mov r2, r3
    bl func_02036768
    mov r5, r0
    mov r0, r8
    bl func_0203910c
    ldr r1, =0x312
    mov r0, r8
    bl func_02037130
    ldrsh r0, [sp, #0x4]
    cmp r0, #0x2
    addeq r1, r8, #0x97
    moveq r0, #0x1
    swpeqb r0, r0, [r1]
    addne r1, r8, #0x97
    movne r0, #0x0
    swpneb r0, r0, [r1]
    ldrh r0, [r7, #0xa4]
    cmp r0, #0xfa
    bhi L_02195430
    mov r0, r8
    mov r1, #0x1
    bl func_02027eb8
    ldr r1, =0x19a
    mul r1, r0, r1
    add r0, r1, #0x384000
    cmp r5, r0
    bge L_0219544c
L_02195430:
    mov r0, r8
    mov r1, #0x1
    bl func_02027eb8
    mov r1, r0
    mov r0, r8
    bl func_02037c80
    b L_02195458
L_0219544c:
    add r0, r8, #0x100
    mov r1, #0x11
    strh r1, [r0, #0x48]
L_02195458:
    mov r0, r8
    mov r1, #0x0
    mov r2, #0x1
    bl func_02028714
    cmp r0, #0x0
    addne sp, sp, #0x8
    ldmnefd sp!, {r4, r5, r6, r7, r8, lr}
    bxne lr
    mov r0, r8
    mov r1, r7
    bl func_0203560c
    cmp r0, #0x0
    addne sp, sp, #0x8
    ldmnefd sp!, {r4, r5, r6, r7, r8, lr}
    bxne lr
    ldr r1, [r8, #0x488]
    ldr r0, =data_0215a04c
    add r1, r1, #0x1
    str r1, [r8, #0x488]
    ldr r1, [r0, #0x0]
    ldr r0, =0x8003
    ldrh r1, [r1, #0x0]
    cmp r1, r0
    moveq r0, #0x0
    beq L_02195564
    ldrsh r0, [r8, #0xfa]
    cmp r0, #0x23
    moveq r0, #0x0
    beq L_02195564
    cmp r7, #0x0
    beq L_0219551c
    ldrsh r0, [r7, #0x90]
    cmp r0, #0x0
    beq L_021954e8
    cmp r0, #0x2
    bne L_021954f0
L_021954e8:
    mov r0, #0x1
    b L_02195514
L_021954f0:
    ldrsh r0, [r7, #0x94]
    cmp r0, #0x35
    bne L_02195510
    mov r0, r7
    bl func_020abb3c
    cmp r0, #0x0
    moveq r0, #0x1
    beq L_02195514
L_02195510:
    mov r0, #0x0
L_02195514:
    cmp r0, #0x0
    beq L_02195538
L_0219551c:
    mov r0, r8
    mov r1, #0x5d
    bl func_0203e5e8
    mov r0, r8
    bl func_02035fd8
    mov r0, #0x1
    b L_02195564
L_02195538:
    mov r0, r8
    mov r1, r7
    bl func_02026c30
    cmp r0, #0x0
    moveq r0, #0x0
    beq L_02195564
    mov r0, r8
    bl func_0202fa5c
    mov r0, r8
    bl func_02035fd8
    mov r0, #0x1
L_02195564:
    cmp r0, #0x0
    addne sp, sp, #0x8
    ldmnefd sp!, {r4, r5, r6, r7, r8, lr}
    bxne lr
    cmp r7, #0x0
    beq L_021955a4
    mov r0, r8
    mov r1, r7
    bl func_020362a8
    cmp r0, #0x0
    bne L_021955a4
    mov r0, r8
    bl func_ov003_02198408
    add sp, sp, #0x8
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_021955a4:
    mov r0, r8
    bl func_0200cf10
    cmp r0, #0x0
    beq L_021955cc
    ldr r1, =0x3c6
    mov r0, r8
    bl func_0203e5e8
    add sp, sp, #0x8
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_021955cc:
    mov r0, r8
    bl func_02028114
    ldr r2, =data_ov003_021987c8
    mov r1, #0x800
    ldr r2, [r2, r4, lsl #0x2]
    add r2, r6, r2
    smull r3, r0, r2, r0
    adds r1, r3, r1
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    cmp r5, r1
    bge L_02195624
    mov r0, r8
    mov r1, r5
    mov r2, r6
    mov r3, r7
    bl func_ov003_02196c40
    cmp r0, #0x0
    addne sp, sp, #0x8
    ldmnefd sp!, {r4, r5, r6, r7, r8, lr}
    bxne lr
L_02195624:
    mov r0, r8
    bl func_02028114
    ldr r2, =data_ov003_021987c0
    mov r1, #0x800
    ldr r2, [r2, r4, lsl #0x2]
    add r2, r6, r2
    smull r3, r0, r2, r0
    adds r1, r3, r1
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    cmp r5, r1
    addge sp, sp, #0x8
    ldmgefd sp!, {r4, r5, r6, r7, r8, lr}
    bxge lr
    mov r0, r8
    mov r1, r5
    mov r2, r6
    mov r3, r7
    bl func_ov003_02196f4c
    add sp, sp, #0x8
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on
