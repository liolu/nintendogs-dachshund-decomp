/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02070118(void);

s32 func_0206ff0c(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r3;
    void *temp_r0;

    temp_r0 = (void *) func_02070118();
    temp_r3 = (arg1 * 0x68) + (s32) (temp_r0 + 0x1F8);
    if ((M2C_FIELD(temp_r0, s32 *, 0) == 4) && (M2C_FIELD(temp_r0, s32 *, 0x14) == arg0)) {
        *(M2C_UNK *) arg3 = (s32) M2C_FIELD(temp_r3, s32 *, 4);
        *(M2C_UNK *) arg2 = (s32) M2C_FIELD(temp_r3, s32 *, 0x10);
        return 1;
    }
    return 0;
}
