#include "m2c.h"

extern s32 data_0214b484;

void func_02044654(s32 arg0) {
    M2C_FIELD((data_0214b484 + (arg0 * 4)), s32 *, 0x50) = 0;
}
