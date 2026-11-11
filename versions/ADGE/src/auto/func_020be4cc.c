/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020bfbe8();                                /* extern */
M2C_UNK func_020c01fc(M2C_UNK *, M2C_UNK *);        /* extern */
extern void *data_02155660;
extern M2C_UNK func_020be218;

void func_020be4cc(void) {
    M2C_UNK sp0;

    if (func_020bfbe8() == 0) {
        return;
    }
    M2C_FIELD(data_02155660, s16 *, 0x70) = 0x384;
    func_020c01fc(&func_020be218, &sp0);
}
