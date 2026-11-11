#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02150280;

void func_02071038(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_02150280 + (arg0 * 0x24))) = arg1;
}
