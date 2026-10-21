#include "m2c.h"
extern void *data_0215a044;
extern void *data_02159e70;
extern void *data_02159fc4;
void func_020e3e2c(s32 arg0);
void func_020e1a88(void) {
    u8 *p = M2C_FIELD(data_0215a044, u8 **, 0x34);
    u32 v12 = p != NULL ? M2C_FIELD(p, s16 *, 0x12) : 0;
    u32 v14 = p != NULL ? M2C_FIELD(p, s16 *, 0x14) : 0;
    u32 v16 = p != NULL ? M2C_FIELD(p, s16 *, 0x16) : 0;
    u32 v10 = p != NULL ? M2C_FIELD(p, s16 *, 0x10) : 0;
    u8 *dst;
    s32 *d;

    if (M2C_FIELD(data_02159e70, s32 *, 0xA8) != 6) {
        return;
    }
    dst = data_02159fc4;
    *(s32 *) (dst + 0x184) = v12 / 10;
    d = (s32 *) (dst + 0x184);
    d[1] = v14 / 10;
    d[2] = v16 / 10;
    d[3] = v10;
    func_020e3e2c(0xA);
}
