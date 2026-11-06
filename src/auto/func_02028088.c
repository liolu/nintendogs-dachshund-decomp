#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02028088(void) {
    add r3, r0, #0x8b
    mov r2, #0x1
    swpb r2, r2, [r3]
    ldr r0, [r0, #0x9e4]
    strh r1, [r0, #0x6]
    bx lr
}
// clang-format on
