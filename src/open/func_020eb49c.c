#include "m2c.h"
extern void *data_02159e70;

void func_020eb49c(void) {
    s16 *p;
    s32 i;

    p = (s16 *) ((s32) data_02159e70 + 0x283C) + 0x800;
    for (i = 0; i < 0x80; i++) {
        M2C_FIELD(p, s32 *, 0) = 0;
        p[3] = 0;
        p[4] = 0;
        p[5] = 0;
        p[6] = 0;
        p[2] = 0;
        p += 8;
    }
}
