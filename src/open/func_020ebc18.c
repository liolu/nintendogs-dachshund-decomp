#include "m2c.h"
extern void *data_02159e70;
void func_020ebc18(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *base = (u8 *) data_02159e70 + arg0 * 0x294;
    u8 *p = *(u8 **) (base + 0x1DF4);
    s16 *q = (s16 *) (p + 8 + arg1 * 8);

    q[0] = (q[0] & ~0xFFF) | ((s16) arg2 & 0xFFF);
    q[1] = (q[1] & ~0xFFF) | ((s16) arg3 & 0xFFF);
}
