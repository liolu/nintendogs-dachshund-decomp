#include "m2c.h"
extern s32 *data_0214da84;
void func_02045da4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_02045d1c(s32 arg0) {
    s32 t;
    s32 c;

    *(u16 *)(arg0 + 0x12E) = 0x8000;
    t = (*data_0214da84 * 0x10DCD) + 1;
    c = (u16) ((u32) ((u16) t * 0x32) >> 0x10) == 0;
    *data_0214da84 = t;
    func_02045da4(arg0, 1, 0xc, arg0 + 0x330, c, 0x2e7);
}
