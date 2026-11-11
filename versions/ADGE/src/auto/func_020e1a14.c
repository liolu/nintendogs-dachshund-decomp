#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_02159e70[];
// clang-format off
asm void func_020e1a14(void) {
    ldr r3, =data_02159e70
    ldr r3, [r3, #0x0]
    add ip, r3, #0xc4
    ldr r3, [ip, #0x268]
    add ip, ip, #0x254
    cmp r3, #0x0
    bxne lr
    mov r3, #0x1
    str r3, [ip, #0x0]
    mov r3, #0x1e
    str r3, [ip, #0x4]
    str r0, [ip, #0x8]
    add r3, ip, #0xc
    swpb r0, r1, [r3]
    str r2, [ip, #0x10]
    bx lr
}
// clang-format on
