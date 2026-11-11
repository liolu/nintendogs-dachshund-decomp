/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02028120();                                /* extern */
extern M2C_UNK data_0212c060;

s32 func_020a72bc(s32 arg0, void *arg1) {
    if (func_02028120() > (s32) * ((s16 *) ((s8 *) &data_0212c060 + (M2C_FIELD(arg1, s16 *, 0x94) * 2)))) {
        return 1;
    }
    return 0;
}
