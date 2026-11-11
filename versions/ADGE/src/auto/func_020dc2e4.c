/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020dc1fc(M2C_UNK);

void func_020dc2e4(s32 arg0) {
    s32 temp_r2;
    s32 var_r1;

    if (((s32) (*(u16 *) 0x04000304 & 0x8000) >> 0xF) == 0) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x14) = var_r1;
    temp_r2                      = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_r2 != M2C_FIELD(arg0, s32 *, 0x18)) {
        M2C_FIELD(arg0, s32 *, 0x18) = temp_r2;
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0) == 0) {
        return;
    }
    func_020dc1fc(arg0);
}
