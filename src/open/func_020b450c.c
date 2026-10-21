#include "m2c.h"
void func_02006a20(s32 *, s32 *, s32 *);
void func_01ff832c(s32, s32 *, s32 *, s32);
s32 func_020a7e48(void);
s32 func_01ffdb08(s16);
s32 func_02028120(s32);
s32 func_02033bf4(void);
s32 func_02067ca0(s32, s32);
s32 func_02068480(s32, s32);
extern s32 data_0213eeb8;
extern s32 data_0213ed1c;
extern s32 data_0213ed20;
extern s32 data_0213ed24;
extern s32 data_0213ed28;
extern s32 data_0213ed2c;
extern s32 data_0213ed30;
extern s32 data_0213ed34;
extern s32 data_0213ed38;
void func_020b450c(s32 dst, s32 *src, s32 arg2) {
    typedef struct {
        s32 w[3];
    } Copy3;
    s32 v[3];
    s32 w[3];
    s32 i;
    s32 min;
    s32 count;
    s32 max;
    s32 g1;
    s32 res;
    s32 t;
    s32 val;
    s32 x;
    s32 r;
    s32 n;

    *(Copy3 *) dst = *(Copy3 *) src;
    v[0] = -M2C_FIELD(dst, s32 *, 0x0);
    v[1] = 0;
    v[2] = -M2C_FIELD(dst, s32 *, 0x8);
    g1 = data_0213eeb8;
    func_02006a20(v, v, &data_0213eeb8);
    w[0] = M2C_FIELD(dst, s32 *, 0x0);
    w[1] = 0;
    w[2] = M2C_FIELD(dst, s32 *, 0x8);
    func_01ff832c(g1, v, w, dst + 0xC);
    M2C_FIELD(dst, s32 *, 0x18) = 0;
    M2C_FIELD(dst, s32 *, 0x1C) = 0x1000;
    M2C_FIELD(dst, s32 *, 0x20) = 0;
    min = 0x64000;
    count = 0;
    max = 0;
    for (i = 0; i < 3; i++) {
        r = func_01ffdb08((s16) i);
        if (r != 0) {
            n = func_02028120(r);
            if (min > n) {
                min = n;
            }
            count++;
            if (max < n) {
                max = n;
            }
        }
    }
    res = func_020a7e48();
    t = func_02033bf4() / 2;
    if (count == 3) {
        val = t * 7 / 6;
        M2C_FIELD(dst, s32 *, 0x4) = data_0213ed20 + (s32) (((s64) data_0213ed1c * val + 0x800) >> 12);
    } else if (count == 2) {
        val = t * 3 / 2;
        M2C_FIELD(dst, s32 *, 0x4) = data_0213ed28 + (s32) (((s64) data_0213ed24 * val + 0x800) >> 12);
    } else {
        val = t * 2;
        M2C_FIELD(dst, s32 *, 0x4) = data_0213ed30 + (s32) (((s64) data_0213ed2c * val + 0x800) >> 12);
    }
    x = (s32) (((s64) func_02068480(func_02067ca0(val, arg2), res) * 0x1680000 + 0x80000) >> 20);
    if (x < data_0213ed38) {
        x = data_0213ed38;
    }
    if (x > data_0213ed34) {
        x = data_0213ed34;
    }
    M2C_FIELD(dst, s32 *, 0x24) = x;
}
