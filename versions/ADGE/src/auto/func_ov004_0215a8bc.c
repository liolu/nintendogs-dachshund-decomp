#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern char data_ov004_0216e3c0[];
// clang-format off
asm void func_ov004_0215a8bc(void) {
    ldr r0, =data_ov004_0216e3c0
    ldr r1, [r0, #0x0]
    ldrsb r0, [r1, #0x0]
    cmp r0, #0x2
    ldreq r0, =0x6cc
    addeq r1, r1, #0x3000
    addeq r1, r1, r0
    moveq r0, #0x2
    swpeqb r0, r0, [r1]
    bx lr
}
// clang-format on
