#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0208022c(void) {
    mrs r3, cpsr
    orr r2, r3, #0x80
    add r1, r1, r0
    bic r0, r0, #0x1f
L_0208023c:
    msr cpsr_c, r2
    mcr p15, 0, r0, c7, c10, 1
    mcr p15, 0, r0, c7, c6, 1
    msr cpsr_c, r3
    add r0, r0, #0x20
    cmp r0, r1
    blt L_0208023c
    bx lr
}
// clang-format on
