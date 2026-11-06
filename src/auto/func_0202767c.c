#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_0213931d[];
// clang-format off
asm void func_0202767c(void) {
    add r2, r0, #0xca
    cmp r1, #0x0
    swpb r1, r1, [r2]
    bxne lr
    ldr r2, [r0, #0x9e4]
    mov r1, #0x64
    ldrh r3, [r2, #0x0]
    ldr r2, =data_0213931d
    mul r1, r3, r1
    ldrsb r1, [r2, r1]
    cmp r1, #0x1
    beq L_020276bc
    cmp r1, #0x2
    beq L_020276bc
    cmp r1, #0x3
    bxne lr
L_020276bc:
    add r0, r0, #0x100
    mov r1, #0x10
    strh r1, [r0, #0x56]
    bx lr
}
// clang-format on
