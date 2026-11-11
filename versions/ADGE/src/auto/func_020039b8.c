#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02134f5c;

void func_020039b8(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_02134f5c + (arg0 * 4))) = arg1;
}
