/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_02139c48;

s32 func_02029874(void *arg0, s32 arg1) {
    if ((M2C_FIELD(arg0, s8 *, 0x8B) == 2) &&
        ((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x9E8), s16 *, 0x22) >
         (s32) * ((u16 *) ((s8 *) &data_02139c48 + (M2C_FIELD(arg0, s8 *, 0x8D) * 2))))) {
        M2C_FIELD(arg0, s16 *, 0xEA) = (s16) (arg1 + 0x1D5);
        return 1;
    }
    return 0;
}
