/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

// clang-format off
asm void VBlankIntrWait(void) {
    mov r2, #0x0
    swi 0x5
    bx lr
}
// clang-format on
