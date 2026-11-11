#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02150f00;

void func_02074874(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_02150f00 + (arg0 * 4))) = arg1 | (arg0 << 0x1E);
}
