#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_02159e38[];
// clang-format off
asm void func_020ce674(void) {
    ldr r1, =data_02159e38
    ldr r1, [r1, #0x0]
    add r1, r1, #0x1000
    ldr r3, [r1, #0x41c]
    add r2, r3, #0x60
    ldrsb r1, [r2, #0x2a]
    cmp r0, r1
    bxle lr
    add r1, r2, #0x2a
    swpb r0, r0, [r1]
    add r0, r3, #0x600
    ldrh r1, [r0, #0xae]
    orr r1, r1, #0x1
    strh r1, [r0, #0xae]
    bx lr
}
// clang-format on
