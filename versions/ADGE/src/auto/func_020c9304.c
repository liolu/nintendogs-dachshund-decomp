/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020038a8(M2C_UNK, M2C_UNK);              /* extern */
s32 func_02068b9c();                                /* extern */
u32 func_02068bb4();                                /* extern */
M2C_UNK func_02077aa8(M2C_UNK *);                   /* extern */
M2C_UNK func_0207c55c(void *);                      /* extern */
M2C_UNK func_0207c7c8(u16, M2C_UNK);                /* extern */
M2C_UNK func_0207c8e0(void *);                      /* extern */
M2C_UNK func_0207ca44(s32, M2C_UNK);                /* extern */
s32 func_020ca484(M2C_UNK);                         /* extern */
extern M2C_UNK data_0213cc90;
extern M2C_UNK *data_02159e20;
extern void *data_02159e28;
extern M2C_UNK data_027c0860;
extern M2C_UNK func_01ffe698;

void func_020c9304(M2C_UNK arg0) {
    data_02159e28                               = func_020038a8(arg0, 0x44);
    data_02159e20                               = M2C_FIELD(&data_0213cc90, M2C_UNK **, 0x18);
    M2C_FIELD(&data_0213cc90, M2C_UNK **, 0x18) = &func_01ffe698;
    func_02077aa8(&data_027c0860);
    M2C_FIELD(data_02159e28, s32 *, 0) = func_020ca484(arg0);
    M2C_FIELD(data_02159e28, s32 *, 8) = 0;
    func_0207c7c8((u16) (func_02068bb4() >> 0x11), 1);
    func_0207c55c(data_02159e28 + 0xC);
    func_0207ca44(func_02068b9c(), 1);
    func_0207c8e0(data_02159e28 + 0x34);
    M2C_FIELD(data_02159e28, s32 *, 0x3C) = 0;
    M2C_FIELD(data_02159e28, s32 *, 0x40) = 0;
}
