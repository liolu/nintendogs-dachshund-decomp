#include "m2c.h"
void func_02010464(void *, M2C_UNK);
void func_02035780(void *);
void *func_020350fc(void *);
s32 func_02028714(void *, M2C_UNK, M2C_UNK);
s32 func_0202c9f0(void *, M2C_UNK);
M2C_UNK func_0203e5ac(void *, M2C_UNK, M2C_UNK);
M2C_UNK func_0203e5e8(void *, M2C_UNK);
s32 func_ov003_02196338(void *);
extern char data_0214da84[];
void func_0200fee0(void *arg0) {
    s16 temp_r0_2;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r4;
    s8 temp_r0_3;
    s8 temp_r0_4;
    void *temp_r0;
    u32 *temp_r3;
    u32 temp_r2;
    u16 temp_r0_5;

    if (M2C_FIELD(arg0, s32 *, 0x464) == 0) {
        var_r4 = 0xC8;
    } else {
        var_r4 = 0;
    }
    func_02010464(arg0, 3);
    func_02035780(arg0);
    temp_r0 = func_020350fc(arg0);
    if (temp_r0 != NULL) {
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
        var_r0_2 = 1;
    } else if (func_02028714(arg0, 3, 0) != 0) {
        var_r0_2 = 1;
    } else if (func_0202c9f0(arg0, 3) != 0) {
        var_r0_2 = 1;
    } else {
        var_r0_2 = 0;
    }
    if (var_r0_2 != 0) {
        return;
    }
    if (M2C_FIELD(arg0, u16 *, 0xFC) > var_r4) {
        temp_r3 = *(u32 **) data_0214da84;
        temp_r2 = *temp_r3 * 0x10DCD + 1;
        temp_r0_5 = (u16) ((u16) temp_r2 * 120u >> 16);
        *temp_r3 = temp_r2;
        if (temp_r0_5 != 0) {
            return;
        }
        func_0203e5e8(arg0, 3);
    }
}
