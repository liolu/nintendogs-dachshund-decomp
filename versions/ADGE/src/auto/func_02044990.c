#include "engine.h"
#include "m2c.h"

extern s32 data_0214da84;

void func_02044990(s32 arg0) {
    M2C_FIELD((data_0214da84 + (arg0 * 4)), s32 *, 0x54) = 0;
}
