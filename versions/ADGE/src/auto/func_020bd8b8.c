/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern void *data_02155660;

void func_020bd8b8(s32 arg0) {
    M2C_UNK (*temp_r1)(arg0);

    M2C_FIELD(data_02155660, s32 *, 0x34) = 1;
    temp_r1                               = M2C_FIELD(data_02155660, M2C_UNK(**)(), 0x18);
    if (temp_r1 == NULL) {
        return;
    }
    temp_r1(arg0);
}
