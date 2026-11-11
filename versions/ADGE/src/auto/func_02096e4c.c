#include "engine.h"
#include "m2c.h"

void func_020972e4(M2C_UNK);

extern s32 data_02154650;

void func_02096e4c(s32 arg0) {
    s32 var_r3;

    data_02154650 = 0;
    var_r3        = 3;
    switch (arg0) {
        default:
            break;
        case 0:
            var_r3 = 0;
            break;
        case 1:
            var_r3 = 1;
            break;
        case 2:
            var_r3 = 2;
            break;
        case 3:
            data_02154650 = 1;
            break;
    }
    func_020972e4(var_r3);
}
