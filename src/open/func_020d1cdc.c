#include "m2c.h"
void func_020d1cdc(u8 *arg0, s32 arg1, s32 arg2) {
    u32 stride = *(u32 *) (arg0 + 4);
    u8 *p = *(u8 **) (arg0 + 0x10) + stride * arg1;
    u8 *end = p + stride - 8;
    u16 sum;
    u32 n;
    u32 i;

    if (!(*(u16 *) (end + 6) & 1)) {
        return;
    }
    *(u16 *) (end + 6) &= ~1;
    *(u32 *) p = 0;
    sum = 0;
    if (arg2 != 0) {
        *(u32 *) end = 0x444F473F;
        n = stride - 4;
        for (i = 0; i < n; i++) {
            sum = (u16) (sum + p[i]);
        }
        *(u16 *) (end + 4) = sum;
    } else {
        *(u32 *) end = 0x544F5458;
        n = stride - 4;
        for (i = 0; i < n; i++) {
            sum = (u16) (sum + p[i]);
        }
        *(u16 *) (end + 4) = sum ^ 0xFFFF;
    }
    *(u16 *) (end + 6) |= 2;
}
