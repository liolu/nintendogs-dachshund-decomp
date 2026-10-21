#include "m2c.h"

typedef struct {
    M2C_UNK f0;
    M2C_UNK f4;
    M2C_UNK f8;
} Struct12;

extern M2C_UNK data_0213ed94;
extern M2C_UNK data_0213ed98;
extern M2C_UNK data_0213ed9c;
extern M2C_UNK data_0213ed88;
extern M2C_UNK data_0213ed8c;
extern M2C_UNK data_0213ed90;
M2C_UNK func_02067ca0(M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_01ffdb08(M2C_UNK);
M2C_UNK func_02027458(M2C_UNK);
void func_020b2a54(M2C_UNK, M2C_UNK);
M2C_UNK func_02028120(M2C_UNK);
M2C_UNK func_02067cbc(M2C_UNK, M2C_UNK);
M2C_UNK func_02068654(M2C_UNK);
void func_020b4eac(M2C_UNK arg0, M2C_UNK arg1, s16 arg2) {
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
        a = data_0213ed94;
        b = data_0213ed98;
        c = data_0213ed9c;
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
        a = data_0213ed88;
        b = data_0213ed8c;
        c = data_0213ed90;
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
