#include "m2c.h"
s32 func_0203535c(s32);
M2C_UNK func_02045da4(s32, M2C_UNK, M2C_UNK, s32, s32, s32);
void func_02045c38(s32 arg0) {
    M2C_FIELD(arg0, u16 *, 0x12E) = 0x8000;
    func_02045da4(arg0, 0, 0xD, arg0 + 0x324, func_0203535c(arg0), 0x2E6);
}
