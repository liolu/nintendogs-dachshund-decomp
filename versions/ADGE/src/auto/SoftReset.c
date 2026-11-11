/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

// clang-format off
asm void SoftReset(void) {
    swi 0x0
    bx lr
}
// clang-format on
