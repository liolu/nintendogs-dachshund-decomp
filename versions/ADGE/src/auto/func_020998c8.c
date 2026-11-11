#include "engine.h"
#include "m2c.h"

extern s32 data_0215467c;

s32 func_020998c8(s32 arg0) {
    return M2C_FIELD(((arg0 * 0x18) + data_0215467c), s32 *, 0xA8) + 4;
}
