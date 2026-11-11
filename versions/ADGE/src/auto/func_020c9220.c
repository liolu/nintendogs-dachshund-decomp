#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_02159e28[];
// clang-format off
asm void func_020c9220(void) {
    ldr r3, =data_02159e28
    mov ip, #0x0
    ldr r3, [r3, #0x0]
    ldr r3, [r3, #0x8]
    add r3, r3, r0, lsl #0x2
    swpb r0, r1, [r3]
    add r1, r3, #0x1
    swpb r0, ip, [r1]
    add r1, r3, #0x2
    swpb r0, r2, [r1]
    bx lr
}
// clang-format on
