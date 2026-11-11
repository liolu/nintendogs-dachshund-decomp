#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025850();
extern void func_020264e4();
// clang-format off
asm void func_ov003_0216ade8(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r0, r4, #0x100
    ldrsh r1, [r0, #0x52]
    add r0, r4, #0x100
    add r2, r4, #0x97
    cmp r1, #0x99
    moveq r1, #0x91
    strh r1, [r0, #0x52]
    add r1, r4, #0x93
    mov r0, #0x9
    swpb r0, r0, [r1]
    mov r1, #0x4
    swpb r1, r1, [r2]
    mov r0, r4
    bl func_020264e4
    mov r0, r4
    bl func_02025850
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
