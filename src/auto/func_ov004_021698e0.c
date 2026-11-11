/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_01ff832c(s32, void *, void *, void *);
M2C_UNK func_02027644(s32, void *);
s32 func_0202f9b4(void *);
M2C_UNK func_02037130(void *, s32);
M2C_UNK func_0203910c(void *);
M2C_UNK func_0203e5e8(void *, s32);
M2C_UNK func_0206823c(void *, void *, void *);
s32 func_ov004_02169ec8(void *, s32);

void func_ov004_021698e0(void *arg0) {
    s32 temp_r0;
    s32 var_r5;
    void *temp_r1;

    if (*(u16 *) ((u8 *) arg0 + 0xFC) > 0xC8) {
        var_r5 = 1;
    } else {
        var_r5 = 0;
    }
    temp_r0 = func_0202f9b4(arg0);
    if (temp_r0 != 0) {
        func_02027644(temp_r0, (u8 *) arg0 + 0x3B4);
        func_0206823c((u8 *) arg0 + 0x3B4, (u8 *) arg0 + 0x2A0, (u8 *) arg0 + 0x26C);
        temp_r1 = (u8 *) arg0 + 0x26C;
        func_01ff832c(0x64000, temp_r1, (u8 *) arg0 + 0x2A0, temp_r1);
        func_0203910c(arg0);
        func_02037130(arg0, 0x300);
    }
    if (func_ov004_02169ec8(arg0, temp_r0) != 0) {
        return;
    }
    if (var_r5 == 0) {
        return;
    }
    func_0203e5e8(arg0, 0x49F);
}
