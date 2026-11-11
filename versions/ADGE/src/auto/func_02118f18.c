/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020cf600(void);

void func_02118f18(s32 arg0) {
    M2C_FIELD(arg0, s16 *, 0x24) = 2;
    M2C_FIELD(arg0, s16 *, 0x26) = 0x1A;
    M2C_FIELD(arg0, s16 *, 0x7C) = (s16) func_020cf600();
    *(u16 *) 0x04000304 &= ~0x8000;
}
