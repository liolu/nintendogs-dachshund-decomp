#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern char data_ov004_0216e3c0[];
// clang-format off
asm void func_ov004_0215a29c(void) {
    ldr r3, =data_ov004_0216e3c0
    ldr r2, =0x319
    ldr r0, [r3, #0x0]
    add r0, r0, #0x3000
    ldr r1, [r0, #0x6c4]
    add r0, r1, #0x2300
    ldrsb ip, [r0, #0x18]
    add r0, r1, #0x2000
    add r1, r0, #0x318
    add r0, ip, #0x1
    swpb r0, r0, [r1]
    ldr r0, [r3, #0x0]
    add r0, r0, #0x3000
    ldr r1, [r0, #0x6c4]
    add r0, r1, #0x2300
    ldrsb r3, [r0, #0x19]
    add r0, r1, #0x2000
    add r1, r0, r2
    add r0, r3, #0x1
    swpb r0, r0, [r1]
    bx lr
}
// clang-format on
