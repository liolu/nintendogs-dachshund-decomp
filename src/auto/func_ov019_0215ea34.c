#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02066f88();
extern void func_ov019_0215ad78();
// clang-format off
asm void func_ov019_0215ea34(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    bl func_ov019_0215ad78
    cmp r0, #0x0
    ldrne r1, =0xb36
    strne r1, [r0, #0x24]
    strne r1, [r0, #0x28]
    strne r1, [r0, #0x2c]
    mov r0, r4
    bl func_ov019_0215ad78
    cmp r0, #0x0
    beq L_0215ea80
    ldrh r2, [r0, #0x20]
    add r1, r0, #0x1
    bic r2, r2, #0x1
    strh r2, [r0, #0x20]
    ldrb r0, [r0, #0x1]
    bic r0, r0, #0x1
    swpb r0, r0, [r1]
L_0215ea80:
    add r0, r4, #0x48
    bl func_02066f88
    ldr r0, [r4, #0xac]
    mov r1, #0x0
    str r1, [r0, #0x0]
    ldr r0, [r4, #0xac]
    str r1, [r0, #0x4]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
