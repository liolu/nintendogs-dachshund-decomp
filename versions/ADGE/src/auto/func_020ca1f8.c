/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0207836c(M2C_UNK);

void func_020ca1f8(s32 arg0, s32 arg1) {
    void *temp_r0;

    M2C_FIELD(arg0, s32 *, 8)     = arg1;
    M2C_FIELD(arg0, void **, 0xC) = NULL;
    if (arg1 == 0) {
        return;
    }
    temp_r0                       = (void *) func_0207836c(arg1);
    M2C_FIELD(arg0, void **, 0xC) = (void *) (temp_r0 + M2C_FIELD((temp_r0 + M2C_FIELD(temp_r0, u16 *, 0xE)), s32 *, 0xC));
}
