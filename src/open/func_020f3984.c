#include "m2c.h"
extern s32 func_02027554(s32);
void func_020f3984(s32 arg0) {
    s32 var_r0;

    var_r0 = 0;
    switch (func_02027554(M2C_FIELD(arg0, s32 *, 4))) {
    case 2:
        var_r0 = 0;
        break;
    case 0:
        var_r0 = 1;
        break;
    case 3:
        var_r0 = 2;
        break;
    case 4:
        var_r0 = 3;
        break;
    case 1:
        var_r0 = 4;
        break;
    }
    M2C_FIELD(arg0, s16 *, 2) = var_r0;
}
