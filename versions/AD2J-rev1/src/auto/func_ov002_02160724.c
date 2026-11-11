#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02023610();
extern void func_02025b58();
extern void func_02026704();
// clang-format off
asm void func_ov002_02160724(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x12
    strh r2, [r1, #0x50]
    add r2, r4, #0xac
    mov r1, #0x5
    swpb r1, r1, [r2]
    bl func_02026704
    mov r0, r4
    bl func_02025b58
    ldrsh r0, [r4, #0xec]
    sub r0, r0, #0x39c
    cmp r0, #0x7
    addls pc, pc, r0, lsl #0x2
    b L_021607a4
L_02160764:
    b L_02160784
    b L_02160794
    b L_02160784
    b L_02160794
    b L_02160784
    b L_02160794
    b L_02160784
    b L_02160794
L_02160784:
    add r1, r4, #0xb1
    mov r0, #0x7
    swpb r0, r0, [r1]
    b L_021607c4
L_02160794:
    add r1, r4, #0xb1
    mov r0, #0x8
    swpb r0, r0, [r1]
    b L_021607c4
L_021607a4:
    ldrsb r0, [r4, #0xaf]
    cmp r0, #0x1
    addeq r1, r4, #0xb1
    moveq r0, #0x7
    swpeqb r0, r0, [r1]
    addne r1, r4, #0xb1
    movne r0, #0x8
    swpneb r0, r0, [r1]
L_021607c4:
    ldrsb r0, [r4, #0xb1]
    cmp r0, #0x7
    bne L_021607e8
    mov r0, r4
    mov r1, #0x23
    mov r2, #0x3
    bl func_02023610
    ldmfd sp!, {r4, lr}
    bx lr
L_021607e8:
    mov r0, r4
    mov r1, #0x23
    mov r2, #0x4
    bl func_02023610
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
