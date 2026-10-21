/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020286ec(void *, M2C_UNK, M2C_UNK);        /* extern */
M2C_UNK func_0202f960(void *);                      /* extern */
M2C_UNK func_02036fbc(void *, s32);                 /* extern */
M2C_UNK func_02038edc();                            /* extern */

void func_0200eb1c(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x116) = (u16) (M2C_FIELD(arg0, u16 *, 0x116) + 1);
    M2C_FIELD(arg0, s32 *, 0x26C) = 0;
    M2C_FIELD(arg0, s32 *, 0x270) = 0;
    M2C_FIELD(arg0, s32 *, 0x274) = 0;
    func_02038edc(arg0);
    func_02036fbc(arg0, 0x392);
    if (func_020286ec(arg0, 0, 1) != 0) {
        return;
    }
    if ((M2C_FIELD(arg0, s8 *, 0xB9) != 0) && ((u32) M2C_FIELD(arg0, u16 *, 0x116) <= 0x64U)) {
        return;
    }
    func_0202f960(arg0);
}
