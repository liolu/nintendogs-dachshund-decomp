#include "m2c.h"
extern s32 *data_0214c97c[];
s32 func_02119da8(s32 arg0, s32 arg1, s32 arg2) {
    s32 v;
    s32 *p;
    s16 idx;

    v = 0;
    if (arg2 >= 1 && arg2 <= 3) {
        p = data_0214c97c[arg0];
        idx = (s16) (arg2 - 1);
        switch (arg1) {
        case 0:
            break;
        case 1:
            v = ((s32 **) p)[0][idx];
            break;
        case 2:
            v = ((s32 **) p)[1][idx];
            break;
        case 3:
            v = ((s32 **) p)[2][idx];
            break;
        case 4:
            v = ((s32 **) p)[3][idx];
            break;
        case 5:
            v = ((s32 **) p)[4][idx];
            break;
        }
    }
    return v;
}
