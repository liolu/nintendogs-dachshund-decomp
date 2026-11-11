#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0203df68(void) {
    cmp r1, #0x0
    bxlt lr
    cmp r1, #0x14
    bxge lr
    add r3, r0, #0xa3
    mov r2, #0x1
    swpb r2, r2, [r3]
    add r2, r0, #0x100
    strh r1, [r0, #0xf8]
    mov r0, #0xb4
    strh r0, [r2, #0x18]
    mov r0, #0x0
    strh r0, [r2, #0x1e]
    bx lr
}
// clang-format on
