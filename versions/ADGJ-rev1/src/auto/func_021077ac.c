/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_021077ac(void *arg0, s16 arg1, s16 arg2, s16 arg3) {
    if (M2C_FIELD(arg0, s16 *, 0x8A) == M2C_FIELD(arg0, s16 *, 0x90)) {
        M2C_FIELD(arg0, s16 *, 0x8A) = arg1;
        M2C_FIELD(arg0, s16 *, 0x8C) = arg2;
        M2C_FIELD(arg0, s16 *, 0x8E) = arg3;
        return 1;
    }
    return 0;
}
