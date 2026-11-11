/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ffe6fc(M2C_UNK *);                   /* extern */
void *func_02003844(M2C_UNK, M2C_UNK);              /* extern */
s32 func_02069f94();                                /* extern */
u32 func_02069fac();                                /* extern */
M2C_UNK func_0207cba4(void *);                      /* extern */
M2C_UNK func_0207ce10(u16, M2C_UNK);                /* extern */
M2C_UNK func_0207cf28(void *);                      /* extern */
M2C_UNK func_0207d08c(s32, M2C_UNK);                /* extern */
s32 func_020c4e80(M2C_UNK);                         /* extern */
extern M2C_UNK *data_02154c2c;
extern void *data_02154c34;
extern M2C_UNK data_027c0020;
extern M2C_UNK data_027c0104;
extern M2C_UNK func_01fff350;

void func_020c3d00(M2C_UNK arg0) {
    data_02154c34                               = func_02003844(arg0, 0x44);
    data_02154c2c                               = M2C_FIELD(&data_027c0020, M2C_UNK **, 0x18);
    M2C_FIELD(&data_027c0020, M2C_UNK **, 0x18) = &func_01fff350;
    func_01ffe6fc(&data_027c0104);
    M2C_FIELD(data_02154c34, s32 *, 0) = func_020c4e80(arg0);
    M2C_FIELD(data_02154c34, s32 *, 8) = 0;
    func_0207ce10((u16) (func_02069fac() >> 0x11), 1);
    func_0207cba4(data_02154c34 + 0xC);
    func_0207d08c(func_02069f94(), 1);
    func_0207cf28(data_02154c34 + 0x34);
    M2C_FIELD(data_02154c34, s32 *, 0x3C) = 0;
    M2C_FIELD(data_02154c34, s32 *, 0x40) = 0;
}
