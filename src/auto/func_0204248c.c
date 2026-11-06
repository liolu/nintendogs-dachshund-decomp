#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_0214b484[];
// clang-format off
asm void func_0204248c(void) {
    ldr r2, =data_0214b484
    mvn r1, #0x0
    ldr r3, [r2, #0x0]
    ldrsb r2, [r3, #0xe]
    cmp r2, r1
    bxne lr
    cmp r0, #0x0
    blt L_020424b4
    cmp r0, #0x3
    blt L_020424bc
L_020424b4:
    mov r1, #0x0
    b L_020424c4
L_020424bc:
    add r1, r3, r0, lsl #0x2
    ldr r1, [r1, #0x50]
L_020424c4:
    cmp r1, #0x0
    bxeq lr
    add r1, r3, #0xe
    swpb r0, r0, [r1]
    ldr r0, =data_0214b484
    mov r1, #0x1
    ldr r0, [r0, #0x0]
    str r1, [r0, #0x40]
    bx lr
}
// clang-format on
