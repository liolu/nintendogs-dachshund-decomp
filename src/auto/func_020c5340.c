/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020c3ee8(M2C_UNK, s16, s32);               /* extern */

void func_020c5340(void *arg0, M2C_UNK arg1, s16 arg2) {
    M2C_FIELD(arg0, s16 *, 0x6E) = arg2;
    M2C_FIELD(arg0, s32 *, 0x78) = func_020c3ee8(arg1, arg2, M2C_FIELD(arg0, s32 *, 0x1C) + 4);
}
