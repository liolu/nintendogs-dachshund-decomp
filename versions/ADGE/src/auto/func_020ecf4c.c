/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0207ca98(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

extern void *data_02159e70;

void func_020ecf4c(s32 arg0) {
    s32 temp_r2;

    if (M2C_FIELD(arg0, s32 *, 0x10) == 0) {
        return;
    }
    temp_r2 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_r2 == 0) {
        return;
    }
    if (!(M2C_FIELD(data_02159e70, s32 *, 0x4870) & 1)) {
        return;
    }
    func_0207ca98(0x23, 0, temp_r2, M2C_FIELD(arg0, s32 *, 0x1C));
    func_0207ca98(0x1E, 0, M2C_FIELD(arg0, s32 *, 0x10), 0x1C0);
    M2C_FIELD(arg0, s32 *, 0) = 0;
}
