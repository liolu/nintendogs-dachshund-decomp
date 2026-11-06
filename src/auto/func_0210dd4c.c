/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02003844(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK func_02107ca4(void *, M2C_UNK);             /* extern */
M2C_UNK func_0210e46c(M2C_UNK, void *);             /* extern */
extern M2C_UNK data_02148d3c;
extern M2C_UNK func_0210c070;
extern M2C_UNK func_0210c07c;
extern M2C_UNK func_0210d6d8;
extern M2C_UNK func_0210d908;

void func_0210dd4c(void *arg0, M2C_UNK arg1) {
    void *temp_r3;

    func_02107ca4(arg0, 0x27);
    M2C_FIELD(arg0, M2C_UNK **, 0x1F4)   = &func_0210d6d8;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F8)   = &func_0210c07c;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F0)   = &func_0210d908;
    M2C_FIELD(arg0, M2C_UNK **, 0x210)   = &func_0210c070;
    M2C_FIELD(arg0, void **, 0x214)      = func_02003844(arg1, 0x18);
    temp_r3                              = M2C_FIELD(arg0, void **, 0x214);
    M2C_FIELD(temp_r3, s32 *, 0)         = 0;
    M2C_FIELD(temp_r3, M2C_UNK **, 0x14) = &data_02148d3c;
    func_0210e46c(7, arg0);
}
