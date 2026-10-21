#include "m2c.h"

extern s8 *volatile data_0215467c[];

s32 func_02094e54(s32 arg0, u8 *arg1) {
    s32 i;
    s32 r;
    u8 *q;
    s32 off;
    s8 *base;
    s8 *p;

    r = 0;
    i = 0;
    q = arg1;
    off = 0;
    for (; i < 20; i++, q += 0x13C, off += 0x18) {
        if (arg1 != NULL) {
            if (*(u16 *) q == 0 || *(u16 *) (q + 2) != 0x100) {
                r |= 1 << i;
            }
            base = data_0215467c[arg0] + off;
            *(s8 **) (base + 0xA8) = (s8 *) q;
            p = data_0215467c[arg0] + off;
            if (*(u16 *) (*(s8 **) (p + 0xA8)) != 0) {
                *(s32 *) (p + 0x94) = 0;
                *(s32 *) (data_0215467c[arg0] + off + 0x98) = 1;
            }
        } else {
            *(s32 *) (data_0215467c[arg0] + off + 0x94) = 0;
            *(s32 *) (data_0215467c[arg0] + off + 0x98) = 0;
        }
    }
    return r;
}
