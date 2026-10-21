#include "m2c.h"
extern void *data_0215a04c;
extern void func_02111b88(void *arg0, s32 arg1);
void func_02111634(s32 arg0, s32 arg1) {
    s8 *p;
    s32 i;

    p = data_0215a04c;
    func_02111b88(p, 2);
    *(u16 *) (p + 4) = 0;
    for (i = 0; i < 3; i++) {
        M2C_FIELD(p + 0x20 + i * 0x14, u16 *, 0) |= 1;
        M2C_FIELD(p + 0x20 + i * 0x14, s16 *, 2) = i;
    }
    if (arg0 != 0) {
        *(u32 *) arg0 = 0x4453454C;
        *(u16 *) (arg0 + 4) = arg1;
        *(s16 *) (arg0 + 6) = -1;
        *(s16 *) (arg0 + 8) = -1;
    }
}
