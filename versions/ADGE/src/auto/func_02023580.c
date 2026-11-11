#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02023580(void) {
    add r2, r0, #0xa4
    mov r3, #0x0
    swpb r1, r3, [r2]
    add r2, r0, #0xa6
    strh r3, [r0, #0xf2]
    swpb r1, r3, [r2]
    add r0, r0, #0x100
    strh r3, [r0, #0x16]
    bx lr
}
// clang-format on
