/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020eb9fc(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020ef10c(M2C_UNK);                     /* extern */
M2C_UNK func_020efe00(s32);                         /* extern */
M2C_UNK func_020f0d14(s32, M2C_UNK);                /* extern */
extern void *data_02159e70;

void func_020ef044(s32 arg0) {
    s32 temp_r0;

    func_020ef10c(0xC);
    func_020f0d14(arg0 + 0x234, 0);
    func_020f0d14(arg0 + 0x254, 0);
    func_020f0d14(arg0 + 0x274, 0);
    func_020f0d14(arg0 + 0x294, 0);
    func_020f0d14(arg0 + 0x2B4, 0);
    func_020f0d14(arg0 + 0x2D4, 0);
    temp_r0 = M2C_FIELD(data_02159e70, s32 *, 0xA8);
    switch (temp_r0) {                              /* irregular */
        case 0:
            func_020efe00(arg0);
            return;
        case 4:
            M2C_FIELD(data_02159e70, s32 *, 0x5034) = 0;
            func_020eb9fc(2, 0x11, 1);
            return;
        default:
            func_020eb9fc(2, 0x11, 0);
            return;
    }
}
