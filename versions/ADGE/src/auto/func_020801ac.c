#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_020801ac(void) {
    stmfd sp!, {r4}
    mrs r3, cpsr
    orr r4, r3, #0x80
    mov r1, #0x0
L_020801bc:
    mov r0, #0x0
L_020801c0:
    orr r2, r1, r0
    msr cpsr_c, r4
    mcr p15, 0, r2, c7, c10, 2
    mcr p15, 0, r2, c7, c6, 2
    msr cpsr_c, r3
    add r0, r0, #0x20
    cmp r0, #0x400
    blt L_020801c0
    add r1, r1, #0x40000000
    cmp r1, #0x0
    bne L_020801bc
    ldmfd sp!, {r4}
    bx lr
}
// clang-format on
