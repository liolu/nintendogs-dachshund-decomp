#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02023610();
extern void func_02025b58();
extern void func_020267c8();
// clang-format off
asm void func_ov002_0216056c(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x17
    strh r2, [r1, #0x50]
    add r2, r4, #0xac
    mov r1, #0x5
    swpb r1, r1, [r2]
    bl func_020267c8
    mov r0, r4
    bl func_02025b58
    ldrsh r0, [r4, #0xec]
    sub r0, r0, #0x39c
    cmp r0, #0x7
    addls pc, pc, r0, lsl #0x2
    b L_021605ec
L_021605ac:
    b L_021605cc
    b L_021605dc
    b L_021605cc
    b L_021605dc
    b L_021605cc
    b L_021605dc
    b L_021605cc
    b L_021605dc
L_021605cc:
    add r1, r4, #0xb1
    mov r0, #0x7
    swpb r0, r0, [r1]
    b L_0216060c
L_021605dc:
    add r1, r4, #0xb1
    mov r0, #0x8
    swpb r0, r0, [r1]
    b L_0216060c
L_021605ec:
    ldrsb r0, [r4, #0xaf]
    cmp r0, #0x1
    addeq r1, r4, #0xb1
    moveq r0, #0x7
    swpeqb r0, r0, [r1]
    addne r1, r4, #0xb1
    movne r0, #0x8
    swpneb r0, r0, [r1]
L_0216060c:
    ldrsb r0, [r4, #0xb1]
    cmp r0, #0x7
    bne L_02160630
    mov r0, r4
    mov r1, #0x23
    mov r2, #0x7
    bl func_02023610
    ldmfd sp!, {r4, lr}
    bx lr
L_02160630:
    mov r0, r4
    mov r1, #0x23
    mov r2, #0x8
    bl func_02023610
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
