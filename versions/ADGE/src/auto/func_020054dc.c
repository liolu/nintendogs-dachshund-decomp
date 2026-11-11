#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_020054dc(void) {
    ldr r3, [r0, #0x74]
    add r3, r3, #0x2
    swpb r1, r1, [r3]
    ldr r0, [r0, #0x74]
    add r1, r0, #0x3
    swpb r0, r2, [r1]
    bx lr
}
// clang-format on
