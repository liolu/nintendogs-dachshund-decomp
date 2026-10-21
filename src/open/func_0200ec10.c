#include "m2c.h"

s32 func_01ffdb08(s16 arg0);
s32 func_020351a0(s32 arg0);
s32 func_02035104(s32 arg0);
M2C_UNK func_02027644(M2C_UNK arg0, M2C_UNK arg1);
M2C_UNK func_0203278c(M2C_UNK arg0, M2C_UNK arg1);
M2C_UNK func_0203910c();
M2C_UNK func_02037130(M2C_UNK arg0, M2C_UNK arg1);
M2C_UNK func_02028714(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2);
M2C_UNK func_0202fa5c(M2C_UNK arg0);

void func_0200ec10(s32 arg0) {
    s16 i;
    s32 var_r4;
    s32 temp;

    i = 0;
    var_r4 = -1;
    M2C_FIELD(arg0, u16 *, 0x106)++;
    M2C_FIELD(arg0, s32 *, 0x26C) = 0;
    M2C_FIELD(arg0, s32 *, 0x270) = 0;
    M2C_FIELD(arg0, s32 *, 0x274) = 0;
    for (; i < 3; i++) {
        if (i == M2C_FIELD(arg0, s8 *, 0x88)) {
            continue;
        }
        temp = func_01ffdb08(i);
        if (temp == 0) {
            continue;
        }
        if (func_020351a0(temp) == 0) {
            if (func_02035104(temp) == 0) {
                continue;
            }
        }
        func_02027644(temp, arg0 + 0x26C);
        if (func_0203278c(arg0, i) != 0) {
            var_r4 = i;
        }
    }
    func_0203910c(arg0);
    func_02037130(arg0, 0x392);
    if (func_02028714(arg0, 0, 1) != 0) {
        return;
    }
    if ((M2C_FIELD(arg0, s8 *, 0xA0) == 0) || (var_r4 != -1) || (M2C_FIELD(arg0, u16 *, 0x106) > 0xC8)) {
        func_0202fa5c(arg0);
    }
}
