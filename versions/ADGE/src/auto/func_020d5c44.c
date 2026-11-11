/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0205df50(M2C_UNK, M2C_UNK);
void func_020ebcb4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void func_020d5c44(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r4;
    s32 temp_r6;
    s32 var_r8;
    u16 var_r5;

    var_r8 = arg1;
    var_r5 = M2C_FIELD(var_r8, u16 *, 4);
    if (var_r5 == 0xFFFF) {
        return;
    }
    temp_r6 = arg3 - arg2;
    do {
        temp_r4 = func_0205df50(M2C_FIELD(var_r8, s32 *, 8) * temp_r6, arg3);
        func_020ebcb4(arg0, (s32) var_r5, temp_r4, func_0205df50(M2C_FIELD(var_r8, s32 *, 0xC) * temp_r6, arg3));
        var_r8 += 0x10;
        var_r5 = M2C_FIELD(var_r8, u16 *, 4);
    } while (var_r5 != 0xFFFF);
}
