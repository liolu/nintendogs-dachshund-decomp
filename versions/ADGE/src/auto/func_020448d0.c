#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_0214da84[];
// clang-format off
asm void func_020448d0(void) {
    ldr r1, =data_0214da84
    ldr r2, [r1, #0x0]
    ldrsb r1, [r2, #0x7]
    cmp r0, r1
    bxne lr
    add r1, r2, #0x8
    mvn r0, #0x0
    swpb r0, r0, [r1]
    add r1, r2, #0x7
    ldrsb r0, [r2, #0x8]
    swpb r0, r0, [r1]
    bx lr
}
// clang-format on
