/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern s32 *data_0214da84;

s32 func_02037f70(void) {
    s32 temp_r2;

    temp_r2        = (*data_0214da84 * 0x10DCD) + 1;
    *data_0214da84 = temp_r2;
    return (s32) (s16) ((u16) ((u32) (temp_r2 << 0x10) >> 0x1F) + 0x13F);
}
