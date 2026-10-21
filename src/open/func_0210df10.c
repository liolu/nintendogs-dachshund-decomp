#include "m2c.h"
extern void *data_0215a044;
s16 *func_0210df10(s32 arg0, s32 arg1) {
    s16 *res = 0;
    s16 i = 0;
    s16 last = -1;
    s16 count = 0;
    s16 *e;
    s16 v;

    e = (s16 *) (M2C_FIELD(M2C_FIELD(&data_0215a044, void **, 0), s32 *, 0x34) + 0x18);
    for (i = 0; i < 4; i++) {
        v = e[0];
        if (v != 0) {
            if (last != v) {
                count = 0;
                last = v;
            } else {
                count = (s16) (count + 1);
            }
            if (v == arg0 && arg1 == count) {
                res = e;
                break;
            }
        }
        e += 5;
    }
    return res;
}
