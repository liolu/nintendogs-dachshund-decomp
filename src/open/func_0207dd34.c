#include "m2c.h"
s32 func_0207dd34(s32 arg0) {
    volatile s32 *p;
    volatile s32 *ac;

    p = (volatile s32 *) (arg0 + 0x24);
    ac = (volatile s32 *) (arg0 + 0x1C);
    if (*ac != p[1]) {
        return 0;
    }
    *ac = p[0];
    p[1] = *ac;
    return *ac - arg0;
}
