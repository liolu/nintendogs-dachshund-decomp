#include "m2c.h"
extern void *data_0215a04c;
void func_02111b88(void *p, s32 v);
extern s32 data_0215a03c;
extern M2C_UNK (*data_02139cb4[])(M2C_UNK);
void func_02110fb8(void) {
    void *p = data_0215a04c;
    void *q;

    func_02111b88(p, 0xE);
    M2C_FIELD(p, u16 *, 4) = 0xA;
    q = data_0215a04c;
    M2C_FIELD(q, u16 *, 0x20) |= 1;
    M2C_FIELD(q, u16 *, 0x20) |= 2;
    M2C_FIELD(p, u16 *, 0x1C) = 0;
}
