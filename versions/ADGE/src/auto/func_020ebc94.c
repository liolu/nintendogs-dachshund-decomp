#include "engine.h"
#include "m2c.h"

extern s32 data_02159e70;

s32 func_020ebc94(s32 arg0, s32 arg1) {
    return (s32) M2C_FIELD((data_02159e70 + (arg0 << 0xB) + (arg1 * 0x10)), s16 *, 0x2848);
}
