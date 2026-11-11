/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02027644();                    /* extern */
M2C_UNK func_02027658();              /* extern */
M2C_UNK func_0202f9a0();                      /* extern */
M2C_UNK func_02035fd8();                      /* extern */
s32 func_02036258();                                /* extern */
M2C_UNK func_02037130();                 /* extern */
M2C_UNK func_0203910c();                      /* extern */
s32 func_0204bb68();            /* extern */
M2C_UNK func_0206823c();         /* extern */

void func_0204b9c0(void *arg0) {
    u8 sp0[12];
    s32 temp_r0;

    temp_r0 = func_02036258();
    if (temp_r0 != 0) {
        func_02027658(temp_r0, sp0);
        func_0206823c(arg0 + 0x2A0, sp0, arg0 + 0x26C);
        func_02027644(temp_r0, arg0 + 0x3B4);
        func_0203910c(arg0);
        func_02037130(arg0, 0x302);
    }
    if (func_0204bb68(arg0, temp_r0, 1) != 0) {
        return;
    }
    if ((u32) M2C_FIELD(arg0, u16 *, 0xFC) <= 0x78U) {
        return;
    }
    func_02035fd8(arg0);
    func_0202f9a0(arg0);
}
