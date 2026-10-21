#include "m2c.h"

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
} Struct12;

extern s32 data_0213edb8;
extern s32 data_0213edbc;
extern s32 data_0213edc0;
s32 func_01ffdb08(s32);
void func_020b2a54(M2C_UNK, M2C_UNK);
s32 func_02028120(s32);
M2C_UNK func_02067cbc(M2C_UNK, M2C_UNK);
M2C_UNK func_02067ca0(M2C_UNK, M2C_UNK);
M2C_UNK func_02068654(M2C_UNK);

extern s32 data_0213eda0;
extern s32 data_0213eda4;
extern s32 data_0213eda8;
extern s32 data_0213edac;
extern s32 data_0213edb0;
extern s32 data_0213edb4;
extern s32 data_0213edc4;
extern s32 data_0213edc8;
extern s32 data_0213edcc;
extern s32 data_0213edd0;
extern s32 data_0213edd4;
extern s32 data_0213edd8;
extern s32 data_0213eddc;
extern s32 data_0213ede0;
extern s32 data_0213ede4;
extern s32 data_0213ede8;
extern s32 data_0213edec;
extern s32 data_0213edf0;
s32 func_02027458(M2C_UNK);
void func_020b52f4(M2C_UNK arg0, M2C_UNK arg1, s32 arg2) {
    s32 t;
    s32 v;
    s32 w;
    s32 q;
    s32 s;
    s32 a;
    s32 c;
    s32 b;

    a = data_0213edb8;
    b = data_0213edbc;
    c = data_0213edc0;
    t = func_01ffdb08(arg2);
    *(Struct12 *) arg0 = *(Struct12 *) arg1;
    M2C_FIELD(arg0, s32 *, 0x4) = c;
    func_020b2a54(t, arg0 + 0xC);
    v = func_02028120(t);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (((s64) b * v + 0x800) >> 12);
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0x1000;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    w = func_02028120(t);
    q = func_02067cbc(arg0 + 0xC, arg0);
    s = func_02068654(func_02067ca0((s32) (((s64) a * w + 0x800) >> 12), q));
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (((s64) s * 0x1680000 + 0x80000) >> 20);
}
