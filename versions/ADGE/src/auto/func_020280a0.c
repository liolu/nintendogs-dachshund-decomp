#include "engine.h"
#include "m2c.h"

s32 func_020280a0(s32 arg0, s32 arg1) {
    return (s32) M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x9E8) + arg1), u8 *, 0x10);
}
