#include "engine.h"
#include "m2c.h"

void func_0208bed8(M2C_UNK, M2C_UNK);

extern M2C_UNK data_0212d488;
extern s32 data_021440d4;

void func_020cd268(s32 arg0) {
    data_021440d4 = arg0;
    func_0208bed8(0, *((M2C_UNK *) ((s8 *) &data_0212d488 + (arg0 * 8))));
}
