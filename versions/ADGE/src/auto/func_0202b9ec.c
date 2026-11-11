#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0202b9ec(void) {
    ldr r1, [r0, #0x9e8]
    add r2, r0, #0xd2
    ldrsh r1, [r1, #0x1c]
    mov r3, #0x1
    sub r1, r1, #0x3e8
    mov r1, r1, lsl #0x10
    movs ip, r1, asr #0x10
    swpb r1, r3, [r2]
    movmi ip, #0x0
    ldr r1, =0x2710
    ldr r2, [r0, #0x9e8]
    cmp ip, r1
    movgt ip, r1
    ldr r1, =0x40a
    strh ip, [r2, #0x1c]
    strh r1, [r0, #0xea]
    mov r1, #0x0
    strh r1, [r0, #0xfa]
    bx lr
}
// clang-format on
