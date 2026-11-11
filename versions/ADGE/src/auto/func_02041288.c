#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02041288(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    add r2, r0, #0xd2
    mov lr, #0x1
    swpb r1, lr, [r2]
    ldr ip, =0x2710
    ldr r1, [r0, #0x9e8]
    mov r3, #0x0
    strh ip, [r1, #0x18]
    swpb r1, lr, [r2]
    ldr r1, [r0, #0x9e8]
    strh r3, [r1, #0x1c]
    swpb r1, lr, [r2]
    ldr r1, [r0, #0x9e8]
    strh ip, [r1, #0x1a]
    swpb r1, lr, [r2]
    ldr r1, [r0, #0x9e8]
    strh r3, [r1, #0x22]
    swpb r1, lr, [r2]
    ldr r0, [r0, #0x9e8]
    strh r3, [r0, #0x24]
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
