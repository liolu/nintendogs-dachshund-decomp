#include "m2c.h"
extern void *data_02159e74;
void func_0206cbc4(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020db5f0(void) {
    volatile u16 var;
    void *p = data_02159e74;

    M2C_FIELD(p, u16 *, 0) = 0;
    var = 0;
    func_0206cbc4(var, (s32) data_02159e74 + 0x2948, 0x4A00);
}
