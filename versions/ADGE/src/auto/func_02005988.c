#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char func_02005a68[];
extern char func_02005dc0[];
extern char func_02005de4[];
// clang-format off
asm void func_02005988(void) {
    mov r2, #0x1
    strh r2, [r0, #0x0]
    mov r1, #0x3
    strh r1, [r0, #0x4]
    strh r2, [r0, #0x6]
    mov r2, #0x0
    strh r2, [r0, #0x8]
    ldr r1, =func_02005a68
    strh r2, [r0, #0xa]
    str r1, [r0, #0x10]
    ldrh r1, [r0, #0xc]
    mov ip, #0x0
    mov r3, ip
    cmp r1, #0x0
    ldreq r1, =func_02005de4
    streq r1, [r0, #0x14]
    ldrne r1, =func_02005dc0
    strne r1, [r0, #0x14]
L_020059d0:
    add r1, r0, ip
    add r2, r1, #0x1a
    add ip, ip, #0x1
    cmp ip, #0xc0
    swpb r1, r3, [r2]
    blt L_020059d0
    bx lr
}
// clang-format on
