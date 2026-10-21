#include "m2c.h"

typedef struct {
    s32 f0;
    s32 f1;
    s32 f2;
} Struct12;

extern s32 data_0213ed10;
s32 func_01ffdb08(s16);
void func_020b2a54(s32, s32);
s32 func_02028120(s32);
s32 func_02067cbc(s32, s32);
s32 func_02067ca0(s32, s32);
s32 func_02068654(s32);

void func_020b4310(M2C_UNK arg0, M2C_UNK arg1, s16 arg2) {
    s32 t;
    s32 m;
    s32 w;
    s32 q;
    s32 s;

    t = func_01ffdb08(arg2);
    *(Struct12 *) arg0 = *(Struct12 *) arg1;
    func_020b2a54(t, arg0 + 0xC);
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0x1000;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    w = func_02028120(t);
    m = data_0213ed10;
    w = (s32) (((s64) m * w + 0x800) >> 12);
    q = func_02067cbc(arg0 + 0xC, arg0);
    s = func_02068654(func_02067ca0(w, q));
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (((s64) s * 0x1680000 + 0x80000) >> 20);
}
