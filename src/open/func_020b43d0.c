#include "m2c.h"
void func_02006a20(s32 *, s32 *, s32 *);
void func_01ff832c(s32, s32 *, s32 *, s32);
s32 func_020a7e48(void);
s32 func_01ffdb08(s32);
s32 func_02028120(s32);
s32 func_02067ca0(s32, s32);
s32 func_02068480(s32, s32);
extern s32 data_0213eeb8;
extern s32 data_0213ed18;
extern s32 data_0213ed14;
void func_020b43d0(s32 dst, s32 *src, s32 arg2, s32 arg3) {
    typedef struct {
        s32 w[3];
    } Copy3;
    s32 v[3];
    s32 w[3];
    s32 g1;
    s32 g2;
    s32 g3;
    s32 t;
    s32 res;

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
    res = func_020a7e48();
    t = func_02028120(func_01ffdb08(arg3));
    t = (t * 2) / 2 * 2;
    g2 = data_0213ed18;
    g3 = data_0213ed14;
    M2C_FIELD(dst, s32 *, 0x4) = g2 + (s32) (((s64) g3 * t + 0x800) >> 12);
    M2C_FIELD(dst, s32 *, 0x24) =
        (s32) (((s64) func_02068480(func_02067ca0(t, arg2), res) * 0x1680000 + 0x80000) >> 20);
}
