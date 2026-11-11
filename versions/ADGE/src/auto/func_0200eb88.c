/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02028714(void *, M2C_UNK, M2C_UNK);        /* extern */
M2C_UNK func_0202fa5c(void *);                      /* extern */
M2C_UNK func_02037130(void *, s32);                 /* extern */
M2C_UNK func_0203910c();                            /* extern */

void func_0200eb88(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x108) = (u16) (M2C_FIELD(arg0, u16 *, 0x108) + 1);
    M2C_FIELD(arg0, s32 *, 0x26C) = 0;
    M2C_FIELD(arg0, s32 *, 0x270) = 0;
    M2C_FIELD(arg0, s32 *, 0x274) = 0;
    func_0203910c(arg0);
    func_02037130(arg0, 0x392);
    if (func_02028714(arg0, 0, 1) != 0) {
        return;
    }
    if ((M2C_FIELD(arg0, s8 *, 0xA0) != 0) && ((u32) M2C_FIELD(arg0, u16 *, 0x108) <= 0x64U)) {
        return;
    }
    func_0202fa5c(arg0);
}
