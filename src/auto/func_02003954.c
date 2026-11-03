#include "m2c.h"

extern M2C_UNK data_021338dc;

void func_02003954(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_021338dc + (arg0 * 4))) = arg1;
}
