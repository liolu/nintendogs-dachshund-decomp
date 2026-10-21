#include "m2c.h"

s32 func_02035424(M2C_UNK, M2C_UNK);
s32 func_02028114(M2C_UNK);
void func_01ff832c(s32, void *, void *, void *);
s32 func_020361f0(M2C_UNK);
M2C_UNK func_02027644(void *, s32);
M2C_UNK func_020350fc(M2C_UNK);
void func_0203e5ac(M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_ov003_02196338(M2C_UNK);
void func_020394dc(M2C_UNK);

void func_0200f250(s32 arg0) {
    s16 temp_r0_2;
    s32 temp_r0;
    s32 temp_r4;
    s32 var_r0;
    s32 var_r1;
    s8 temp_r0_3;
    s8 temp_r0_4;

    if (func_02035424(arg0, 0x28) != 0) {
        temp_r0 = func_02028114(arg0);
        var_r1 = (s32) ((((s64) temp_r0 << 6) + 0x800) >> 12);
        func_01ff832c(-var_r1, (void *) (arg0 + 0x18C), (void *) (arg0 + 0x260),
                      (void *) (arg0 + 0x260));
    }
    temp_r4 = M2C_FIELD(arg0, u16 *, 0xFC) > 0x1E;
    temp_r0 = func_020361f0(arg0);
    if (temp_r0 != 0) {
        func_02027644((void *) temp_r0, arg0 + 0x3B4);
    }
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
    if (temp_r4 == 0) {
        return;
    }
    func_020394dc(arg0);
}
