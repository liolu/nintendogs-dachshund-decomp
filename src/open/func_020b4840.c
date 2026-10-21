#include "m2c.h"

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
} Struct12;

extern s32 data_0213ed40;
extern s32 data_0213ed44;
extern s32 data_0213ed48;
extern s32 data_0213ed4c;
extern s32 data_0213ed50;
extern s32 data_0213ed54;
s32 func_01ffdb08(s16);
s32 func_02027458(M2C_UNK);
void func_020b2a54(M2C_UNK, M2C_UNK);
s32 func_02028120(s32);
M2C_UNK func_02067cbc(M2C_UNK, M2C_UNK);
M2C_UNK func_02067ca0(M2C_UNK, M2C_UNK);
M2C_UNK func_02068654(M2C_UNK);
void func_020b4840(M2C_UNK arg0, M2C_UNK arg1, s16 arg2) {
    s32 t;
    s32 u;
    s32 v;
    s32 w;
    s32 q;
    s32 s;

    t = func_01ffdb08(arg2);
    if (func_02027458(t) == 0) {
        s32 b;
        s32 a;
        s32 c;
        a = data_0213ed4c;
        b = data_0213ed50;
        c = data_0213ed54;
        u = func_01ffdb08(arg2);
        *(Struct12 *) arg0 = *(Struct12 *) arg1;
        M2C_FIELD(arg0, s32 *, 0x4) = c;
        func_020b2a54(u, arg0 + 0xC);
        v = func_02028120(u);
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) (((s64) b * v + 0x800) >> 12);
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
        M2C_FIELD(arg0, s32 *, 0x1C) = 0x1000;
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        w = func_02028120(u);
        q = func_02067cbc(arg0 + 0xC, arg0);
        s = func_02068654(func_02067ca0((s32) (((s64) a * w + 0x800) >> 12), q));
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (((s64) s * 0x1680000 + 0x80000) >> 20);
    } else if (func_02027458(t) == 1) {
        s32 b;
        s32 a;
        s32 c;
        a = data_0213ed40;
        b = data_0213ed44;
        c = data_0213ed48;
        u = func_01ffdb08(arg2);
        *(Struct12 *) arg0 = *(Struct12 *) arg1;
        M2C_FIELD(arg0, s32 *, 0x4) = c;
        func_020b2a54(u, arg0 + 0xC);
        v = func_02028120(u);
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) (((s64) b * v + 0x800) >> 12);
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
        M2C_FIELD(arg0, s32 *, 0x1C) = 0x1000;
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        w = func_02028120(u);
        q = func_02067cbc(arg0 + 0xC, arg0);
        s = func_02068654(func_02067ca0((s32) (((s64) a * w + 0x800) >> 12), q));
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (((s64) s * 0x1680000 + 0x80000) >> 20);
    }
}
