/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s32 data_02154cb4;
extern M2C_UNK data_02154cb8;

s32 func_020e98c4(void) {
    if ((M2C_FIELD(&data_02154cb8, s32 *, 0x28) != 0) || (M2C_FIELD(&data_02154cb8, s32 *, 0x34) != 0)) {
        return data_02154cb4;
    }
    return 0;
}
