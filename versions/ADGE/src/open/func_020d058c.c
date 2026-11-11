#include "m2c.h"

s32 func_020d058c(u8 *a, u8 *b) {
    s32 result = 0;
    s32 ka;
    s32 kb;
    s32 ta;
    s32 tb;

    if (*(s32 *) a == 0 && *(s32 *) (a + 4) == 0) {
        goto end;
    }
    if (*(s32 *) b == 0 && *(s32 *) (b + 4) == 0) {
        goto end;
    }
    ka = a[5] * 0x180 + (a[4] - 1) * 0x20 + (a[3] - 1);
    kb = b[5] * 0x180 + (b[4] - 1) * 0x20 + (b[3] - 1);
    if (ka < kb) {
        result = 1;
        goto end;
    }
    if (ka != kb) {
        goto end;
    }
    ta = a[2] * 0xE10 + a[1] * 0x3C + a[0];
    tb = b[2] * 0xE10 + b[1] * 0x3C + b[0];
    if (ta < tb) {
        result = 1;
    }
end:
    return result;
}
