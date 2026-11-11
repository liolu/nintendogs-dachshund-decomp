/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02080414(M2C_UNK *, s32 *, M2C_UNK);   /* extern */
M2C_UNK func_020f6c30();                            /* extern */
extern M2C_UNK data_021559a0;

void func_020fa084(void) {
    s32 sp0;

    func_02080414(&data_021559a0, &sp0, 0);
    if (sp0 != 0x504C4159) {
        return;
    }
    func_020f6c30();
}
