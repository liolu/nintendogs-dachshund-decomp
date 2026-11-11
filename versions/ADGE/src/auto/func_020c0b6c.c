/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020bfff4();                                /* extern */
M2C_UNK func_020c0448(M2C_UNK *, M2C_UNK *);        /* extern */
extern M2C_UNK func_020c0cdc;

void func_020c0b6c(void) {
    M2C_UNK sp0;

    if (func_020bfff4() == 0) {
        return;
    }
    func_020c0448(&func_020c0cdc, &sp0);
}
