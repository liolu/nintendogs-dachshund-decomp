#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_020280b0(void) {
    add r3, r0, #0xd2
    mov r2, #0x1
    swpb r2, r2, [r3]
    ldr r0, [r0, #0x9e8]
    strh r1, [r0, #0x6]
    bx lr
}
// clang-format on
