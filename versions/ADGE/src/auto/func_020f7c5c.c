/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020038a8(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK func_020a7924(void *, M2C_UNK);             /* extern */
extern M2C_UNK func_020f6bbc;
extern M2C_UNK func_020f6bf8;
extern M2C_UNK func_020f7af8;
extern M2C_UNK func_020f7be8;

void func_020f7c5c(void *arg0, M2C_UNK arg1) {
    void *temp_r2;

    func_020a7924(arg0, 0x45);
    M2C_FIELD(arg0, M2C_UNK **, 0x1F4) = &func_020f7af8;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F8) = &func_020f6bf8;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F0) = &func_020f7be8;
    M2C_FIELD(arg0, M2C_UNK **, 0x200) = &func_020f6bbc;
    M2C_FIELD(arg0, void **, 0x214)    = func_020038a8(arg1, 0x20);
    M2C_FIELD(arg0, s32 *, 0x24)       = 0x6000;
    M2C_FIELD(arg0, s32 *, 0x28)       = 0x6000;
    M2C_FIELD(arg0, s32 *, 0x2C)       = 0x6000;
    temp_r2                            = M2C_FIELD(arg0, void **, 0x214);
    M2C_FIELD(temp_r2, s32 *, 4)       = 0;
    M2C_FIELD(temp_r2, s32 *, 0x14)    = 0;
    M2C_FIELD(temp_r2, s32 *, 0x18)    = 1;
    M2C_FIELD(temp_r2, s32 *, 8)       = 0;
    M2C_FIELD(temp_r2, s32 *, 0x1C)    = 0;
    M2C_FIELD(arg0, s32 *, 0xAC)       = 0x3E8;
}
