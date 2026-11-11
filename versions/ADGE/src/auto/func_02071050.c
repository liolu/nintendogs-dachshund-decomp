#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0215027c;

void func_02071050(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_0215027c + (arg0 * 0x24))) = (s32) (u16) arg1;
}
