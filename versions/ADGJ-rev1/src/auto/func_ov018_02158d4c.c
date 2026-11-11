#include "engine.h"
#include "m2c.h"

void func_ov018_02158d4c(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 0x1E) = (s16) arg1;
}
