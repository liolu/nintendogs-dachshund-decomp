#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0202bd84(void) {
    add r2, r0, #0xac
    mov r3, #0x0
    swpb r1, r3, [r2]
    add r1, r0, #0x100
    strh r3, [r1, #0x8]
    mov r1, #0x1000
    str r1, [r0, #0x478]
    str r1, [r0, #0x474]
    bx lr
}
// clang-format on
