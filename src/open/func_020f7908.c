#include "m2c.h"

typedef struct {
    s32 v[3];
} Vec;

void func_02081174(M2C_UNK, M2C_UNK);
s32 func_02081208(M2C_UNK, M2C_UNK, void (*)(s32));
s32 func_020a5fcc(void);
void func_020c9bf0(s32 arg0, s32 arg1, s32 *arg2);
s32 func_020afc24(M2C_UNK);
void func_020f7a60(s32);

extern s32 *data_0215a02c;
extern s16 data_0215a01c;
extern M2C_UNK data_0215a020;

void func_020f7908(s32 arg0) {
    Vec vec;
    void *emtr;

    emtr = M2C_FIELD(arg0, void **, 0x214);
    func_02081174(data_0215a02c != NULL ? *data_0215a02c : 0, M2C_FIELD(emtr, s32 *, 0x1C));
    M2C_FIELD(emtr, s32 *, 0x1C) = 0;
    *(Vec *) &data_0215a020 = *(Vec *) ((s8 *) arg0 + 0xBC);
    data_0215a01c = M2C_FIELD(emtr, s32 *, 0xC) >> 5;
    func_02081208(data_0215a02c != NULL ? *data_0215a02c : 0, 0x14, func_020f7a60);
    M2C_FIELD(emtr, s32 *, 0x4) = 0;
    func_020c9bf0(func_020a5fcc(), (s32) ((s8 *) arg0 + 0xBC), vec.v);
    func_0208b908((s8 *) arg0 + 0x190, 7, vec.v);
    func_020afc24(arg0);
}
