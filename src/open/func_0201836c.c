#include "m2c.h"
s32 func_02028114(s32 arg0);
s32 func_02024e30(s32 arg0, s32 arg1, s32 arg2);
void func_02024d30(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_02026fd0(s32 arg0);
void func_0201d1e0(s32 arg0);
void func_02035978(s32 arg0, s32 arg1);
s32 func_020350fc(s32 arg0);
void func_0203e5ac(s32 arg0, s32 arg1, s32 arg2);
s32 func_ov003_02196338(s32 arg0);
s32 func_0203535c(s32 arg0);
void func_0203e5e8(s32 arg0, s32 arg1);
extern M2C_UNK data_02139a24;
void func_0201836c(s32 arg0) {
    s16 temp_r0_2;
    s32 temp_r0;
    s32 var_r0;
    s8 temp_r0_3;
    s8 temp_r0_4;

    if (func_02024e30(arg0, 0x14, -(s32) (((s64) func_02028114(arg0) * -20 + 0x800) >> 12)) == 0) {
        func_02024d30(arg0, 0x1e, 0x41, -(s32) (((s64) func_02028114(arg0) * 11 + 0x800) >> 12));
    }
    if (func_02026fd0(arg0) != 0) {
        M2C_FIELD(&data_02139a24, M2C_UNK(**)(s32), 0xc)(arg0);
    }
    func_0201d1e0(arg0);
    func_02035978(arg0, 1);
    temp_r0 = func_020350fc(arg0);
    if (temp_r0 != 0) {
        func_0203e5ac(arg0, 2, 1);
        temp_r0_2 = M2C_FIELD(temp_r0, s16 *, 0x90);
        switch (temp_r0_2) {
        case 4:
            temp_r0_3 = M2C_FIELD(arg0, s8 *, 0x8B);
            if (temp_r0_3 != 5) {
                if (temp_r0_3 != 4) {
                    M2C_FIELD(arg0, s32 *, 0x948) = 1;
                }
            }
            break;
        case 7:
            temp_r0_4 = M2C_FIELD(arg0, s8 *, 0x8B);
            if (temp_r0_4 != 5) {
                if (temp_r0_4 != 4) {
                    M2C_FIELD(arg0, s32 *, 0x948) = 8;
                }
            }
            break;
        }
        var_r0 = func_ov003_02196338(arg0);
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        return;
    }
    if (func_0203535c(arg0) == 0) {
        return;
    }
    func_0203e5e8(arg0, 0xc);
}
