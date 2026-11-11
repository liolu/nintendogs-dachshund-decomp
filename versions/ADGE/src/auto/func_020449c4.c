#include "engine.h"
#include "m2c.h"

extern s32 data_0214da84;

s32 func_020449c4(s32 arg0) {
    return (s32) M2C_FIELD((data_0214da84 + arg0), s8 *, 0x1C);
}
