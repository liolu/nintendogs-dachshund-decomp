#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_020813f4(void) {
    clz r0, r0
    bx lr
}
// clang-format on
