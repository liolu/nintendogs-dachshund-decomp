#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_020394dc(void) {
    ldrsh r3, [r0, #0xee]
    add r1, r0, #0x8a
    mvn r2, #0x0
    strh r3, [r0, #0xea]
    swpb r0, r2, [r1]
    mov r0, #0x1
    bx lr
}
// clang-format on
