/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_0207e000(void *, M2C_UNK, M2C_UNK);      /* extern */

s32 func_0207ddc4(void *arg0, s32 arg1) {
    s32 temp_r5;
    void *temp_r0;
    void *temp_r4;

    temp_r4 = arg0 + 0x24;
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x24);
    temp_r0 = func_0207e000(temp_r4, 0x10, 4);
    if (temp_r0 == NULL) {
        return 0;
    }
    M2C_FIELD(temp_r0, s32 *, 0)     = arg1;
    M2C_FIELD(temp_r0, s32 *, 4)     = temp_r5;
    M2C_FIELD(temp_r0, s32 *, 8)     = (s32) M2C_FIELD(temp_r4, s32 *, 4);
    M2C_FIELD(temp_r0, void **, 0xC) = (void *) M2C_FIELD(temp_r4, void **, 8);
    M2C_FIELD(temp_r4, void **, 8)   = temp_r0;
    return 1;
}
