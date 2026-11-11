/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_02138ed4;

s32 func_0203b8e8(u32 arg0, s32 arg1) {
    if ((arg0 >= 0x4FU) && (arg0 < 0x63U)) {
        return (arg1 * 0xA) + M2C_FIELD(&data_02138ed4, s32 *, 0x13C);
    }
    return (arg1 * 0xA) + *((M2C_UNK *) ((s8 *) &data_02138ed4 + (arg0 * 4)));
}
