#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02023610();
extern void func_02025b58();
extern void func_020266a0();
// clang-format off
asm void func_ov002_02160800(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x11
    strh r2, [r1, #0x50]
    add r2, r4, #0xac
    mov r1, #0x5
    swpb r1, r1, [r2]
    bl func_020266a0
    mov r0, r4
    bl func_02025b58
    ldrsh r0, [r4, #0xec]
    sub r0, r0, #0x39c
    cmp r0, #0x7
    addls pc, pc, r0, lsl #0x2
    b L_02160880
L_02160840:
    b L_02160860
    b L_02160870
    b L_02160860
    b L_02160870
    b L_02160860
    b L_02160870
    b L_02160860
    b L_02160870
L_02160860:
    add r1, r4, #0xb1
    mov r0, #0x7
    swpb r0, r0, [r1]
    b L_021608a0
L_02160870:
    add r1, r4, #0xb1
    mov r0, #0x8
    swpb r0, r0, [r1]
    b L_021608a0
L_02160880:
    ldrsb r0, [r4, #0xaf]
    cmp r0, #0x1
    addeq r1, r4, #0xb1
    moveq r0, #0x7
    swpeqb r0, r0, [r1]
    addne r1, r4, #0xb1
    movne r0, #0x8
    swpneb r0, r0, [r1]
L_021608a0:
    ldrsb r0, [r4, #0xb1]
    cmp r0, #0x7
    bne L_021608c4
    mov r0, r4
    mov r1, #0x23
    mov r2, #0x1
    bl func_02023610
    ldmfd sp!, {r4, lr}
    bx lr
L_021608c4:
    mov r0, r4
    mov r1, #0x23
    mov r2, #0x2
    bl func_02023610
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
