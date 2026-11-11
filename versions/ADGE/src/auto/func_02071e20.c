#include "engine.h"
#include "m2c.h"

extern s32 data_0215087c;

s32 func_02071e20(s32 arg0) {
    s32 temp_r2;

    temp_r2       = data_0215087c;
    data_0215087c = arg0;
    return temp_r2;
}
