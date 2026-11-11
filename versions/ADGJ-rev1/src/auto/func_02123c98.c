/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 *func_02003844(M2C_UNK, M2C_UNK);               /* extern */
M2C_UNK func_020deefc(M2C_UNK, void *);             /* extern */
s32 func_020defa0(M2C_UNK);                         /* extern */
M2C_UNK func_02107ca4(void *, M2C_UNK);             /* extern */
extern M2C_UNK func_02123208;
extern M2C_UNK func_02123840;
extern M2C_UNK func_02123b38;

void func_02123c98(void *arg0, M2C_UNK arg1) {
    s32 *temp_r4;

    func_02107ca4(arg0, 0x1D);
    M2C_FIELD(arg0, M2C_UNK **, 0x1F4) = &func_02123840;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F8) = &func_02123208;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F0) = &func_02123b38;
    M2C_FIELD(arg0, s32 **, 0x214)     = func_02003844(arg1, 0xC);
    temp_r4                            = M2C_FIELD(arg0, s32 **, 0x214);
    *temp_r4                           = func_020defa0(0x1B);
    func_020deefc(0x1B, arg0);
}
