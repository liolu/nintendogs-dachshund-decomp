#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020266e8();
extern void func_02026b9c();
extern void func_02026c30();
extern void func_02028114();
extern void func_02028714();
extern void func_0202fa5c();
extern void func_0203560c();
extern void func_02035fd8();
extern void func_020361ac();
extern void func_020362a8();
extern void func_02036874();
extern void func_02037130();
extern void func_0203910c();
extern void func_0203e5ac();
extern void func_0203e5e8();
extern void func_020abb3c();
extern void func_ov003_02198408();
extern char data_0215a04c[];
// clang-format off
asm void func_ov003_021902c8(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r5, r0
    bl func_020361ac
    movs r6, r0
    beq L_021903dc
    add r0, r6, #0xbc
    add r4, r5, #0x26c
    ldmia r0, {r0, r1, r2}
    stmia r4, {r0, r1, r2}
    add r3, r5, #0x3b4
    ldmia r4, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r5
    bl func_0203910c
    ldr r1, =0x312
    mov r0, r5
    bl func_02037130
    mov r0, r5
    mov r1, r4
    bl func_02036874
    ldr r1, [r5, #0x464]
    mov r4, r0
    cmp r1, #0x0
    ldr r6, [r6, #0xf8]
    beq L_02190384
    mov r0, r5
    bl func_02028114
    add r1, r6, #0x10000
    smull r3, r2, r1, r0
    mov r0, #0x800
    adds r1, r3, r0
    adc r0, r2, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    cmp r4, r1
    mov r1, #0x0
    ble L_021903dc
    mov r0, r5
    mov r2, #0x11
    str r1, [r5, #0x464]
    bl func_0203e5ac
    mov r0, r5
    bl func_020266e8
    add r1, r5, #0xaf
    mov r0, #0x1
    swpb r0, r0, [r1]
    b L_021903dc
L_02190384:
    mov r0, r5
    bl func_02028114
    add r1, r6, #0x9000
    smull r3, r2, r1, r0
    mov r0, #0x800
    adds r1, r3, r0
    adc r0, r2, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    cmp r4, r1
    mov r1, #0x0
    bge L_021903dc
    mov r3, #0x1
    mov r0, r5
    mov r2, r1
    str r3, [r5, #0x464]
    bl func_0203e5ac
    mov r0, r5
    bl func_02026b9c
    add r1, r5, #0xaf
    mov r0, #0x2
    swpb r0, r0, [r1]
L_021903dc:
    mov r0, r5
    bl func_020361ac
    mov r4, r0
    mov r0, r5
    mov r1, #0x0
    mov r2, #0x1
    bl func_02028714
    cmp r0, #0x0
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    mov r0, r5
    mov r1, r4
    bl func_0203560c
    cmp r0, #0x0
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    ldr r1, [r5, #0x488]
    ldr r0, =data_0215a04c
    add r1, r1, #0x1
    str r1, [r5, #0x488]
    ldr r1, [r0, #0x0]
    ldr r0, =0x8003
    ldrh r1, [r1, #0x0]
    cmp r1, r0
    moveq r0, #0x0
    beq L_021904ec
    ldrsh r0, [r5, #0xfa]
    cmp r0, #0x23
    moveq r0, #0x0
    beq L_021904ec
    cmp r4, #0x0
    beq L_021904a4
    ldrsh r0, [r4, #0x90]
    cmp r0, #0x0
    beq L_02190470
    cmp r0, #0x2
    bne L_02190478
L_02190470:
    mov r0, #0x1
    b L_0219049c
L_02190478:
    ldrsh r0, [r4, #0x94]
    cmp r0, #0x35
    bne L_02190498
    mov r0, r4
    bl func_020abb3c
    cmp r0, #0x0
    moveq r0, #0x1
    beq L_0219049c
L_02190498:
    mov r0, #0x0
L_0219049c:
    cmp r0, #0x0
    beq L_021904c0
L_021904a4:
    mov r0, r5
    mov r1, #0x5d
    bl func_0203e5e8
    mov r0, r5
    bl func_02035fd8
    mov r0, #0x1
    b L_021904ec
L_021904c0:
    mov r0, r5
    mov r1, r4
    bl func_02026c30
    cmp r0, #0x0
    moveq r0, #0x0
    beq L_021904ec
    mov r0, r5
    bl func_0202fa5c
    mov r0, r5
    bl func_02035fd8
    mov r0, #0x1
L_021904ec:
    cmp r0, #0x0
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    cmp r4, #0x0
    beq L_02190524
    mov r0, r5
    mov r1, r4
    bl func_020362a8
    cmp r0, #0x0
    bne L_02190524
    mov r0, r5
    bl func_ov003_02198408
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02190524:
    ldrh r0, [r5, #0xfc]
    cmp r0, #0x64
    ldmlsfd sp!, {r4, r5, r6, lr}
    bxls lr
    mov r0, r5
    bl func_ov003_02198408
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
