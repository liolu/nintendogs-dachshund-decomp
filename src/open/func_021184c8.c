#include "m2c.h"
s32 func_01ffdb08(s32);
s32 func_020cf588(s32, s32);
void func_021184c8(s32 arg0, s32 arg1) {
    s16 count;
    s16 i;
    s32 res;

    count = 0;
    for (i = 0; i < 3; i++) {
        if (func_01ffdb08(i) != 0) {
            count = count + 1;
        }
    }
    res = func_020cf588(0, arg1);
    if (res > count) {
        res = count;
    }
    *(u16 *) (arg0 + 0x10C) = res;
}
