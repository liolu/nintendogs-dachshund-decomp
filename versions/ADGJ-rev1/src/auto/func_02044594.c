#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_0214b484[];
// clang-format off
asm void func_02044594(void) {
    ldr r1, =data_0214b484
    ldr r2, [r1, #0x0]
    ldrsb r1, [r2, #0xc]
    cmp r0, r1
    bxne lr
    add r1, r2, #0xd
    mvn r0, #0x0
    swpb r0, r0, [r1]
    add r1, r2, #0xc
    ldrsb r0, [r2, #0xd]
    swpb r0, r0, [r1]
    bx lr
}
// clang-format on
