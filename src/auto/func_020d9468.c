#include "m2c.h"

extern M2C_UNK data_021449c0;

s32 func_020d9468(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_021449c0 + (arg0 * 4)));
}
