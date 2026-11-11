#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern char data_ov004_0216e3c0[];
// clang-format off
asm void func_ov004_0215a1a8(void) {
    ldr r1, =data_ov004_0216e3c0
    ldr r0, =0x3cd
    ldr r1, [r1, #0x0]
    mov r2, #0x1
    add r1, r1, #0x3000
    add r1, r1, r0
    swpb r0, r2, [r1]
    bx lr
}
// clang-format on
