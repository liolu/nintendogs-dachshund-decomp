#include "engine.h"
#include "m2c.h"

void func_02068744(M2C_UNK, M2C_UNK);

void func_02005de4(s32 arg0, s32 arg1) {
    s32 var_r1;

    var_r1 = arg1;
    if (var_r1 > 0xBF) {
        var_r1 = 0xBF;
    }
    func_02068744(0x0400006C, (s32) M2C_FIELD((arg0 + var_r1), s8 *, 0x1A));
}
