#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02026e30();
extern void func_0202986c();
extern void func_0202c238();
extern void func_0202de70();
extern void func_0203e2b8();
extern void func_ov002_02187df0();
// clang-format off
asm void func_ov002_021852bc(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    mov r8, r0
    mov r7, r1
    mov r6, r2
    mov r5, r3
    bl func_02026e30
    mov r4, r0
    mov r0, r8
    mov r1, r4
    bl func_ov002_02187df0
    cmp r4, #0x0
    add r0, r8, #0x100
    mov r3, #0x1
    strh r3, [r0, #0x2a]
    mov r2, #0x0
    addne r1, r8, #0xa2
    strh r2, [r0, #0x2c]
    swpneb r0, r3, [r1]
    addeq r1, r8, #0xa2
    swpeqb r0, r2, [r1]
    mov r1, r7
    mov r0, r8
    bl func_0202c238
    cmp r0, #0x0
    movne r0, #0x1
    bne L_02185344
    mov r0, r8
    mov r1, r7
    mov r2, r6
    mov r3, #0x0
    bl func_0202986c
    cmp r0, #0x0
    movne r0, #0x1
    moveq r0, #0x0
L_02185344:
    cmp r0, #0x0
    movne r0, #0x1
    ldmnefd sp!, {r4, r5, r6, r7, r8, lr}
    bxne lr
    cmp r5, #0x0
    beq L_02185438
    mov r0, r8
    bl func_0202de70
    cmp r0, #0x0
    beq L_0218538c
    add r0, r7, #0xec
    mov r1, r0, lsl #0x10
    mov r0, r8
    mov r1, r1, asr #0x10
    bl func_0203e2b8
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_0218538c:
    ldrsb r0, [r8, #0xa4]
    cmp r0, #0x2
    bne L_02185418
    cmp r7, #0x8
    addls pc, pc, r7, lsl #0x2
    b L_02185408
L_021853a4:
    b L_02185408
    b L_02185408
    b L_02185408
    b L_02185408
    b L_02185408
    b L_021853c8
    b L_021853d8
    b L_021853e8
    b L_021853f8
L_021853c8:
    mov r0, r8
    mov r1, #0x37c
    bl func_0203e2b8
    b L_02185438
L_021853d8:
    ldr r1, =0x37d
    mov r0, r8
    bl func_0203e2b8
    b L_02185438
L_021853e8:
    ldr r1, =0x37e
    mov r0, r8
    bl func_0203e2b8
    b L_02185438
L_021853f8:
    ldr r1, =0x37f
    mov r0, r8
    bl func_0203e2b8
    b L_02185438
L_02185408:
    mov r0, r8
    mov r1, #0x380
    bl func_0203e2b8
    b L_02185438
L_02185418:
    add r0, r7, #0xec
    mov r1, r0, lsl #0x10
    mov r0, r8
    mov r1, r1, asr #0x10
    bl func_0203e2b8
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02185438:
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on
