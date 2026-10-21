#include "m2c.h"

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
} Struct12;

extern s32 data_0213eeb0;

s32 func_01ffdb08(s16);
void func_020b2a54(M2C_UNK, M2C_UNK);
s32 func_02028120(s32);
M2C_UNK func_02067cbc(M2C_UNK, M2C_UNK);
M2C_UNK func_02067ca0(M2C_UNK, M2C_UNK);
M2C_UNK func_02068654(M2C_UNK);
void func_020b6964(M2C_UNK arg0, M2C_UNK arg1, s16 arg2) {
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
    m = data_0213eeb0;
    w = func_02028120(t);
    q = func_02067cbc(arg0 + 0xC, arg0);
    s = func_02068654(func_02067ca0((s32) (((s64) w * m + 0x800) >> 12), q));
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (((s64) s * 0x1680000 + 0x80000) >> 20);
}
