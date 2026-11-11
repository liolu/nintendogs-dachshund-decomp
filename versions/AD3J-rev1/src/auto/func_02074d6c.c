#include "engine.h"
#include "m2c.h"

void func_02074d6c(s32 arg0) {
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) + arg0);
}
