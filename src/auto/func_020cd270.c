#include "m2c.h"

M2C_UNK func_0208bed8(M2C_UNK, s32);                /* extern */
extern M2C_UNK data_0212d490;
extern s32 data_021440d4;

void func_020cd270(s32 arg0) {
    data_021440d4 = arg0;
    func_0208bed8(0, *((M2C_UNK *) ((s8 *) &data_0212d490 + (arg0 * 8))));
}
