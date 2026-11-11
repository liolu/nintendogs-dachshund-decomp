#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff832c();
extern void func_0200c0d8();
extern void func_02028120();
extern void func_02044824();
extern void func_02114690();
extern void func_ov005_0215bc8c();
extern char data_0214da80[];
extern char data_0214da84[];
extern char data_021555f8[];
extern char data_0215a064[];
// clang-format off
asm void func_ov005_0215b870(void) {
    stmfd sp!, {r4, lr}
    ldr r1, =data_0214da80
    mov r4, r0
    ldr r0, [r1, #0x0]
    add r1, r4, #0x3b4
    bl func_02114690
    ldr r0, =data_0215a064
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x84]
    ands r0, r0, #0x1
    addeq r0, r4, #0x100
    ldreqh r1, [r0, #0x1a]
    addeq r1, r1, #0x1
    streqh r1, [r0, #0x1a]
    addne r0, r4, #0x100
    movne r1, #0x0
    strneh r1, [r0, #0x1a]
    add r0, r4, #0x100
    mov r1, #0x1
    strh r1, [r0, #0x1c]
    mov r1, #0x0
    strh r1, [r0, #0x1e]
    ldr r1, [r4, #0x488]
    ldr r0, =data_0215a064
    add r1, r1, #0x1
    str r1, [r4, #0x488]
    ldr r0, [r0, #0x0]
    ldrsh r2, [r0, #0x7a]
    cmp r2, #0x0
    blt L_0215b8fc
    ldr r0, =data_021555f8
    ldr r1, [r0, #0x0]
    ldrsh r0, [r1, #0x20]
    cmp r0, r2
    bgt L_0215b904
L_0215b8fc:
    mov r0, #0x0
    b L_0215b90c
L_0215b904:
    add r0, r1, r2, lsl #0x2
    ldr r0, [r0, #0x4]
L_0215b90c:
    cmp r0, #0x0
    beq L_0215b924
    ldrsh r0, [r0, #0x96]
    cmp r0, #0xa
    moveq r0, #0x1
    beq L_0215b928
L_0215b924:
    mov r0, #0x0
L_0215b928:
    cmp r0, #0x0
    beq L_0215b948
    ldr r0, [r4, #0x464]
    add r0, r0, #0x1
    str r0, [r4, #0x464]
    ldr r0, [r4, #0x464]
    cmp r0, #0x12c
    ble L_0215ba6c
L_0215b948:
    ldrsb r0, [r4, #0x93]
    cmp r0, #0x0
    beq L_0215b968
    cmp r0, #0x3
    beq L_0215b9c8
    cmp r0, #0x5
    beq L_0215ba10
    b L_0215ba94
L_0215b968:
    ldr r1, =data_0214da84
    ldr r0, =0x10dcd
    ldr r3, [r1, #0x0]
    mov r1, #0x3c
    ldr r2, [r3, #0x0]
    mul r0, r2, r0
    add r2, r0, #0x1
    mov r0, r2, lsl #0x10
    mov r0, r0, lsr #0x10
    mul r1, r0, r1
    mov r0, r1, lsr #0x10
    mov r0, r0, lsl #0x10
    str r2, [r3, #0x0]
    movs r0, r0, lsr #0x10
    beq L_0215b9b8
    cmp r0, #0x1
    addeq r1, r4, #0x93
    moveq r0, #0x5
    swpeqb r0, r0, [r1]
    b L_0215ba94
L_0215b9b8:
    add r1, r4, #0x93
    mov r0, #0x3
    swpb r0, r0, [r1]
    b L_0215ba94
L_0215b9c8:
    ldr r1, =data_0214da84
    ldr r0, =0x10dcd
    ldr r3, [r1, #0x0]
    mov r1, #0x64
    ldr r2, [r3, #0x0]
    mul r0, r2, r0
    add r2, r0, #0x1
    mov r0, r2, lsl #0x10
    mov r0, r0, lsr #0x10
    mul r1, r0, r1
    mov r0, r1, lsr #0x10
    mov r0, r0, lsl #0x10
    movs r0, r0, lsr #0x10
    str r2, [r3, #0x0]
    addeq r1, r4, #0x93
    moveq r0, #0x0
    swpeqb r0, r0, [r1]
    b L_0215ba94
L_0215ba10:
    bl func_02044824
    cmp r0, #0x0
    beq L_0215ba24
    add r1, r4, #0x3b4
    bl func_0200c0d8
L_0215ba24:
    ldr r1, =data_0214da84
    ldr r0, =0x10dcd
    ldr r3, [r1, #0x0]
    mov r1, #0x64
    ldr r2, [r3, #0x0]
    mul r0, r2, r0
    add r2, r0, #0x1
    mov r0, r2, lsl #0x10
    mov r0, r0, lsr #0x10
    mul r1, r0, r1
    mov r0, r1, lsr #0x10
    mov r0, r0, lsl #0x10
    movs r0, r0, lsr #0x10
    str r2, [r3, #0x0]
    addeq r1, r4, #0x93
    moveq r0, #0x0
    swpeqb r0, r0, [r1]
    b L_0215ba94
L_0215ba6c:
    mov r0, r4
    add r2, r4, #0x93
    mov r1, #0x5
    swpb r1, r1, [r2]
    bl func_02028120
    mov r0, r0, lsl #0x2
    add r1, r4, #0x1a4
    add r2, r4, #0x2a0
    add r3, r4, #0x3b4
    bl func_01ff832c
L_0215ba94:
    mov r0, r4
    mov r1, #0x1
    bl func_ov005_0215bc8c
    cmp r0, #0x0
    movne r0, #0x1
    moveq r0, #0x0
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
