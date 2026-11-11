/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_01ff832c(M2C_UNK, s32, s32, s32);      /* extern */
M2C_UNK func_02027644(s32, s32);                    /* extern */
s32 func_0202f9b4(s32);                             /* extern */
s32 func_0203547c(s32, M2C_UNK);                    /* extern */
M2C_UNK func_02037130(s32, M2C_UNK);                /* extern */
M2C_UNK func_0203910c(s32);                         /* extern */
M2C_UNK func_0203e5e8(s32, M2C_UNK);                /* extern */
M2C_UNK func_0206823c(s32, s32, s32);               /* extern */
s32 func_ov004_02169ec8(s32, s32);                  /* extern */
extern s32 *data_0214da84;

void func_ov004_02169804(s32 arg0) {
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 var_r4;

    var_r4 = 0;
    if (func_0203547c(arg0, 0x1C) != 0) {
        temp_r1        = (*data_0214da84 * 0x10DCD) + 1;
        *data_0214da84 = temp_r1;
        if ((u16) ((u32) (temp_r1 << 0x10) >> 0x1F) != 0) {
            var_r4 = 1;
        }
    }
    temp_r0 = func_0202f9b4(arg0);
    if (temp_r0 != 0) {
        func_02027644(temp_r0, arg0 + 0x3B4);
        func_0206823c(arg0 + 0x3B4, arg0 + 0x2A0, arg0 + 0x26C);
        temp_r1_2 = arg0 + 0x26C;
        func_01ff832c(0x64000, temp_r1_2, arg0 + 0x2A0, temp_r1_2);
        func_0203910c(arg0);
        func_02037130(arg0, 0x300);
    }
    if (func_ov004_02169ec8(arg0, temp_r0) != 0) {
        return;
    }
    if (var_r4 == 0) {
        return;
    }
    func_0203e5e8(arg0, 0x4A0);
}
