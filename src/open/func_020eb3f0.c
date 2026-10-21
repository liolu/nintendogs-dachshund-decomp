#include "m2c.h"
extern void *data_02159e70;
void func_020e8570(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32);
M2C_UNK func_020b114c(void *, M2C_UNK, M2C_UNK, s32, s32, s32);
void func_020d6068(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020ebc18(s32, s32, s32, s32);
void func_020ebcb4(s32, s32, s32, s32);
void func_020eb3f0(s32 arg0, s16 arg1) {
    s16 *p;
    s32 i;

    p = (s16 *) ((s32) data_02159e70 + 0x283C + (arg0 << 0xB));
    for (i = 0; i < 0x80; i++) {
        p[2] = arg1;
        p += 8;
    }
}
