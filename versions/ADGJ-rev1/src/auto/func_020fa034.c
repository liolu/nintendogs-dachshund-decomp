#include "m2c.h"

extern s32 data_02155104;

s32 func_020fa034(s32 arg0) {
    return M2C_FIELD(((arg0 * 0x18) + data_02155104), s32 *, 0xA8) + 0x64;
}
