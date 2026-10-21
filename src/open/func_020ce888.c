#include "m2c.h"
extern s32 data_02130e18[];
s32 func_020ce888(s32 arg0) {
    s16 best;
    s16 i;

    best = 0;
    i = best;
    for (; i < 0xF; i = (s16) (i + 1)) {
        if (arg0 <= data_02130e18[i]) {
            best = i;
            break;
        }
    }
    return best;
}
