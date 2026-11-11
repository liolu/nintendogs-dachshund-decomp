#include "engine.h"
#include "m2c.h"

extern s32 data_02155678;
extern s32 data_0215567c;

s32 func_020c0514(s32 arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        return 0;
    }
    data_0215567c = 0;
    data_02155678 = 1;
    return 1;
}
