#include "m2c.h"

extern void *data_02159e38;

s32 func_020ce510(s32 *arg0, u8 *arg1) {
    s32 result = 1;
    s16 i = 0;
    s32 found;
    s32 match;
    s16 j;
    u8 *p = (u8 *) M2C_FIELD(data_02159e38, s32 *, 0x141C) + 0x568;

    do {
        found = 0;
        if (*(s8 *) (p + 0xE) != 0) {
            if (!(arg0[0] == *(s32 *) p && arg0[1] == *(s32 *) (p + 4))) {
                match = 1;
                j = 0;
                {
                    u8 *b = arg1;
                    u8 *a = p;
                    for (; j < 6; j++) {
                        if (a[8] != b[0]) {
                            match = 0;
                            break;
                        }
                        b++;
                        a++;
                    }
                }
                if (match == 0) {
                    goto next;
                }
            }
            found = 1;
        }
    next:
        if (found != 0) {
            result = 0;
            break;
        }
        i++;
        p += 0x10;
    } while (i < 0x14);
    return result;
}
