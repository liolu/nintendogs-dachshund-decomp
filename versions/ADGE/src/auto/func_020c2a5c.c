/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

s32 func_020038a8(s32 *, M2C_UNK);
void func_020c26bc(M2C_UNK);
void func_020c27d0(s32);

M2C_UNK func_020a7924();                    /* extern */
extern M2C_UNK func_020c2a38;

void func_020c2a5c(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r1;

    func_020a7924(arg0, (s16) arg2);
    M2C_FIELD(arg0, void (**)(s32), 0x1F4) = func_020c27d0;
    M2C_FIELD(arg0, void (**)(s32), 0x1F8) = func_020c26bc;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F0)     = &func_020c2a38;
    M2C_FIELD(arg0, s32 *, 0x214)          = func_020038a8((s32 *) arg1, 4);
    temp_r1                                = M2C_FIELD(arg0, s32 *, 0x214);
    if (temp_r1 != 0) {
        *(M2C_UNK *) temp_r1 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x24)  = 0x800;
    M2C_FIELD(arg0, s32 *, 0x28)  = 0x800;
    M2C_FIELD(arg0, s32 *, 0x2C)  = 0x800;
    M2C_FIELD(arg0, s32 *, 0x124) = 0x28F;
    M2C_FIELD(arg0, s32 *, 0xAC)  = 0x4B0;
    M2C_FIELD(arg0, s32 *, 0xF8)  = 0x5EC;
    M2C_FIELD(arg0, s32 *, 0x120) = 0x5EC;
    M2C_FIELD(arg0, s32 *, 0x128) = 0x5EC;
    M2C_FIELD(arg0, s32 *, 0x12C) = 1;
}
