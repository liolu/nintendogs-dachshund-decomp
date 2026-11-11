#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_ov019_0215ad78();
// clang-format off
asm void func_ov019_0215dd20(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    bl func_ov019_0215ad78
    cmp r0, #0x0
    ldrne r2, =0xe07
    movne r1, #0x29
    strne r2, [r0, #0x24]
    strne r1, [r0, #0x28]
    strne r2, [r0, #0x2c]
    mov r0, r4
    bl func_ov019_0215ad78
    cmp r0, #0x0
    beq L_0215dd70
    ldrh r2, [r0, #0x20]
    add r1, r0, #0x1
    bic r2, r2, #0x1
    strh r2, [r0, #0x20]
    ldrb r0, [r0, #0x1]
    bic r0, r0, #0x1
    swpb r0, r0, [r1]
L_0215dd70:
    mov r3, #0x0
    mov r0, #0x20000
    ldr r2, =0x6e07
    str r3, [r4, #0x3c]
    mov r1, #0x1000
    str r2, [r4, #0x40]
    rsb r0, r0, #0x0
    str r0, [r4, #0x44]
    str r1, [r4, #0x48]
    str r3, [r4, #0x4c]
    str r3, [r4, #0x50]
    str r3, [r4, #0x54]
    str r3, [r4, #0x58]
    str r1, [r4, #0x5c]
    str r3, [r4, #0x60]
    rsb r0, r1, #0x0
    str r0, [r4, #0x64]
    str r3, [r4, #0x68]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
