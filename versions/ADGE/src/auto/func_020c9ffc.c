/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020038a8(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK func_0200657c(void *);                      /* extern */
M2C_UNK func_020ca530(void *, M2C_UNK);             /* extern */
extern M2C_UNK func_020c9f64;

void *func_020c9ffc(M2C_UNK arg0, s32 arg1) {
    void *temp_r0;

    temp_r0 = func_020038a8(arg0, 0x30);
    func_020ca530(temp_r0, 2);
    M2C_FIELD(temp_r0, M2C_UNK **, 0x14) = &func_020c9f64;
    M2C_FIELD(temp_r0, s32 *, 0x18)      = 0;
    func_0200657c(temp_r0 + 0x1C);
    M2C_FIELD(temp_r0, s32 *, 0x24) = arg1;
    M2C_FIELD(temp_r0, s16 *, 0x28) = 0x7FFF;
    M2C_FIELD(temp_r0, s16 *, 0x2A) = 0;
    M2C_FIELD(temp_r0, s16 *, 0x2C) = -0x1000;
    M2C_FIELD(temp_r0, s16 *, 0x2E) = 0;
    return temp_r0;
}
