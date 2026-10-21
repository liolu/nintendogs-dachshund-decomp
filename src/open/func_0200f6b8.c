#include "m2c.h"

extern void func_0202507c();
s32 func_02028114(s32);
M2C_UNK func_02027644(void *, s32);
s32 func_0203535c();
s32 func_020361f0(s32);
s32 func_020350fc(s32);
void func_0203e5ac(void *, s32, s16);
M2C_UNK func_ov003_02196338(M2C_UNK);
void func_020394dc(M2C_UNK);

void func_0200f6b8(s32 arg0) {
    s16 temp_r0_2;
    s32 temp_r0;
    s32 temp_r4;
    s32 var_r0;
    s32 var_r1;
    s8 temp_r0_3;
    s8 temp_r0_4;

    temp_r0 = func_02028114(arg0);
    var_r1 = (s32) (((s64) temp_r0 * -630 + 0x800) >> 12);
    func_0202507c((void *) arg0, 9, 0x11, var_r1);
    temp_r4 = func_0203535c(arg0);
    temp_r0 = func_020361f0(arg0);
    if (temp_r0 != 0) {
        func_02027644((void *) temp_r0, arg0 + 0x3B4);
    }
    temp_r0 = func_020350fc(arg0);
    if (temp_r0 != 0) {
        func_0203e5ac((void *) arg0, 2, 1);
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
    if (temp_r4 == 0) {
        return;
    }
    func_020394dc(arg0);
}
