#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_0214da84[];
// clang-format off
asm void func_02021f98(void) {
    ldr r0, =data_0214da84
    mov r2, #0x1
    ldr r0, [r0, #0x0]
    add r1, r0, #0xb
    swpb r0, r2, [r1]
    bx lr
}
// clang-format on
