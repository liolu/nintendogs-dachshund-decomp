/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02006518(void *);                      /* extern */
M2C_UNK func_020c4f2c(void *, M2C_UNK);             /* extern */
extern M2C_UNK func_020c4960;

void func_020c4990(void *arg0, s32 arg1) {
    func_020c4f2c(arg0, 2);
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &func_020c4960;
    M2C_FIELD(arg0, s32 *, 0x18)      = 0;
    func_02006518(arg0 + 0x1C);
    M2C_FIELD(arg0, s32 *, 0x24) = arg1;
    M2C_FIELD(arg0, s16 *, 0x28) = 0x7FFF;
    M2C_FIELD(arg0, s16 *, 0x2A) = 0;
    M2C_FIELD(arg0, s16 *, 0x2C) = -0x1000;
    M2C_FIELD(arg0, s16 *, 0x2E) = 0;
}
