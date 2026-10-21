#include "m2c.h"
extern void *data_02159fe4;
void func_0206cbc4(u16, void *, s32);
void func_0207e124(s32);
s32 func_0207dd68(s32, u32);
extern void *data_02159e70;
s32 func_020034f0(s32, s32);
extern u8 data_02147e8c[];
void *func_02114cec(s16);
extern s16 data_02147e8c2[];
void func_020e8570(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32);
M2C_UNK func_020b114c(void *, M2C_UNK, M2C_UNK, s32, s32, s32);
void func_020e809c(void) {
    s32 i;
    volatile u16 z;
    s8 *cur;

    if (M2C_FIELD(data_02159fe4, s32 *, 0) == 0) {
        return;
    }
    cur = (s8 *) data_02159fe4 + 8;
    for (i = 0; i < 10; i++) {
        if (M2C_FIELD(cur, s32 *, 8) != 0) {
            func_0207e124(M2C_FIELD(cur, s32 *, 0xC));
            z = 0;
            func_0206cbc4(z, cur, 0x10);
        }
        cur += 0x10;
    }
    func_0207dd68(M2C_FIELD(data_02159fe4, s32 *, 4), 0x434E535F);
    M2C_FIELD(data_02159fe4, s32 *, 0) = 0;
}
