#include "engine.h"
#include "m2c.h"

s32 func_02027eb8(s32 arg0, s32 arg1) {
    return (s32) M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x9E8) + ((s32) ((arg1 + 8) << 0x10) >> 0xF)), s16 *, 0x18);
}
