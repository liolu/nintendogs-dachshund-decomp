/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02080414(M2C_UNK *, s32 *, M2C_UNK);   /* extern */
extern M2C_UNK data_021559b4;

s32 func_020fa110(void) {
    s32 sp0;

    func_02080414(&data_021559b4, &sp0, 0);
    if ((sp0 & ~0xFF000000) == 0x46494E) {
        return sp0 & 0xF0000000;
    }
    return 0;
}
