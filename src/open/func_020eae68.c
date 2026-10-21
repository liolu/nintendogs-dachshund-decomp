#include "m2c.h"
extern s32 data_02159e70;
void func_020d6068(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020ebc18(s32, s32, s32, s32);
void func_020ebcb4(s32, s32, s32, s32);
void func_020e8570(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32);
M2C_UNK func_020b114c(void *, M2C_UNK, M2C_UNK, s32, s32, s32);
void func_020eae68(u16 arg0, u16 arg1, u16 arg2) {
    u8 *p = (u8 *) data_02159e70 + 0xC840;

    *(s32 *) (p + 4) = 2;
    *(u16 *) (p + 8) = arg0;
    *(u16 *) (p + 0xA) = arg1;
    *(u16 *) (p + 0xC) = arg2;
    func_020d6068(2, 8, 1);
}
