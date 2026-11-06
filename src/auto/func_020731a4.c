#include "m2c.h"

extern s32 data_0214fd54;

s32 func_020731a4(s32 arg0) {
    s32 temp_r2;

    temp_r2       = data_0214fd54;
    data_0214fd54 = arg0;
    return temp_r2;
}
