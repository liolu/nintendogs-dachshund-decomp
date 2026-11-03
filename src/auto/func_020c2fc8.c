#include "engine.h"
#include "m2c.h"

void func_020c2fc8(s32 arg0) {
    M2C_FIELD(arg0, s16 *, 0x34) = 0;
    M2C_FIELD(arg0, s16 *, 0x36) = 0;
    M2C_FIELD(arg0, u16 *, 2)    = (u16) (M2C_FIELD(arg0, u16 *, 2) | 2);
}
