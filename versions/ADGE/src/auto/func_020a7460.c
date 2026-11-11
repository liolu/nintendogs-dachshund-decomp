#include "engine.h"
#include "m2c.h"

void func_020a7460(s32 arg0) {
    M2C_FIELD(arg0, u16 *, 0x20) = (u16) (M2C_FIELD(arg0, u16 *, 0x20) | 1);
}
