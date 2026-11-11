/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0206a3f4();                                /* extern */
extern M2C_UNK data_02128ce0;
extern s32 data_0214e9f0;
extern s32 data_0214e9f4;

void func_0206d3d4(void) {
    s32 temp_r0;

    temp_r0       = func_0206a3f4();
    data_0214e9f4 = temp_r0;
    data_0214e9f0 = *((u16 *) ((s8 *) &data_02128ce0 + ((temp_r0 >> 4) * 2))) << 0xC;
}
