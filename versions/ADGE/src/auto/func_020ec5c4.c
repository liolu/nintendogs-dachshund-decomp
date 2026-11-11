/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207ca98(M2C_UNK, s32, s32, s32);      /* extern */
M2C_UNK func_020d6068(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
extern void *data_02159e70;

void func_020ec5c4(void *arg0) {
    s32 temp_r2;

    func_020d6068(0, 0x10, 1);
    temp_r2 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_r2 == 0) {
        return;
    }
    func_0207ca98(0x13, M2C_FIELD(data_02159e70, s32 *, 0x483C), temp_r2, M2C_FIELD(arg0, s32 *, 0x1C));
    func_0207ca98(0xE, 0, M2C_FIELD(arg0, s32 *, 0x10), 0x1C0);
    M2C_FIELD(arg0, s32 *, 0) = 0;
}
