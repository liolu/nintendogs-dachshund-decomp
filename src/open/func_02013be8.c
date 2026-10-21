#include "m2c.h"

void func_02022b6c(s32);
s32 func_02022ddc(void *, s16, u8);
void *func_020350fc(void *);
s32 func_0203e5ac(void *, s32, s32);
s32 func_ov003_02196338(void *);
s32 func_02028714(void *, s32, s32);
s32 func_0202c9f0(void *, s32);
s32 func_0203535c(void *);
s32 func_0203e5e8(void *, s32);
s32 func_0203547c(void *, s32);
s32 func_02027f68(void *, s32);
s32 func_020093f8(void *, s32, s32, s32, s32);
s32 func_02028120(void *);
void func_0200925c(void *, s32, s32);

void func_02013be8(void *arg0) {
    s16 temp_r0_2;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r4;
    s32 var_r5;
    s8 temp_r0_3;
    s8 temp_r0_4;
    void *temp_r0;
    s32 v;

    func_02022b6c((s32) arg0);
    if (M2C_FIELD(arg0, u8 *, 0xA4) != 0) {
        var_r4 = 1;
    } else {
        var_r4 = 0;
    }
    if (var_r4 != 0) {
        if (func_02022ddc(arg0, M2C_FIELD(arg0, s16 *, 0xF2), M2C_FIELD(arg0, u8 *, 0xA6)) != 0) {
            var_r4 = 1;
        } else {
            var_r4 = 0;
        }
    }
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
    } else if (func_02028714(arg0, 0, 0) != 0) {
        var_r0_2 = 1;
    } else if ((var_r4 == 0) && (func_0202c9f0(arg0, 0) != 0)) {
        var_r0_2 = 1;
    } else {
        var_r0_2 = 0;
    }
    if (var_r0_2 != 0) {
        var_r5 = 1;
    } else if (func_0203535c(arg0) == 0) {
        var_r5 = 0;
    } else {
        func_0203e5e8(arg0, 0);
        var_r5 = 1;
    }
    if (M2C_FIELD(arg0, s16 *, 0x152) == 0x113) {
        if (func_0203547c(arg0, 0x13) != 0) {
            if ((func_02027f68(arg0, 7) >> 9) < 5) {
                v = func_020093f8(arg0, 0x3E, 2, 0, 0);
                if (v != -1) {
                    M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x8FC + v * 4), s32 *, 0x44) = (s32) (((s64) func_02028120(arg0) * 0xE66 + 0x800) >> 12);
                }
            }
        }
    }
    if ((var_r5 == 0) && (func_0203547c(arg0, 0x45) == 0)) {
        return;
    }
    func_0200925c(arg0, 0x3E, 2);
}
