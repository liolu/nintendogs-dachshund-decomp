#include "engine.h"
#include "m2c.h"

extern s16 data_0215566c;
extern s32 data_02155678;
extern s32 data_0215567c;

void func_020bf888(s32 arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        return;
    }
    data_0215566c = 0;
    data_0215567c = 0;
    data_02155678 = 0;
}
