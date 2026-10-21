#include "m2c.h"
extern void *data_0215a03c;
void func_021058ac(s32 arg0) {
    s32 v;

    v = (s32) (((s64) arg0 * 0xA000 + 0x800) >> 12);
    M2C_FIELD(data_0215a03c, s32 *, 0xC) = v;
    M2C_FIELD(M2C_FIELD(M2C_FIELD(data_0215a03c, void **, 0x48), void **, 0x78), s32 *, 8) =
        M2C_FIELD(data_0215a03c, s32 *, 0xC);
}
