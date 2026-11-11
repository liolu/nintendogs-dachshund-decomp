#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02066f88();
// clang-format off
asm void func_020ae464(void) {
    stmfd sp!, {r4, lr}
    movs r4, r0
    beq L_020ae488
    mov r1, #0x0
    str r1, [r4, #0x30]
    str r1, [r4, #0x34]
    add r0, r4, #0x3c
    str r1, [r4, #0x38]
    bl func_02066f88
L_020ae488:
    ldr r1, [r4, #0x18c]
    cmp r1, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    ldrh r0, [r1, #0x20]
    orr r0, r0, #0x1
    strh r0, [r1, #0x20]
    ldr r1, [r4, #0x18c]
    ldrb r0, [r1, #0x1]
    add r1, r1, #0x1
    orr r0, r0, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
