/* compiler: 1.2/sp2p3  */
#include "m2c.h"

u16 func_020650bc(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern u16 data_02155668;

s32 func_020bfa74(M2C_UNK arg0, M2C_UNK arg1, u16 *arg2) {
    if (data_02155668 == 0x8000) {
        *arg2 = 3;
        return 0;
    }
    if (data_02155668 == 0) {
        *arg2 = 0x15;
        return 0;
    }
    *arg2 = func_020650bc(arg0, 3, 0x11, arg1, 0x1E);
    if (*arg2 == 2) {
        return 1;
    }
    return 0;
}
