#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02027ed0(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldr ip, [r0, #0x9e8]
    mov r3, r1, lsl #0x10
    add r3, ip, r3, asr #0xf
    ldrsh lr, [r3, #0x18]
    add r3, r0, #0xd2
    mov ip, #0x1
    add r2, r2, lr
    mov r2, r2, lsl #0x10
    movs lr, r2, asr #0x10
    swpb r2, ip, [r3]
    movmi lr, #0x0
    ldr r2, =0x2710
    cmp lr, r2
    movgt lr, r2
    ldr r2, [r0, #0x9e8]
    mov r0, r1, lsl #0x10
    add r0, r2, r0, asr #0xf
    strh lr, [r0, #0x18]
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
