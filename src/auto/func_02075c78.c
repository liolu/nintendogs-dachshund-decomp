#include "m2c.h"

extern M2C_UNK data_021503d8;

void func_02075c78(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_021503d8 + (arg0 * 4))) = arg1 | (arg0 << 0x1E);
}
