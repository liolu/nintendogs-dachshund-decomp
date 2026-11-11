#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0200669c(void) {
    mov r3, #0xff
    swpb r1, r3, [r0]
    add r2, r0, #0x1
    swpb r1, r3, [r2]
    mov r1, #0x0
    strh r1, [r0, #0x2]
    bx lr
}
// clang-format on
