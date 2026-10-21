#include "m2c.h"

s32 func_020b8384(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 diff = arg1 - arg0;
    s32 v = (s32)(((s64)arg2 * diff + 0x800) >> 12);
    s32 r = v;
    s32 ad;
    s32 av;

    av = (v > 0) ? v : -v;
    if (av <= arg3) {
        ad = (diff > 0) ? diff : -diff;
        if (ad < arg3) {
            r = diff;
        } else {
            r = (diff > 0) ? arg3 : -arg3;
        }
    }
    return arg0 + r;
}
