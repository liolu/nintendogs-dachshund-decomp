#include "m2c.h"
extern u8 data_02130e54[];
extern u16 data_02159e34;
s32 func_020038a8();
void func_02065144();
s32 func_020659e4();
s32 func_02065820();
s32 func_020651dc();
void func_02065134();
M2C_UNK func_020d17a8(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    M2C_UNK *temp_r7;
    u16 temp_r2;
    s32 temp_r4;
    s32 var_r6;
    s32 var_r5;
    s32 var_r4;
    s32 temp_r0;

    temp_r7 = (M2C_UNK *) ((s8 *) &data_02130e54 + arg2 * 0xC);
    temp_r2 = M2C_FIELD(temp_r7, u16 *, 8);
    temp_r4 = M2C_FIELD(temp_r7, s32 *, 4);
    var_r6 = temp_r4 * temp_r2;
    var_r5 = 0;
    var_r4 = (s32) func_020038a8(arg1, var_r6 * 2);
    func_02065144(data_02159e34);
    M2C_FIELD(arg0, u16 *, 0) = arg2;
    M2C_FIELD(arg0, u16 *, 2) = M2C_FIELD(temp_r7, u16 *, 8);
    M2C_FIELD(arg0, s32 *, 4) = M2C_FIELD(temp_r7, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 8) = arg3;
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    M2C_FIELD(arg0, s32 *, 0x10) = var_r4;
    M2C_FIELD(arg0, s32 *, 0x14) = var_r4 + var_r6;
    func_020659e4(arg3, M2C_FIELD(arg0, s32 *, 0x10), var_r6, var_r5, var_r5, 1);
    func_02065820();
    var_r4 = func_020651dc();
    func_020659e4(arg3 + 0x20000, M2C_FIELD(arg0, s32 *, 0x14), var_r6, var_r5, var_r5, 1);
    func_02065820();
    temp_r0 = func_020651dc();
    if (var_r4 != 0 || temp_r0 != 0) {
        var_r5 = 3;
    }
    func_02065134(data_02159e34);
    return var_r5;
}
