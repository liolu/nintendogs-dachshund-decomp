#include "m2c.h"

typedef struct {
    s32 v[3];
} Vec;

s32 func_02081208(M2C_UNK, M2C_UNK, void (*)(s32));
s32 func_020a5fcc(void);
void func_020c9bf0(s32 arg0, s32 arg1, s32 *arg2);
s32 func_0208b8ac(void *, M2C_UNK, M2C_UNK, s32);
void func_020a7400(s32);
void func_02114310(s16);
void func_020f68cc(s32);

extern s16 data_0215a00c;
extern M2C_UNK data_0215a010;

void func_020f67d4(s32 arg0) {
    Vec vec;
    void *emtr;

    emtr = M2C_FIELD(arg0, void **, 0x214);
    func_020c9bf0(func_020a5fcc(), (s32) ((s8 *) arg0 + 0xBC), vec.v);
    func_0208b8ac((s8 *) arg0 + 0x190, 6, M2C_FIELD(arg0, s32 *, 0x24), (s32) vec.v);
    M2C_FIELD(emtr, s32 *, 0x14) = 1;
    data_0215a00c = M2C_FIELD(arg0, s32 *, 0x24);
    *(Vec *) &data_0215a010 = *(Vec *) ((s8 *) arg0 + 0xBC);
    switch (M2C_FIELD(emtr, s32 *, 0x0)) {
    case 0:
        func_02081208(M2C_FIELD(emtr, s32 *, 0x18), 1, func_020f68cc);
        break;
    case 1:
        func_02081208(M2C_FIELD(emtr, s32 *, 0x18), 2, func_020f68cc);
        break;
    case 2:
        func_02081208(M2C_FIELD(emtr, s32 *, 0x18), 0, func_020f68cc);
        break;
    }
    func_02081208(M2C_FIELD(emtr, s32 *, 0x18), 3, func_020f68cc);
    func_02081208(M2C_FIELD(emtr, s32 *, 0x18), 4, func_020f68cc);
    func_020a7400(arg0);
    func_02114310(M2C_FIELD(arg0, s16 *, 0x94));
}
