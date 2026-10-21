#include "m2c.h"
extern s32 *data_0214da84;
void func_02048360(M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_02028114(M2C_UNK);
s32 func_0202507c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_0203535c(M2C_UNK);
void func_02035fd8(M2C_UNK);
void func_0202f9a0(M2C_UNK);
void func_0204795c(s32 arg0) {
    s32 t;
    s32 c;

    t = (*data_0214da84 * 0x10DCD) + 1;
    c = (u16) ((u32) ((u16) t * 0x32) >> 0x10) == 0;
    *data_0214da84 = t;
    func_02048360(arg0, 4, c);
}
