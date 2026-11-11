#include "engine.h"
#include "m2c.h"

void func_020f7a68(M2C_UNK);

extern s32 data_021550d8;

void func_020f75d8(s32 arg0) {
    s32 var_r3;

    data_021550d8 = 0;
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
            data_021550d8 = 1;
            break;
    }
    func_020f7a68(var_r3);
}
