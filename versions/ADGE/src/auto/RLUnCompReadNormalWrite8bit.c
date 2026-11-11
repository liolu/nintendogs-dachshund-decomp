/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

// clang-format off
asm void RLUnCompReadNormalWrite8bit(void) {
    swi 0x14
    bx lr
}
// clang-format on
