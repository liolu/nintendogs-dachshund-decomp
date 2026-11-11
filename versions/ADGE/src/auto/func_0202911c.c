#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0202911c(void) {
    add ip, r0, #0xa8
    mov r3, #0x1
    swpb r3, r3, [ip]
    add r3, r0, #0x100
    mov ip, #0x0
    strh ip, [r3, #0x12]
    strh r1, [r0, #0xf0]
    add r1, r0, #0xa5
    swpb r0, r2, [r1]
    bx lr
}
// clang-format on
