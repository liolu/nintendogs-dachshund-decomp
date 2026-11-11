#include "engine.h"
#include "m2c.h"

void func_020badec(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
}
