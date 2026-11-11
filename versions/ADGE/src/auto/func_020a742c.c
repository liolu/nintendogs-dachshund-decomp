/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

s32 func_020a742c(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (M2C_FIELD(arg0, s16 *, 0x8A) == M2C_FIELD(arg0, s16 *, 0x90)) {
        M2C_FIELD(arg0, s16 *, 0x8A) = (s16) arg1;
        M2C_FIELD(arg0, s16 *, 0x8C) = (s16) arg2;
        M2C_FIELD(arg0, s16 *, 0x8E) = (s16) arg3;
        return 1;
    }
    return 0;
}
