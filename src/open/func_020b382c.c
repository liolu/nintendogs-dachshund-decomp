#include "m2c.h"
extern s32 data_0213ecf4;
extern s32 data_0213ecf0;
extern s32 data_0213ecec;
extern s32 data_0213ece8;
extern s32 data_0213ece4;
extern s32 data_0213ece0;
s32 func_020a7e48(void);
s32 func_01ffdb08(s32 arg0);
void func_02006a20(s32 *a, s32 *b);
void func_01ff832c(s32 a, s32 *b, s32 *c, s32 d);
s32 func_02028120(s32 arg0);
s32 func_02067ca0(s32 a, s32 b);
s32 func_02068480(s32 a, s32 b);
void func_020b382c(s32 dst, s32 *src, s32 arg2, s32 arg3) {
    s32 v[3];
    s32 w[3];
    s32 v2[3];
    s32 w2[3];
    s32 g1;
    s32 g2;
    s32 g3;
    s32 g4;
    s32 g5;
    s32 g6;
    s32 a;
    s32 t;
    s32 res;

    res = func_020a7e48();
    a = func_01ffdb08(arg3);
    g1 = data_0213ecf4;
    v[0] = -src[0];
    v[1] = 0;
    v[2] = -src[2];
    func_02006a20(v, v);
    w[0] = src[0];
    w[1] = 0;
    w[2] = src[2];
    func_01ff832c(g1, v, w, dst);
    t = func_02028120(a);
    g2 = data_0213ecf0;
    g3 = data_0213ecec;
    M2C_FIELD(dst, s32 *, 0x4) = g3 + (s32) (((s64) g2 * t + 0x800) >> 12);
    g4 = data_0213ece8;
    v2[0] = -src[0];
    v2[1] = 0;
    v2[2] = -src[2];
    func_02006a20(v2, v2);
    w2[0] = src[0];
    w2[1] = 0;
    w2[2] = src[2];
    func_01ff832c(g4, v2, w2, dst + 0xC);
    g5 = data_0213ece4;
    M2C_FIELD(dst, s32 *, 0x10) = g5;
    M2C_FIELD(dst, s32 *, 0x18) = 0;
    M2C_FIELD(dst, s32 *, 0x1C) = 0x1000;
    M2C_FIELD(dst, s32 *, 0x20) = 0;
    t = func_02028120(a);
    t = (t * 2) / 2;
    g6 = data_0213ece0;
    M2C_FIELD(dst, s32 *, 0x24) =
        (s32) (((s64) func_02068480(func_02067ca0((s32) (((s64) t * g6 + 0x800) >> 12), arg2), res) *
                    0x1680000 +
                0x80000) >>
               20);
}
