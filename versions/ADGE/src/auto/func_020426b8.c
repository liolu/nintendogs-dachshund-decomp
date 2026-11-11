#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_0214da84[];
// clang-format off
asm void func_020426b8(void) {
    ldr r2, =data_0214da84
    ldr r3, [r2, #0x0]
    ldrsb r1, [r3, #0x9]
    cmp r0, r1
    bxne lr
    add r1, r3, #0x9
    mvn r0, #0x0
    swpb r0, r0, [r1]
    mov r1, #0x0
    ldr r0, [r2, #0x0]
    str r1, [r0, #0x40]
    bx lr
}
// clang-format on
