#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char func_02005a04[];
extern char func_02005d5c[];
extern char func_02005d80[];
// clang-format off
asm void func_02005994(void) {
    mov r1, #0x1
    strh r1, [r0, #0x0]
    strh r1, [r0, #0x4]
    mov r2, #0x0
    strh r2, [r0, #0x8]
    ldr r1, =func_02005a04
    strh r2, [r0, #0xa]
    str r1, [r0, #0x10]
    mov r1, #0x5
    strh r1, [r0, #0xe]
    ldrh r1, [r0, #0xc]
    mov ip, #0x0
    mov r3, #0x10
    cmp r1, #0x0
    ldreq r1, =func_02005d80
    streq r1, [r0, #0x14]
    ldrne r1, =func_02005d5c
    strne r1, [r0, #0x14]
L_020059dc:
    add r1, r0, ip
    add r2, r1, #0x1a
    add ip, ip, #0x1
    cmp ip, #0xc0
    swpb r1, r3, [r2]
    blt L_020059dc
    bx lr
}
// clang-format on
