#include "m2c.h"
s32 func_0209afe4(s32 arg0, s32 arg1) {
    s32 i;
    s32 a;
    s32 count;

    a = 1;
    count = 0;
    if (arg0 == 0) {
        count = 1;
    } else {
        for (i = 0; i < arg1; i++) {
            if (arg0 >= a) {
                count++;
            }
            a *= 10;
        }
    }
    return count;
}
