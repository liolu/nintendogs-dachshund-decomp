#include "m2c.h"

typedef struct {
    s16 unk0;
    s16 unk2;
} UnkStruct_02118dcc;

extern void func_020cf19c();
M2C_UNK func_0205e15c(M2C_UNK, M2C_UNK);
void func_02118dcc(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp0[4];

    M2C_FIELD(sp0, s16 *, 0x2) = arg0;
    M2C_FIELD(sp0, s16 *, 0x0) = 0;
    func_020cf19c((M2C_UNK) sp0, arg1);
}
