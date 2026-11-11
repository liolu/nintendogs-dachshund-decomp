#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_ov018_021588f8();
extern void func_ov018_02159688();
// clang-format off
asm void func_ov018_0215962c(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    bl func_ov018_021588f8
    cmp r0, #0x0
    movne r1, #0x1000
    strne r1, [r0, #0x24]
    strne r1, [r0, #0x28]
    strne r1, [r0, #0x2c]
    mov r0, r4
    bl func_ov018_021588f8
    cmp r0, #0x0
    beq L_0215baf8
    ldrh r2, [r0, #0x20]
    add r1, r0, #0x1
    bic r2, r2, #0x1
    strh r2, [r0, #0x20]
    ldrb r0, [r0, #0x1]
    bic r0, r0, #0x1
    swpb r0, r0, [r1]
L_0215baf8:
    mov r0, r4
    bl func_ov018_02159688
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
