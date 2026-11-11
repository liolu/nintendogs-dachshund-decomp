#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020266e8();
extern void func_02026b9c();
extern void func_02026c30();
extern void func_02028114();
extern void func_02028120();
extern void func_02028714();
extern void func_0202fa5c();
extern void func_02035450();
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
asm void func_ov003_0218ffd0(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x4
    mov r6, r0
    mov r5, r1
    bl func_020361ac
    movs r7, r0
    beq L_021900e0
    add r0, r7, #0xbc
    add r3, r6, #0x26c
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r6
    bl func_0203910c
    ldr r1, =0x312
    mov r0, r6
    bl func_02037130
    mov r0, r6
    add r1, r6, #0x26c
    bl func_02036874
    ldr r1, [r6, #0x464]
    mov r4, r0
    cmp r1, #0x0
    ldr r7, [r7, #0xf8]
    beq L_02190088
    mov r0, r6
    bl func_02028114
    add r1, r7, #0x10000
    smull r3, r2, r1, r0
    mov r0, #0x800
    adds r1, r3, r0
    adc r0, r2, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    cmp r4, r1
    mov r1, #0x0
    ble L_021900e0
    mov r0, r6
    mov r2, #0x11
    str r1, [r6, #0x464]
    bl func_0203e5ac
    mov r0, r6
    bl func_020266e8
    add r1, r6, #0xaf
    mov r0, #0x1
    swpb r0, r0, [r1]
    b L_021900e0
L_02190088:
    mov r0, r6
    bl func_02028114
    add r1, r7, #0x9000
    smull r3, r2, r1, r0
    mov r0, #0x800
    adds r1, r3, r0
    adc r0, r2, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    cmp r4, r1
    mov r1, #0x0
    bge L_021900e0
    mov r3, #0x1
    mov r0, r6
    mov r2, r5
    str r3, [r6, #0x464]
    bl func_0203e5ac
    mov r0, r6
    bl func_02026b9c
    add r1, r6, #0xaf
    mov r0, #0x2
    swpb r0, r0, [r1]
L_021900e0:
    ldr r0, [r6, #0x464]
    cmp r0, #0x0
    beq L_02190138
    mov r0, r6
    mov r1, #0x32
    bl func_02035450
    cmp r0, #0x0
    beq L_02190138
    mov r0, r6
    bl func_02028120
    ldr r1, =0x233c
    mov r3, #0x0
    umull r5, r4, r0, r1
    mov r2, #0x800
    adds r2, r5, r2
    mla r4, r0, r3, r4
    mov r0, r0, asr #0x1f
    mla r4, r0, r1, r4
    adc r0, r4, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [r6, #0x920]
L_02190138:
    mov r0, r6
    bl func_020361ac
    mov r4, r0
    mov r0, r6
    mov r1, #0x0
    mov r2, #0x1
    bl func_02028714
    cmp r0, #0x0
    addne sp, sp, #0x4
    ldmnefd sp!, {r4, r5, r6, r7, lr}
    bxne lr
    mov r0, r6
    mov r1, r4
    bl func_0203560c
    cmp r0, #0x0
    addne sp, sp, #0x4
    ldmnefd sp!, {r4, r5, r6, r7, lr}
    bxne lr
    ldr r1, [r6, #0x488]
    ldr r0, =data_0215a04c
    add r1, r1, #0x1
    str r1, [r6, #0x488]
    ldr r1, [r0, #0x0]
    ldr r0, =0x8003
    ldrh r1, [r1, #0x0]
    cmp r1, r0
    moveq r0, #0x0
    beq L_02190250
    ldrsh r0, [r6, #0xfa]
    cmp r0, #0x23
    moveq r0, #0x0
    beq L_02190250
    cmp r4, #0x0
    beq L_02190208
    ldrsh r0, [r4, #0x90]
    cmp r0, #0x0
    beq L_021901d4
    cmp r0, #0x2
    bne L_021901dc
L_021901d4:
    mov r0, #0x1
    b L_02190200
L_021901dc:
    ldrsh r0, [r4, #0x94]
    cmp r0, #0x35
    bne L_021901fc
    mov r0, r4
    bl func_020abb3c
    cmp r0, #0x0
    moveq r0, #0x1
    beq L_02190200
L_021901fc:
    mov r0, #0x0
L_02190200:
    cmp r0, #0x0
    beq L_02190224
L_02190208:
    mov r0, r6
    mov r1, #0x5d
    bl func_0203e5e8
    mov r0, r6
    bl func_02035fd8
    mov r0, #0x1
    b L_02190250
L_02190224:
    mov r0, r6
    mov r1, r4
    bl func_02026c30
    cmp r0, #0x0
    moveq r0, #0x0
    beq L_02190250
    mov r0, r6
    bl func_0202fa5c
    mov r0, r6
    bl func_02035fd8
    mov r0, #0x1
L_02190250:
    cmp r0, #0x0
    addne sp, sp, #0x4
    ldmnefd sp!, {r4, r5, r6, r7, lr}
    bxne lr
    cmp r4, #0x0
    beq L_02190290
    mov r0, r6
    mov r1, r4
    bl func_020362a8
    cmp r0, #0x0
    bne L_02190290
    mov r0, r6
    bl func_ov003_02198408
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02190290:
    ldrh r0, [r6, #0xfc]
    cmp r0, #0x64
    addls sp, sp, #0x4
    ldmlsfd sp!, {r4, r5, r6, r7, lr}
    bxls lr
    mov r0, r6
    bl func_ov003_02198408
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
