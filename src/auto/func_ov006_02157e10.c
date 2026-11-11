/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

extern void *data_ov006_0215bb60;

void func_ov006_02157e10(s32 arg0) {
    M2C_UNK (*temp_r1)(arg0);

    M2C_FIELD(data_ov006_0215bb60, s32 *, 0x3C) = 1;
    temp_r1                                     = M2C_FIELD(data_ov006_0215bb60, M2C_UNK(**)(), 0x18);
    if (temp_r1 == NULL) {
        return;
    }
    temp_r1(arg0);
}
