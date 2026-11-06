/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_021550f8;

void func_020f5f94(s32 arg0, s32 arg1, s32 arg2) {
    if (arg2 == 1) {
        *((M2C_UNK *) ((s8 *) &data_021550f8 + (arg0 * 4))) = *((M2C_UNK *) ((s8 *) &data_021550f8 + (arg0 * 4))) | arg1;
        return;
    }
    *((M2C_UNK *) ((s8 *) &data_021550f8 + (arg0 * 4))) = *((M2C_UNK *) ((s8 *) &data_021550f8 + (arg0 * 4))) ^ arg1;
}
