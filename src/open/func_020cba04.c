#include "m2c.h"
s32 func_020cba04(u8 *arg0, u32 arg1, u32 arg2) {
    u8 *tbl = *(u8 **) (arg0 + 0x24);
    u32 n = *(u16 *) (tbl + 8);
    u32 key = ((arg1 << 16) & 0xFFFF0000) | (arg2 & 0xFFFF);
    s32 result = -1;
    u32 i;

    for (i = 0; i < n; i++) {
        u8 *e = *(u8 **) (arg0 + 0x28) + i * 8;
        if (*(u32 *) e == key) {
            result = *(u16 *) (e + 4);
            break;
        }
    }
    return result;
}
