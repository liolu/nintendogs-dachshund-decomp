/* compiler: 1.2/sp3 -O2,p */
#include "m2c.h"

extern u8 *data_ov004_02163cc0;

void func_ov004_0215d200(s32 arg0) {
    u8 *r3;
    u8 *r2;
    s32 flag;
    s32 old;

    r3 = *(u8 **) (data_ov004_02163cc0 + 0x4C);
    if (r3 != 0) {
        flag                 = (arg0 == 0) ? 1 : 0;
        old                  = *(s32 *) (r3 + 0x1C);
        *(s32 *) (r3 + 0x1C) = (old & ~2) | ((flag & 1) << 1);
    }
    r2 = *(u8 **) (data_ov004_02163cc0 + 0x50);
    if (r2 == 0) {
        return;
    }
    flag                 = (arg0 == 0) ? 1 : 0;
    old                  = *(s32 *) (r2 + 0x1C);
    *(s32 *) (r2 + 0x1C) = (old & ~2) | ((flag & 1) << 1);
}
