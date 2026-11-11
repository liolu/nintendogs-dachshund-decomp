#include "engine.h"
#include "m2c.h"

void func_020d60e4(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_02144724;

void func_020d9084(s32 arg0) {
    M2C_FIELD(arg0, s32 *, 0x940) = 0;
    func_020d60e4(0xB, (s32) &data_02144724, 2);
}
