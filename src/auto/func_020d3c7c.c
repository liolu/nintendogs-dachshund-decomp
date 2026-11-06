/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02003844(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK func_02107ca4(void *, M2C_UNK);             /* extern */
extern M2C_UNK func_020d2bdc;
extern M2C_UNK func_020d2c18;
extern M2C_UNK func_020d3b18;
extern M2C_UNK func_020d3c08;

void func_020d3c7c(void *arg0, M2C_UNK arg1) {
    void *temp_r2;

    func_02107ca4(arg0, 0x45);
    M2C_FIELD(arg0, M2C_UNK **, 0x1F4) = &func_020d3b18;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F8) = &func_020d2c18;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F0) = &func_020d3c08;
    M2C_FIELD(arg0, M2C_UNK **, 0x200) = &func_020d2bdc;
    M2C_FIELD(arg0, void **, 0x214)    = func_02003844(arg1, 0x20);
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
