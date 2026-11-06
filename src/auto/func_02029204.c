#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02029204(void) {
    add r2, r0, #0xbe
    mov r3, #0x0
    swpb r1, r3, [r2]
    add r1, r0, #0x100
    strh r3, [r1, #0x20]
    mov r1, #0x6f
    strh r1, [r0, #0xf0]
    add r2, r0, #0xc4
    swpb r1, r3, [r2]
    add r1, r0, #0xc5
    swpb r0, r3, [r1]
    bx lr
}
// clang-format on
