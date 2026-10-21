#include "m2c.h"
s32 func_020cd6bc(s32);
s32 func_020ccf24(s32, s32, s32);
s32 func_020cfcd4(s32 arg0, s32 arg1, s32 arg2) {
    s32 ret;
    s32 base;
    s16 n;
    s16 i;
    s8 *p;

    ret = -1;
    base = arg0 + 0x848;
    if (func_020cd6bc(base) != 0) {
        if (func_020ccf24(base, arg1, arg2) == 0) {
            if (*(s8 *) (arg0 + 0x6E) >= *(s8 *) (arg0 + 0x6F)) {
                ret = 0;
            } else {
                i = n = 0;
                p = (s8 *) (arg0 + 0x90);
                do {
                    if (*(u8 *) (p + 0x28) != 0) {
                        n = (s16) (n + 1);
                    }
                    p += 0x3C;
                    i = (s16) (i + 1);
                } while (i < 0x14);
                if (n >= 0xF) {
                    ret = 1;
                }
            }
        } else {
            i = n = 0;
            p = (s8 *) (arg0 + 0x90);
            do {
                if (*(u8 *) (p + 0x28) != 0) {
                    n = (s16) (n + 1);
                }
                p += 0x3C;
                i = (s16) (i + 1);
            } while (i < 0x14);
            if (n >= 0xF) {
                ret = 1;
            }
        }
    }
    return ret;
}
