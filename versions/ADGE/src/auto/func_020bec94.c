/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c02ac(M2C_UNK *, M2C_UNK *);        /* extern */
s32 func_020c046c();                                /* extern */
extern M2C_UNK func_020bec64;

void func_020bec94(void) {
    M2C_UNK sp0;

    if (func_020c046c() == 0) {
        return;
    }
    func_020c02ac(&func_020bec64, &sp0);
}
