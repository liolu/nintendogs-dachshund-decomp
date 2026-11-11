#include "m2c.h"
s32 func_0203535c(s32);
M2C_UNK func_02045da4(s32, M2C_UNK, M2C_UNK, s32, s32, s32);
extern void *data_0214da84;
void func_020ca368(void *);
s32 func_020ca3a8(s32, s32);
void func_02045bec(s32 arg0) {
    M2C_FIELD(arg0, u16 *, 0x12E) = 0x8000;
    func_02045da4(arg0, 1, 0xD, arg0 + 0x330, func_0203535c(arg0), 0x2E7);
}
