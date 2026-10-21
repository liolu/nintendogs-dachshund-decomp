#include "m2c.h"

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
} Struct12;

extern s32 data_0213ec60;
extern s32 data_0213ec68;
extern s32 data_0213ec6c;
extern s32 data_0213ec64;
s32 func_01ffdb08(s32);
void func_020b2a54(M2C_UNK, M2C_UNK);
s32 func_02028120(s32);
M2C_UNK func_02067cbc(M2C_UNK, M2C_UNK);
M2C_UNK func_02067ca0(M2C_UNK, M2C_UNK);
M2C_UNK func_02068654(M2C_UNK);

void func_020b300c(M2C_UNK arg0, M2C_UNK arg1) {
    s32 t;
    s32 u;
    s32 v;
    s32 w;
    s32 q;
    s32 s;
    s32 x;
    s32 a;
    s32 b;
    s32 c;
    s32 d;

    t = func_01ffdb08(arg1);
    func_020b2a54(t, arg0 + 0xC);
    a = data_0213ec60;
    v = func_02028120(t);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (((s64) v * a + 0x800) >> 12);
    b = data_0213ec68;
    w = func_02028120(t);
    x = M2C_FIELD(arg0, s32 *, 0x14) + (s32) (((s64) w * b + 0x800) >> 12);
    c = data_0213ec6c;
    u = M2C_FIELD(arg0, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x0) = u;
    M2C_FIELD(arg0, s32 *, 0x4) = c;
    M2C_FIELD(arg0, s32 *, 0x8) = x;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0x1000;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    d = data_0213ec64;
    v = func_02028120(t);
    q = func_02067cbc(arg0 + 0xC, arg0);
    s = func_02068654(func_02067ca0((s32) (((s64) v * d + 0x800) >> 12), q));
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (((s64) s * 0x1680000 + 0x80000) >> 20);
}
