#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_ov018_021588f8();
// clang-format off
asm void func_ov018_0215b77c(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    bl func_ov018_021588f8
    cmp r0, #0x0
    ldrne r2, =0x503
    movne r1, #0x400
    strne r2, [r0, #0x24]
    strne r1, [r0, #0x28]
    strne r2, [r0, #0x2c]
    mov r0, r4
    bl func_ov018_021588f8
    cmp r0, #0x0
    beq L_0215dc4c
    ldrh r2, [r0, #0x20]
    add r1, r0, #0x1
    bic r2, r2, #0x1
    strh r2, [r0, #0x20]
    ldrb r0, [r0, #0x1]
    bic r0, r0, #0x1
    swpb r0, r0, [r1]
L_0215dc4c:
    mov r3, #0x0
    str r3, [r4, #0x3c]
    mov r2, #0x6000
    mov r0, #0x1000
    ldr r1, =0xfffe159f
    str r2, [r4, #0x40]
    str r1, [r4, #0x44]
    str r0, [r4, #0x48]
    str r3, [r4, #0x4c]
    str r3, [r4, #0x50]
    str r3, [r4, #0x54]
    rsb r0, r0, #0x0
    str r0, [r4, #0x58]
    str r3, [r4, #0x5c]
    str r3, [r4, #0x60]
    str r3, [r4, #0x64]
    str r0, [r4, #0x68]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
