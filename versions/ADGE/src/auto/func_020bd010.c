#include "engine.h"
#include "m2c.h"

void func_020bd010(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 0x14) = (s16) arg1;
}
