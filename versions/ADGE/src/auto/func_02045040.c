/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200f8d0(s32);                             /* extern */
M2C_UNK func_02027644(s32, s32);                    /* extern */
M2C_UNK func_02027658(s32, s32);                    /* extern */
s32 func_02028714(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_0203535c();                                /* extern */
s32 func_020361f0(s32);                             /* extern */
M2C_UNK func_02037130(s32, M2C_UNK);                /* extern */
M2C_UNK func_02039128(s32);                         /* extern */
M2C_UNK func_020394dc(s32);                         /* extern */

void func_02045040(s32 arg0) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r5 = func_0203535c();
    temp_r0 = func_020361f0(arg0);
    if (temp_r0 != 0) {
        func_02039128(arg0);
        func_02027658(temp_r0, arg0 + 0x278);
        func_02027644(temp_r0, arg0 + 0x3B4);
        func_02037130(arg0, 0x300);
    }
    if (func_0200f8d0(arg0) != 0) {
        return;
    }
    if (func_02028714(arg0, 0, 1) != 0) {
        return;
    }
    if (temp_r5 == 0) {
        return;
    }
    func_020394dc(arg0);
}
