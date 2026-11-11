/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"
// clang-format off
asm void GetCRC16(void) {
    swi 0xe
    bx lr
}
// clang-format on
