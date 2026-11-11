#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_0213aa2d[];
// clang-format off
asm void func_020276a4(void) {
    add r2, r0, #0xb3
    cmp r1, #0x0
    swpb r1, r1, [r2]
    bxne lr
    ldr r2, [r0, #0x9e8]
    mov r1, #0x64
    ldrh r3, [r2, #0x0]
    ldr r2, =data_0213aa2d
    mul r1, r3, r1
    ldrsb r1, [r2, r1]
    cmp r1, #0x1
    beq L_020276e4
    cmp r1, #0x2
    beq L_020276e4
    cmp r1, #0x3
    bxne lr
L_020276e4:
    add r0, r0, #0x100
    mov r1, #0x10
    strh r1, [r0, #0x58]
    bx lr
}
// clang-format on
