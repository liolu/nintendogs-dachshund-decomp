#include "m2c.h"
extern void *data_02159e74;
void func_0206cbc4(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020db4f0(s32 arg0) {
    volatile u16 pad1;
    volatile u16 pad2;
    void *p;

    pad1 = 0;
    data_02159e74 = (void *) arg0;
    func_0206cbc4(pad1, arg0, 0x734C);
    p = data_02159e74;
    M2C_FIELD(p, u16 *, 0) = 0;
    pad2 = 0;
    func_0206cbc4(pad2, (s32) data_02159e74 + 0x2948, 0x4A00);
}
