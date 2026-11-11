#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_ov019_0215ad78();
// clang-format off
asm void func_ov019_0215cd58(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    bl func_ov019_0215ad78
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {lr}
    bxeq lr
    ldrh r2, [r0, #0x20]
    add r1, r0, #0x1
    orr r2, r2, #0x1
    strh r2, [r0, #0x20]
    ldrb r0, [r0, #0x1]
    orr r0, r0, #0x1
    swpb r0, r0, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
