/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_0213853c;

s32 func_02029820(void *arg0, s32 arg1) {
    if ((M2C_FIELD(arg0, s8 *, 0xA4) == 2) &&
        ((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x9E4), s16 *, 0x22) >
         (s32) * ((u16 *) ((s8 *) &data_0213853c + (M2C_FIELD(arg0, s8 *, 0xA6) * 2))))) {
        M2C_FIELD(arg0, s16 *, 0xE8) = (s16) (arg1 + 0x1D5);
        return 1;
    }
    return 0;
}
