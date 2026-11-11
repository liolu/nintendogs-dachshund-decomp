#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0202801c(void) {
    stmfd sp!, {r4, lr}
    mov r1, r1, lsl #0x10
    ldr r3, [r0, #0x9e8]
    mov r1, r1, asr #0x10
    add r3, r3, r1, lsl #0x1
    ldrsh lr, [r3, #0x50]
    add ip, r0, #0xd2
    mov r3, #0x1
    swpb r3, r3, [ip]
    add lr, r2, lr
    ldr r4, [r0, #0x9e8]
    ldr r3, =0xffffec78
    add ip, r4, r1, lsl #0x1
    ldrsh ip, [ip, #0x3c]
    ldr r0, =0x1388
    add r2, ip, r3
    cmp lr, r2
    add r0, ip, r0
    movlt lr, r2
    cmp lr, r0
    movgt lr, r0
    cmp lr, #0x0
    ldr r0, =0x2710
    movlt lr, #0x0
    cmp lr, r0
    movgt lr, r0
    add r0, r4, r1, lsl #0x1
    strh lr, [r0, #0x50]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
