#include "m2c.h"
extern void *data_02159e38;
s32 func_020cf098(s32 arg0) {
    s32 result = 0;
    s16 i;
    s32 *needle = (s32 *) ((s8 *) arg0 + 0x640);
    s32 ok;
    s8 *p;

    p = (s8 *) M2C_FIELD(data_02159e38, s32 *, 0x1434) + 4;
    for (i = 0; i < 0x32; i++) {
        ok = 1;

        if (*(s32 *) p == 0 && *(s32 *) (p + 4) == 0) {
            ok = 0;
        }
        if (ok != 0 && *(s32 *) p == needle[0] && *(s32 *) (p + 4) == needle[1]) {
            result = (s32) p;
            break;
        }
        p += 0xA4;
    }
    return result;
}
