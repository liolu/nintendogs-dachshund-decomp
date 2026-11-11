#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_027c0bb4[];
// clang-format off
asm void func_020faf5c(void) {
    ldr r1, =data_027c0bb4
    swpb r0, r0, [r1]
    bx lr
}
// clang-format on
