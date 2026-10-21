#include "m2c.h"
s32 func_02033ed0(s32);
s32 func_020449c4(s32);
void *func_01ffdb08(s32);
s32 func_0209a094(s32 arg0) {
    s16 n;
    s16 i;
    void *p;

    n = 0;
    i = -1;
    do {
        i = (s16) (i + 1);
        while (i < 3 && ((p = func_01ffdb08(i)) == 0 || func_020449c4(i) != 0 || func_02033ed0((s32) p) != 0)) {
            i = (s16) (i + 1);
        }
    } while (n++ < arg0);
    if (i >= 3) {
        i = -1;
    }
    return i;
}
