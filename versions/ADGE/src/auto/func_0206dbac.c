/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0206d1c0(M2C_UNK, s32, M2C_UNK);           /* extern */

s32 func_0206dbac(s32 arg0) {
    if (func_0206d1c0(5, (arg0 << 8) & 0x7F00, 0) >= 0) {
        return 1;
    }
    return 0;
}
