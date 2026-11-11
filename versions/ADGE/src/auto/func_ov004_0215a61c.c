#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02105824();
extern void func_ov004_0215ab2c();
extern char data_ov004_0216e3c0[];
// clang-format off
asm void func_ov004_0215a61c(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    ldr r1, =data_ov004_0216e3c0
    ldr ip, =0x29e
    ldr r0, [r1, #0x0]
    mov r3, #0x0
    add r0, r0, #0x3000
    ldr r5, [r0, #0x6c4]
    ldr r4, =0x2a2
    add r0, r5, #0x2200
    ldrsb lr, [r0, #0xa2]
    mvn r2, #0x0
    ldr r0, =0x315
    add lr, r5, lr
    add lr, lr, #0x2000
    add lr, lr, ip
    swpb ip, r3, [lr]
    ldr ip, [r1, #0x0]
    add ip, ip, #0x3000
    ldr ip, [ip, #0x6c4]
    add ip, ip, #0x2000
    add r4, ip, r4
    swpb r2, r2, [r4]
    ldr r1, [r1, #0x0]
    add r1, r1, #0x3000
    ldr r1, [r1, #0x6c4]
    add r1, r1, #0x2000
    add r1, r1, r0
    swpb r0, r3, [r1]
    bl func_02105824
    bl func_ov004_0215ab2c
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
