#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char func_01ffdf78[];
// clang-format off
asm void func_020ca530(void) {
    swpb r1, r1, [r0]
    add r2, r0, #0x1
    mov r3, #0x0
    swpb r1, r3, [r2]
    add r2, r0, #0x2
    swpb r1, r3, [r2]
    add r2, r0, #0x3
    swpb r1, r3, [r2]
    ldr r1, =func_01ffdf78
    str r3, [r0, #0x4]
    str r0, [r0, #0x8]
    str r0, [r0, #0xc]
    str r3, [r0, #0x10]
    str r3, [r0, #0x14]
    str r1, [r0, #0x18]
    bx lr
}
// clang-format on
