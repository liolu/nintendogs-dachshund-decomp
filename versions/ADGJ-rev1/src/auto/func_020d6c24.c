/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 *func_02003844(M2C_UNK, M2C_UNK);               /* extern */
M2C_UNK func_020deefc(M2C_UNK, void *);             /* extern */
s32 func_020defa0(M2C_UNK);                         /* extern */
M2C_UNK func_02107ca4(void *, M2C_UNK);             /* extern */
extern M2C_UNK func_020d6748;
extern M2C_UNK func_020d6a50;
extern M2C_UNK func_020d6ba4;

void func_020d6c24(void *arg0, M2C_UNK arg1) {
    s32 *temp_r4;

    func_02107ca4(arg0, 0x3A);
    M2C_FIELD(arg0, M2C_UNK **, 0x1F4) = &func_020d6a50;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F8) = &func_020d6748;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F0) = &func_020d6ba4;
    M2C_FIELD(arg0, s32 **, 0x214)     = func_02003844(arg1, 4);
    temp_r4                            = M2C_FIELD(arg0, s32 **, 0x214);
    *temp_r4                           = func_020defa0(0x19);
    func_020deefc(0x19, arg0);
    M2C_FIELD(arg0, s16 *, 0xA6) = 2;
}
