/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0211a6a8(void *);                      /* extern */
M2C_UNK func_0211a6b8(void *, s32);                 /* extern */
extern s32 data_02149084;

void func_02118210(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0) = 2;
    func_0211a6b8(arg0 + 0x2C, M2C_FIELD(arg0, s32 *, 0x68));
    func_0211a6a8(arg0 + 0x2C);
    M2C_FIELD(arg0, s32 *, 0x6C) = (s32) data_02149084;
}
