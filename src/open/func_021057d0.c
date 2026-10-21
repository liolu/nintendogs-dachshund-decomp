#include "m2c.h"
extern s32 data_0215a03c;
extern void *data_0215a04c;
extern M2C_UNK (*data_02139cb4[])(M2C_UNK);
void func_02111b88(void *p, s32 v);
s32 func_021057d0(void) {
    s32 x;

    x = M2C_FIELD(data_0215a03c, s32 *, 0xC);
    return (s32) (((s64) x * 0x19A + 0x800) >> 12);
}
