#include "m2c.h"
extern void *data_0215a04c;
s32 func_02110f1c(void) {
    s16 i;
    s16 count = 0;
    s8 *p;

    p = (s8 *) data_0215a04c;
    for (i = 0; i < 3; i++) {
        if (M2C_FIELD(p, u16 *, 0x20) & 1) {
            count++;
        }
        p += 0x14;
    }
    return count;
}
