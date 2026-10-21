#include "m2c.h"
extern void *data_0215a04c;
s32 func_02110f74(void) {
    s16 i;
    s8 *p;
    s32 ret = -1;

    p = (s8 *) data_0215a04c + 0x20;
    for (i = 0; i < 3; i++) {
        if (M2C_FIELD(p, u16 *, 0) & 4) {
            ret = i;
            break;
        }
        p += 0x14;
    }
    return ret;
}
