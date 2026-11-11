/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 *func_020038a8(M2C_UNK, M2C_UNK);               /* extern */
M2C_UNK func_020a7924(void *, M2C_UNK);             /* extern */
M2C_UNK func_02102f2c(M2C_UNK, void *);             /* extern */
s32 func_02102fd0(M2C_UNK);                         /* extern */
extern M2C_UNK func_020c38e4;
extern M2C_UNK func_020c3f1c;
extern M2C_UNK func_020c4234;

void func_020c42ac(void *arg0, M2C_UNK arg1) {
    s32 *temp_r4;

    func_020a7924(arg0, 0x1F);
    M2C_FIELD(arg0, M2C_UNK **, 0x1F4) = &func_020c3f1c;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F8) = &func_020c38e4;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F0) = &func_020c4234;
    M2C_FIELD(arg0, s32 **, 0x214)     = func_020038a8(arg1, 0xC);
    temp_r4                            = M2C_FIELD(arg0, s32 **, 0x214);
    *temp_r4                           = func_02102fd0(0x1D);
    func_02102f2c(0x1D, arg0);
}
