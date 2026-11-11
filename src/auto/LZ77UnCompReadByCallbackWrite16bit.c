/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void LZ77UnCompReadByCallbackWrite16bit(void) {
    swi 0x12
    bx lr
}
// clang-format on
