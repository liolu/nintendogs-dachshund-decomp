#include "m2c.h"
extern void *data_02159e74;
s32 func_020dafcc(s32 arg0, s32 arg1) {
    s32 v = -1;
    s32 i = 0;
    s8 *p = (s8 *) data_02159e74 + 4;

    do {
        s8 *q = p + 0x18;
        if ((*(s32 *) (p + 4) != 0) && (*(s32 *) (p + 8) != 0) && (*(s32 *) q == arg1)) {
            v = i;
            break;
        }
        i++;
        p += 0x1B8;
    } while (i < 0x18);
    return v;
}
