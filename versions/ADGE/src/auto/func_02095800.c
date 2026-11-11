/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02154670;

void func_02095800(s32 arg0, s32 arg1, s32 arg2) {
    if (arg2 == 1) {
        *((M2C_UNK *) ((s8 *) &data_02154670 + (arg0 * 4))) = *((M2C_UNK *) ((s8 *) &data_02154670 + (arg0 * 4))) | arg1;
        return;
    }
    *((M2C_UNK *) ((s8 *) &data_02154670 + (arg0 * 4))) = *((M2C_UNK *) ((s8 *) &data_02154670 + (arg0 * 4))) ^ arg1;
}
