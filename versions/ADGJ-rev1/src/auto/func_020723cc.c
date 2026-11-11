#include "m2c.h"

extern M2C_UNK data_0214f398;

void func_020723cc(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_0214f398 + (arg0 << 5))) = arg1;
}
