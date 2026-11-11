/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

// clang-format off
asm void CpuSet(void) {
    swi 0xb
    bx lr
}
// clang-format on
