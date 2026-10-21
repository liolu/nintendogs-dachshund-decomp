#include "m2c.h"
s32 func_02078658(s32 arg0, s32 arg1) {
    u16 off = M2C_FIELD(arg0, u16 *, 0x12);
    s32 base = arg0 + 0xC;
    u16 count = M2C_FIELD(base + off, u16 *, 0);
    return base + off + 4 + count * arg1;
}
