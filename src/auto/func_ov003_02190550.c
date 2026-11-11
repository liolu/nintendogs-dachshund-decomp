#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
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
extern void func_0203e5ac();
extern void func_0203e5e8();
extern void func_020abb3c();
extern void func_ov003_02198408();
extern char data_0215a04c[];
// clang-format off
asm void func_ov003_02190550(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r5, r0
    bl func_020361ac
    movs r6, r0
    beq L_021906c4
    add r0, r6, #0xbc
    add r4, r5, #0x26c
    ldmia r0, {r0, r1, r2}
    stmia r4, {r0, r1, r2}
    add r3, r5, #0x278
    ldmia r4, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r5
    mov r1, #0x300
    bl func_02037130
    mov r0, r5
    mov r1, r4
    bl func_02036874
    ldr r1, [r5, #0x464]
    mov r4, r0
    cmp r1, #0x0
    ldr r6, [r6, #0xf8]
    beq L_02190654
    mov r0, r5
    bl func_02028114
    add r1, r6, #0x4000
    smull r3, r2, r1, r0
    mov r0, #0x800
    adds r1, r3, r0
    adc r0, r2, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    cmp r4, r1
    mov r1, #0x0
    bge L_021906c4
    mov r0, r5
    str r1, [r5, #0x464]
    bl func_02028114
    mvn r1, #0x4b
    mvn r2, #0x0
    umull ip, r4, r0, r1
    mov r3, #0x800
    adds r3, ip, r3
    mla r4, r0, r2, r4
    mov r0, r0, asr #0x1f
    mla r4, r0, r1, r4
    adc r0, r4, #0x0
    mov r3, r3, lsr #0xc
    orr r3, r3, r0, lsl #0x14
    mov r0, r5
    mov r1, #0x0
    mov r2, #0x8e
    str r3, [r5, #0x240]
    bl func_0203e5ac
    mov r0, r5
    mov r1, #0x1
    mov r2, #0x0
    bl func_0203e5ac
    add r1, r5, #0x93
    mov r0, #0x2
    swpb r0, r0, [r1]
    add r1, r5, #0xaf
    mov r0, #0x1
    swpb r0, r0, [r1]
    b L_021906c4
L_02190654:
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
    ble L_021906c4
    mov r0, #0x1
    str r0, [r5, #0x464]
    mov r0, r5
    mov r2, r1
    str r1, [r5, #0x240]
    bl func_0203e5ac
    mov r1, #0x1
    mov r0, r5
    mov r2, r1
    bl func_0203e5ac
    add r1, r5, #0x93
    mov r0, #0x0
    swpb r0, r0, [r1]
    add r1, r5, #0xaf
    mov r0, #0x2
    swpb r0, r0, [r1]
L_021906c4:
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
    beq L_021907d4
    ldrsh r0, [r5, #0xfa]
    cmp r0, #0x23
    moveq r0, #0x0
    beq L_021907d4
    cmp r4, #0x0
    beq L_0219078c
    ldrsh r0, [r4, #0x90]
    cmp r0, #0x0
    beq L_02190758
    cmp r0, #0x2
    bne L_02190760
L_02190758:
    mov r0, #0x1
    b L_02190784
L_02190760:
    ldrsh r0, [r4, #0x94]
    cmp r0, #0x35
    bne L_02190780
    mov r0, r4
    bl func_020abb3c
    cmp r0, #0x0
    moveq r0, #0x1
    beq L_02190784
L_02190780:
    mov r0, #0x0
L_02190784:
    cmp r0, #0x0
    beq L_021907a8
L_0219078c:
    mov r0, r5
    mov r1, #0x5d
    bl func_0203e5e8
    mov r0, r5
    bl func_02035fd8
    mov r0, #0x1
    b L_021907d4
L_021907a8:
    mov r0, r5
    mov r1, r4
    bl func_02026c30
    cmp r0, #0x0
    moveq r0, #0x0
    beq L_021907d4
    mov r0, r5
    bl func_0202fa5c
    mov r0, r5
    bl func_02035fd8
    mov r0, #0x1
L_021907d4:
    cmp r0, #0x0
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    cmp r4, #0x0
    beq L_0219080c
    mov r0, r5
    mov r1, r4
    bl func_020362a8
    cmp r0, #0x0
    bne L_0219080c
    mov r0, r5
    bl func_ov003_02198408
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0219080c:
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
