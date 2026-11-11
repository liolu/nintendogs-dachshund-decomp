#include "engine.h"
#include "m2c.h"

extern s32 *data_0214da84;

s32 func_0203801c(void) {
    s32 temp_r1;

    temp_r1        = (*data_0214da84 * 0x10DCD) + 1;
    *data_0214da84 = temp_r1;
    return (s32) (s16) ((u16) ((u32) (temp_r1 << 0x10) >> 0x1F) + 0x154);
}
