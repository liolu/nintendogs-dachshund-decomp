/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02027644(s32, s32);                    /* extern */
M2C_UNK func_02027658(s32, s32);                    /* extern */
s32 func_0202f9b4();                                /* extern */
s32 func_0203535c(s32);                             /* extern */
M2C_UNK func_02037130(s32, M2C_UNK);                /* extern */
M2C_UNK func_02039128(s32);                         /* extern */
M2C_UNK func_0203e5e8(s32, s32);                    /* extern */
s32 func_ov004_02169ec8(s32, s32);                  /* extern */

void func_ov004_02168aec(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_0202f9b4();
    if (temp_r0 != 0) {
        func_02039128(arg0);
        func_02027658(temp_r0, arg0 + 0x278);
        func_02027644(temp_r0, arg0 + 0x3B4);
        func_02037130(arg0, 0x300);
    }
    if (func_ov004_02169ec8(arg0, temp_r0) != 0) {
        return;
    }
    if (func_0203535c(arg0) == 0) {
        return;
    }
    func_0203e5e8(arg0, 0x4CF);
}
