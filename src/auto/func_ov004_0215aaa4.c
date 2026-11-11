#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern char data_ov004_0216ddf4[];
extern char data_ov004_0216e3c0[];
// clang-format off
asm void func_ov004_0215aaa4(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldr ip, =data_ov004_0216e3c0
    ldr lr, =data_ov004_0216ddf4
    ldr r2, [ip, #0x0]
    add r2, r2, #0x3000
    ldr r3, [r2, #0x6c4]
    add r2, r3, #0x2000
    add r3, r3, #0x2200
    ldrb r2, [r2, #0x305]
    ldrsb r3, [r3, #0xa2]
    add r2, lr, r2, lsl #0x2
    ldrsb r2, [r3, r2]
    swpb r2, r2, [r0]
    ldr r0, [ip, #0x0]
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6c4]
    add r0, r0, #0x2200
    ldrsb r0, [r0, #0xa3]
    str r0, [r1, #0x0]
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
