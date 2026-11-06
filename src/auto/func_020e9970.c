/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020f0698();                                /* extern */
extern M2C_UNK data_02154cb8;

s32 func_020e9970(void) {
    if ((func_020f0698() != 0) || (M2C_FIELD(&data_02154cb8, s32 *, 0x20) != 0)) {
        return 1;
    }
    return 0;
}
