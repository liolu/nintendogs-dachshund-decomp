#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_02159e38[];
// clang-format off
asm void func_020cec60(void) {
    ldr r0, =data_02159e38
    mov r2, #0x0
    ldr r0, [r0, #0x0]
    add r0, r0, #0x1000
    ldr r3, [r0, #0x41c]
    add r1, r3, #0x88
    swpb r0, r2, [r1]
    add r0, r3, #0x600
    ldrh r1, [r0, #0xae]
    orr r1, r1, #0x1
    strh r1, [r0, #0xae]
    bx lr
}
// clang-format on
