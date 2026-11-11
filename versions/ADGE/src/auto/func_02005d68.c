#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02005d68(void) {
    mov ip, #0x0
    strh ip, [r0, #0x0]
    strh ip, [r0, #0x2]
    strh ip, [r0, #0x4]
    mov r2, #0x1
    strh r2, [r0, #0x6]
    strh ip, [r0, #0x8]
    strh ip, [r0, #0xa]
    strh r1, [r0, #0xc]
    strh ip, [r0, #0xe]
    str ip, [r0, #0x10]
    str ip, [r0, #0x14]
    mov r1, #0x10
    strh r1, [r0, #0x18]
    mov r3, ip
L_02005da4:
    add r1, r0, ip
    add r2, r1, #0x1a
    add ip, ip, #0x1
    cmp ip, #0xc0
    swpb r1, r3, [r2]
    blt L_02005da4
    bx lr
}
// clang-format on
