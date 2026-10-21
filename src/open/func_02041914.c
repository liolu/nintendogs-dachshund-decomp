#include "m2c.h"

extern void *data_0214d750;
extern u16 data_02139a78[];

s32 func_02041914(s32 arg0) {
    s16 tbl[5];
    s16 a;
    s16 b;
    s8 idx;
    u8 *p;
    s32 *q;
    s32 dy;
    s32 qy;

    q = (s32 *) ((u8 *) data_0214d750 + 0x2C);
    p = M2C_FIELD(arg0, u8 **, 0x9E8);
    a = (s16) (q[0] - *(volatile u8 *) (p + 0x75));
    dy = *(volatile u8 *) (p + 0x74);
    qy = q[1];
    b = (s16) (qy - dy);
    tbl[0] = data_02139a78[0];
    tbl[1] = data_02139a78[1];
    tbl[2] = data_02139a78[2];
    tbl[3] = data_02139a78[3];
    tbl[4] = data_02139a78[4];
    if (b < 0) {
        b += 0x3C;
        a -= 1;
    }
    if (a < 0) {
        a += 0x18;
    }
    idx = M2C_FIELD(arg0, s8 *, 0x8E);
    return (s16) (a * 0x3C + b) < tbl[idx];
}
