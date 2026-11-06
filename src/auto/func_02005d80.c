#include "m2c.h"

M2C_UNK func_02069b3c(s32, s8);                     /* extern */

void func_02005d80(s32 arg0, s32 arg1) {
    s32 var_r1;

    var_r1 = arg1;
    if (var_r1 > 0xBF) {
        var_r1 = 0xBF;
    }
    func_02069b3c(0x0400006C, M2C_FIELD((arg0 + var_r1), s8 *, 0x1A));
}
