/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void LZ77UnCompReadNormalWrite8bit(void) {
    swi 0x11
    bx lr
}
// clang-format on
