#include "m2c.h"
#include "engine.h"
extern s32 data_02155678;
extern s32 data_0215567c;
s32 func_020bfff4(s32 arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) == 0) {
        data_0215567c = 0;
        data_02155678 = 3;
        return 1;
    }
    return 0;
}
