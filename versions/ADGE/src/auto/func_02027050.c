#include "engine.h"
#include "m2c.h"

s32 func_02027050(s32 arg0) {
    if (M2C_FIELD(arg0, s16 *, 0xEA) == 0x438) {
        return 1;
    }
    return 0;
}
