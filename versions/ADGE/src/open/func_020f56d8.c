#include "m2c.h"
M2C_UNK func_020fb9a4(void *, void *, M2C_UNK, M2C_UNK, s32);
void func_020f56d8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xA8) = (s32) (M2C_FIELD(arg0, s32 *, 0xA8) + 0xC000);
    func_020fb9a4(arg0 + 0xA8, arg0 + 0xB0, (M2C_FIELD(arg0, s16 *, 0x90) == 3) << 1, 0, 0);
}
