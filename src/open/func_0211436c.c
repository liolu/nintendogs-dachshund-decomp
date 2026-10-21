#include "m2c.h"
#pragma opt_strength_reduction off
void func_0211436c(s32 arg0, s32 arg1) {
    s16 i;
    s16 *entry;

    entry = (s16 *) (arg0 + arg1 * 2);
    if (entry[0x63] == -1) {
        return;
    }
    for (i = 0; i < 3; i++) {
        s16 *p = (s16 *) (arg0 + i * 2);

        if (p[0x63] > entry[0x63]) {
            p[0x63] = p[0x63] - 1;
        }
    }
    ((s16 *) arg0)[0x66] = ((s16 *) arg0)[0x66] - 1;
    ((s16 *) arg0)[arg1 + 0x63] = -1;
}
