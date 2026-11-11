#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02023644();
extern void func_02025ba0();
extern void func_020266e8();
// clang-format off
asm void func_ov003_02162c58(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x11
    strh r2, [r1, #0x52]
    add r2, r4, #0x93
    mov r1, #0x5
    swpb r1, r1, [r2]
    bl func_020266e8
    mov r0, r4
    bl func_02025ba0
    ldrsh r0, [r4, #0xee]
    sub r0, r0, #0x39c
    cmp r0, #0x7
    addls pc, pc, r0, lsl #0x2
    b L_02162cd8
L_02162c98:
    b L_02162cb8
    b L_02162cc8
    b L_02162cb8
    b L_02162cc8
    b L_02162cb8
    b L_02162cc8
    b L_02162cb8
    b L_02162cc8
L_02162cb8:
    add r1, r4, #0x98
    mov r0, #0x7
    swpb r0, r0, [r1]
    b L_02162cf8
L_02162cc8:
    add r1, r4, #0x98
    mov r0, #0x8
    swpb r0, r0, [r1]
    b L_02162cf8
L_02162cd8:
    ldrsb r0, [r4, #0x96]
    cmp r0, #0x1
    addeq r1, r4, #0x98
    moveq r0, #0x7
    swpeqb r0, r0, [r1]
    addne r1, r4, #0x98
    movne r0, #0x8
    swpneb r0, r0, [r1]
L_02162cf8:
    ldrsb r0, [r4, #0x98]
    cmp r0, #0x7
    bne L_02162d1c
    mov r0, r4
    mov r1, #0x23
    mov r2, #0x1
    bl func_02023644
    ldmfd sp!, {r4, lr}
    bx lr
L_02162d1c:
    mov r0, r4
    mov r1, #0x23
    mov r2, #0x2
    bl func_02023644
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
