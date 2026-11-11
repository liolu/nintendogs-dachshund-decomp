/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"
// clang-format off
asm void Sqrt(void) {
    swi 0xd
    bx lr
}
// clang-format on
