#include "engine.h"
#include "m2c.h"

void func_020739d8(s32 arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + arg0);
}
