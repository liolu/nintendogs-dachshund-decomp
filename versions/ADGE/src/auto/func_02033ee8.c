#include "engine.h"
#include "m2c.h"

s32 func_02033ee8(s32 arg0) {
    if (M2C_FIELD(arg0, s16 *, 0xEA) == 0x3E9) {
        if ((M2C_FIELD(arg0, s16 *, 0x162) == M2C_FIELD(arg0, s16 *, 0x152)) && ((s32) M2C_FIELD(arg0, s16 *, 0x14E) >= 1)) {
            return 1;
        }
        return 0;
    }
    return 0;
}
