#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_0214b484[];
// clang-format off
asm void func_02041f34(void) {
    ldr r3, =data_0214b484
    mvn r1, #0x0
    ldr ip, [r3, #0x0]
    add r2, ip, r0
    ldrsb r2, [r2, #0x1c]
    cmp r2, r1
    bne L_02041f74
    ldrsb r1, [ip, #0x13]
    add r2, ip, #0x13
    add r1, r1, #0x1
    swpb r1, r1, [r2]
    ldr r1, [r3, #0x0]
    ldrsb r3, [r1, #0x13]
    add r1, r1, r0
    add r2, r1, #0x1c
    swpb r1, r3, [r2]
L_02041f74:
    ldr r1, =data_0214b484
    ldr r1, [r1, #0x0]
    add r0, r1, r0
    ldrsb r0, [r0, #0x1c]
    bx lr
}
// clang-format on
