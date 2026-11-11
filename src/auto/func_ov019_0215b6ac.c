#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_ov019_0215ad78();
extern void func_ov019_0215b70c();
// clang-format off
asm void func_ov019_0215b6ac(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    bl func_ov019_0215ad78
    cmp r0, #0x0
    movne r2, #0x40
    strne r2, [r0, #0x24]
    movne r1, #0x1000
    strne r1, [r0, #0x28]
    strne r2, [r0, #0x2c]
    mov r0, r4
    bl func_ov019_0215ad78
    cmp r0, #0x0
    beq L_0215b6fc
    ldrh r2, [r0, #0x20]
    add r1, r0, #0x1
    bic r2, r2, #0x1
    strh r2, [r0, #0x20]
    ldrb r0, [r0, #0x1]
    bic r0, r0, #0x1
    swpb r0, r0, [r1]
L_0215b6fc:
    mov r0, r4
    bl func_ov019_0215b70c
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
