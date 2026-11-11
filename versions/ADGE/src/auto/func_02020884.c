#include "engine.h"
#include "m2c.h"

extern s32 *data_0214da84;

s32 func_02020884(s32 arg0) {
    s16 temp_r0;
    s32 temp_r1;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x164);
    switch (temp_r0) {                              /* irregular */
        case 17:
            return 0x12;
        case 18:
            return 0x11;
        default:
            temp_r1        = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp_r1;
            return (s32) (s16) ((u16) ((u32) (temp_r1 << 0x10) >> 0x1F) + 0x11);
    }
}
