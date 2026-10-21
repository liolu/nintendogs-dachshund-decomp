#include "m2c.h"

extern s32 data_0213ed0c;
extern u16 data_02155620;
extern s32 data_02155630;
extern s32 *data_0215a048;
extern s32 data_0213ed08;
s32 func_01ffdb08(s32);
void func_020b2a54(s32, s32 *);
s32 func_02028120(s32);
void func_020b780c(s32, s32 *, s32, s32, s32);
s32 func_02067c34(s32);

void func_020b410c(s32 arg0, s32 arg1) {
    s32 t;
    s32 dst;
    s32 m;
    s32 w;
    s32 v;
    s32 th;

    dst = arg0;
    t = func_01ffdb08(arg1);
    func_020b2a54(t, (s32 *) (dst + 0xC));
    m = data_0213ed0c;
    w = func_02028120(t);
    func_020b780c(dst, (s32 *) (dst + 0xC), (s32) (((s64) w * m + 0x800) >> 12), 0, data_02155620);
    M2C_FIELD(dst, s32 *, 0x4) = data_02155630;
    th = data_0215a048[3];
    v = (s32) (((s64) M2C_FIELD(dst, s32 *, 0x0) * M2C_FIELD(dst, s32 *, 0x0) + 0x800) >> 12) +
        (s32) (((s64) M2C_FIELD(dst, s32 *, 0x8) * M2C_FIELD(dst, s32 *, 0x8) + 0x800) >> 12);
    if (func_02067c34(v) > th) {
        if (M2C_FIELD(dst, s32 *, 0x4) < 0x8000) {
            M2C_FIELD(dst, s32 *, 0x4) = 0x8000;
        }
    } else {
        if (M2C_FIELD(dst, s32 *, 0x4) < 0x1000) {
            M2C_FIELD(dst, s32 *, 0x4) = 0x1000;
        }
    }
    M2C_FIELD(dst, s32 *, 0x18) = 0;
    M2C_FIELD(dst, s32 *, 0x1C) = 0x1000;
    M2C_FIELD(dst, s32 *, 0x20) = 0;
    M2C_FIELD(dst, s32 *, 0x24) = data_0213ed08;
}
