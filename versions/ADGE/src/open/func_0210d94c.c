#include "m2c.h"
s32 func_020038a8(s32 *, M2C_UNK);
void func_0210d7ec(s32);
void func_0210d850(s32);
M2C_UNK func_020a7924();                    /* extern */
extern M2C_UNK func_0210d948;
extern s32 data_02131a28[];
void func_0210d94c(s32 arg0, s32 arg1) {
    s32 temp;

    func_020a7924(arg0, 0x74);
    M2C_FIELD(arg0, void (**)(s32), 0x1F4) = func_0210d850;
    M2C_FIELD(arg0, void (**)(s32), 0x1F8) = func_0210d7ec;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F0)     = &func_0210d948;
    M2C_FIELD(arg0, s32 *, 0x214)          = func_020038a8((s32 *) arg1, 4);
    temp                                   = M2C_FIELD(arg0, s32 *, 0x214);
    if (temp != 0) {
        *(M2C_UNK *) temp = 0;
    }
    M2C_FIELD(arg0, s32 *, 0xAC)  = 0x4B0;
    M2C_FIELD(arg0, s32 *, 0xF8)  = data_02131a28[2];
    M2C_FIELD(arg0, s32 *, 0x120) = data_02131a28[2];
    M2C_FIELD(arg0, s32 *, 0x128) = data_02131a28[2];
    M2C_FIELD(arg0, s32 *, 0x12C) = 1;
}
