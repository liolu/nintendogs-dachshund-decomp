/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_0213aa2e;

s8 func_020273e0(void *arg0) {
    u16 temp_r2;
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 0x9E8);
    temp_r2 = M2C_FIELD(temp_r0, u16 *, 0);
    if ((temp_r2 == 2) && (M2C_FIELD(temp_r0, u8 *, 2) == 0)) {
        return 0;
    }
    return *((u8 *) ((s8 *) &data_0213aa2e + (temp_r2 * 0x64)));
}
