/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020038a8(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020a7924(void *, M2C_UNK);             /* extern */
extern M2C_UNK func_020fce34;
extern M2C_UNK func_020fd1d4;
extern M2C_UNK func_020fd314;

void func_020fd3c0(void *arg0, M2C_UNK arg1) {
    func_020a7924(arg0, 0);
    M2C_FIELD(arg0, M2C_UNK **, 0x1F4) = &func_020fd1d4;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F8) = &func_020fce34;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F0) = &func_020fd314;
    M2C_FIELD(arg0, s32 *, 0x214)      = func_020038a8(arg1, 2);
    M2C_FIELD(arg0, s32 *, 0xAC)       = 0x2BC;
    M2C_FIELD(arg0, s32 *, 0xF8)       = 0x666;
    M2C_FIELD(arg0, s32 *, 0x128)      = 0x666;
    M2C_FIELD(arg0, s32 *, 0x120)      = 0x666;
    M2C_FIELD(arg0, s32 *, 0x124)      = 0x333;
    M2C_FIELD(arg0, s32 *, 0x12C)      = 1;
    M2C_FIELD(arg0, u16 *, 0x20)       = (u16) (M2C_FIELD(arg0, u16 *, 0x20) | 8);
    M2C_FIELD(arg0, s16 *, 0x84)       = 0;
    M2C_FIELD(arg0, s16 *, 0x86)       = 0;
}
