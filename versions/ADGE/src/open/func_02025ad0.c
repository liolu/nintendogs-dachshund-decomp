#include "m2c.h"
void func_02025ad0(void *arg0) {
    s32 x = M2C_FIELD(M2C_FIELD(arg0, void **, 0x9E8), s32 *, 8);

    M2C_FIELD(arg0, s32 *, 0x920) = (s32) (((s64) x * 0x1E6E + 0x800) >> 12);
}
