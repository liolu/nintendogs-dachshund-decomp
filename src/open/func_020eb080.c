#include "m2c.h"
extern u8 *data_02159e70;
void func_020ebc18(s32, s32, s32, s32);
void func_020ebcb4(s32, s32, s32, s32);
void func_020d6068(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020e8570(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32);
M2C_UNK func_020b114c(void *, M2C_UNK, M2C_UNK, s32, s32, s32);
void func_020eb080(s32 arg0, s32 arg1) {
    s32 mode;

    if (data_02159e70 == 0) {
        return;
    }
    *(u32 *) (data_02159e70 + 0x4890) = arg0;
    *(u32 *) (data_02159e70 + 0x4894) = arg1;
    mode = 4;
    if (((*(volatile u16 *) 0x04000304 & 0x8000) >> 0xF) == 1) {
        mode = 3;
    } else if (((*(volatile u16 *) 0x04000304 & 0x8000) >> 0xF) == 0) {
        mode = 1;
    }
    if (mode == 4) {
        return;
    }
    func_020ebc18(mode, 0x21, 0, 0);
    func_020ebcb4(mode, 0x21, arg0, arg1);
}
