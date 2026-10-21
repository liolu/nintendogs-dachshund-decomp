#include "m2c.h"
void func_02111ccc(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s16 i;
    s16 *p;
    u8 *q;

    p = (s16 *) (arg0 + 0x18);
    p[0] = arg1;
    p[1] = -2;
    p[2] = arg2;
    p[3] = arg3;
    if (arg4 == 0) {
        q = (u8 *) arg0 + 0xA;
        i = 1;
        do {
            *(s16 *) (q + 0x18) += 1;
            i = (s16) (i + 1);
            q += 0xA;
        } while (i < 4);
    } else {
        *(s16 *) (arg0 + 6) = 1;
    }
}
