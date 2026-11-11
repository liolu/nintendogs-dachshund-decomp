/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020a7400(s32 arg0) {
    if (M2C_FIELD(arg0, s16 *, 0x8A) == M2C_FIELD(arg0, s16 *, 0x90)) {
        M2C_FIELD(arg0, s16 *, 0x8A) = 0;
        M2C_FIELD(arg0, s16 *, 0x8C) = -1;
        M2C_FIELD(arg0, s16 *, 0x8E) = -1;
    }
    M2C_FIELD(arg0, s16 *, 0x9E) = 0;
}
