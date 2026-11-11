#include "engine.h"
#include "m2c.h"

s32 func_02022e04(s32 arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s16 *, 0xF0) == (arg1 + 0xC)) {
        return 1;
    }
    return 0;
}
