#include "m2c.h"
extern s16 data_02147e8c[];
extern void *data_02159fe4;
extern void *data_02159e70;
s32 func_0206cbc4(u16, s32, s32);
s32 func_020034f0(s32, s32);
s32 func_020e8384(s32 arg0, s32 arg1) {
    s16 *p = data_02147e8c;

    while (p[2] != -1) {
        if (p[1] == arg1 && p[0] == arg0) {
            return (s32) p;
        }
        p += 16;
    }
    return 0;
}
