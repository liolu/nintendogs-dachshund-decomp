/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02078be4(s32);                           /* extern */

void func_020c4bf4(void *arg0, s32 arg1) {
    void *temp_r0;

    M2C_FIELD(arg0, s32 *, 8)     = arg1;
    M2C_FIELD(arg0, void **, 0xC) = NULL;
    if (arg1 == 0) {
        return;
    }
    temp_r0                       = func_02078be4(arg1);
    M2C_FIELD(arg0, void **, 0xC) = (void *) (temp_r0 + M2C_FIELD((temp_r0 + M2C_FIELD(temp_r0, u16 *, 0xE)), s32 *, 0xC));
}
