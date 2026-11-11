/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020dca68(s32 arg0) {
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        M2C_FIELD(arg0, s32 *, 4)    = 1;
        M2C_FIELD(arg0, s32 *, 0x58) = 0;
        M2C_FIELD(arg0, s32 *, 0x54) = 0;
    }
}
