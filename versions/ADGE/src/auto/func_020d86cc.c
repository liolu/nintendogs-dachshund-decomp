/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02003a34(void);

extern void *data_02159e70;

void func_020d86cc(s32 arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_r1 < 0x10) {
        M2C_FIELD(arg0, s32 *, 0)     = (s32) (temp_r1 + 1);
        M2C_FIELD(arg0, s32 *, 0x1D4) = (s32) (M2C_FIELD(arg0, s32 *, 0x1D4) - 0x100);
        return;
    }
    if (func_02003a34() != 0) {
        M2C_FIELD(data_02159e70, s32 *, 0x4868) = 1;
    }
}
