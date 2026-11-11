/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

/* BIOS call stub: written in assembly. */
// clang-format off
asm void RLUnCompReadByCallbackWrite16bit(void) {
    swi 0x15
    bx lr
}
// clang-format on
