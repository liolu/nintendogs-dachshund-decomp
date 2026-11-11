#include "m2c.h"

extern M2C_UNK data_02139bbc;

s32 func_0203571c(void *arg0) {
    if ((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x9E8), s16 *, 0x24) >
        (s32) (*((u16 *) ((s8 *) &data_02139bbc + (M2C_FIELD(arg0, s8 *, 0x8D) * 2))) + 0x168)) {
        return 1;
    }
    return 0;
}
