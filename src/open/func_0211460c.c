#include "m2c.h"
void func_0200b634(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, void *);
extern s32 *data_0215a050;
s32 *func_020038a8(s32 arg0, s32 arg1);
void func_0211460c(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 tmp[3];

    tmp[0] = 0;
    tmp[1] = 0x1000;
    tmp[2] = 0;
    func_0200b634(arg1, M2C_FIELD(arg0, s32 *, 0x1C) + 0x30, arg0 + 0x9C, arg2, tmp);
}
