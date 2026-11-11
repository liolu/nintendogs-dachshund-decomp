/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02068ffc();                                /* extern */
extern M2C_UNK data_02129068;
extern s32 data_0214f490;
extern s32 data_0214f494;

void func_0206bfdc(void) {
    s32 temp_r0;

    temp_r0       = func_02068ffc();
    data_0214f494 = temp_r0;
    data_0214f490 = *((u16 *) ((s8 *) &data_02129068 + ((temp_r0 >> 4) * 2))) << 0xC;
}
