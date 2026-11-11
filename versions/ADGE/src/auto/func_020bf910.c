/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern s32 data_021402d4;
extern M2C_UNK data_02140328;
extern M2C_UNK data_02140a90;
extern M2C_UNK data_02140b34;

s32 func_020bf910(s32 arg0) {
    if ((u32) arg0 < 0x29U) {
        return *((M2C_UNK *) ((s8 *) &data_02140a90 + (arg0 * 4)));
    }
    if (((u32) arg0 >= 0x80U) && ((u32) arg0 < 0x84U)) {
        return *((M2C_UNK *) ((s8 *) &data_02140328 + ((arg0 - 0x80) * 4)));
    }
    if (arg0 == 0xFF) {
        return data_021402d4;
    }
    return (s32) &data_02140b34;
}
