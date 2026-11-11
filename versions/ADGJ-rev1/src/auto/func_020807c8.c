#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_020807c8(void) {
    mov r1, #0x0
L_020807cc:
    mov r0, #0x0
L_020807d0:
    orr r2, r1, r0
    mcr p15, 0, r2, c7, c10, 2
    add r0, r0, #0x20
    cmp r0, #0x400
    blt L_020807d0
    add r1, r1, #0x40000000
    cmp r1, #0x0
    bne L_020807cc
    bx lr
}
// clang-format on
