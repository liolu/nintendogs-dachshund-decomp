/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207d1a0(s32, void *);                 /* extern */
M2C_UNK func_0207d234(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_0207d310(void *);                          /* extern */
extern s32 data_02153df0;
extern M2C_UNK data_02153df4;

void func_0207d280(void *arg0, s32 arg1, s32 arg2, s32 arg3, u16 arg4) {
    M2C_FIELD(arg0, s32 *, 0)    = arg1;
    M2C_FIELD(arg0, s32 *, 0x18) = arg2;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg3;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) & ~0xFF);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) | (u8) arg4);
    func_0207d234(arg0 + 0xC, 4);
    if (data_02153df0 == 0) {
        func_0207d234(&data_02153df4, 4);
        data_02153df0 = 1;
    }
    func_0207d1a0(func_0207d310(arg0), arg0);
}
