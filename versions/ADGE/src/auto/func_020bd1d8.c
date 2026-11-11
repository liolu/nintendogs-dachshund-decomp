#include "engine.h"
#include "m2c.h"

M2C_UNK func_020ba164(M2C_UNK, M2C_UNK);

void func_020bd1d8(s32 arg0, s32 arg1) {
    u8 var_r1;

    var_r1 = arg1 + 2;
    if (*(M2C_UNK *) arg0 == 2) {
        var_r1 += 1;
    }
    func_020ba164(arg0 + 8, (s32) var_r1);
}
