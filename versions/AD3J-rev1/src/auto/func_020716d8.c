#include "m2c.h"

extern M2C_UNK data_0214f35c;

void func_020716d8(s32 arg0) {
    M2C_FIELD(&data_0214f35c, s32 *, 0) = (s32) (M2C_FIELD(&data_0214f35c, s32 *, 0) & ~(1 << arg0));
}
