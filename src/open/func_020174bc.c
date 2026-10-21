#include "m2c.h"
s32 func_02028114(M2C_UNK);
void func_02024fe0(M2C_UNK, M2C_UNK);
M2C_UNK func_02026fd0(M2C_UNK);
void func_0201d1e0(M2C_UNK);
void func_02035978(M2C_UNK, M2C_UNK);
M2C_UNK func_020350fc(M2C_UNK);
void func_0203e5ac(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_ov003_02196338(M2C_UNK);
M2C_UNK func_0203535c(M2C_UNK);
void func_0203e5e8(M2C_UNK, M2C_UNK);
extern M2C_UNK data_02139a24;
void func_020174bc(s32 arg0) {
    s16 temp_r0_2;
    s32 temp_r0;
    s32 var_r0;
    s32 var_r1;
    s8 temp_r0_3;
    s8 temp_r0_4;

    temp_r0 = func_02028114(arg0);
    var_r1 = (s32) (((s64) temp_r0 * 26 + 0x800) >> 12);
    func_02024fe0(arg0, -var_r1);
    if (func_02026fd0(arg0) != 0) {
        M2C_FIELD(&data_02139a24, M2C_UNK(**)(s32), 8)(arg0);
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
                if ((temp_r0_4 != 5) && (temp_r0_4 != 4)) {
                    M2C_FIELD(arg0, s32 *, 0x948) = 8;
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
    func_0203e5e8(arg0, 7);
}
