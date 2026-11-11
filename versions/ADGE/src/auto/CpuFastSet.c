/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

/* BIOS call stub: written in assembly. */
// clang-format off
asm void CpuFastSet(void) {
    swi 0xc
    bx lr
}
// clang-format on
