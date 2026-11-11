/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

// clang-format off
asm void Halt(void) {
    swi 0x6
    bx lr
}
// clang-format on
