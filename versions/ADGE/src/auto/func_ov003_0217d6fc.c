/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0203547c(void *, M2C_UNK);                 /* extern */
s32 func_0203e5e8(void *, s32);                     /* extern */
s32 func_ov003_0217df20(void *, M2C_UNK, M2C_UNK);  /* extern */
extern s32 *data_0214da84;

s32 func_ov003_0217d6fc(void *arg0, M2C_UNK arg1) {
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r1_4;
    u16 temp_r0;

    temp_r0_4 = func_ov003_0217df20(arg0, arg1, 0);
    if (temp_r0_4 != 0) {
        return temp_r0_4;
    }
    if ((M2C_FIELD(arg0, s32 *, 0x484) == 1) && (func_0203547c(arg0, 0x10) != 0) &&
        ((temp_r1 = (*data_0214da84 * 0x10DCD) + 1, *data_0214da84 = temp_r1,
          ((u16) ((u32) (temp_r1 << 0x10) >> 0x1F) != 0)) ||
         (M2C_FIELD(arg0, s16 *, 0xF0) == 4))) {
        return func_0203e5e8(arg0, 0x212);
    }
    if ((M2C_FIELD(arg0, s32 *, 0x484) == 1) && (func_0203547c(arg0, 0x2E) != 0)) {
        temp_r1_2      = (*data_0214da84 * 0x10DCD) + 1;
        *data_0214da84 = temp_r1_2;
        if ((u16) ((u32) (temp_r1_2 << 0x10) >> 0x1F) != 0) {
            return func_0203e5e8(arg0, 0x20E);
        }
    }
    if ((M2C_FIELD(arg0, s32 *, 0x484) == 0) && (func_0203547c(arg0, 0x41) != 0) &&
        ((temp_r1_3 = (*data_0214da84 * 0x10DCD) + 1, *data_0214da84 = temp_r1_3,
          ((u16) ((u32) (temp_r1_3 << 0x10) >> 0x1F) != 0)) ||
         (M2C_FIELD(arg0, s16 *, 0xF0) == 4))) {
        return func_0203e5e8(arg0, 0x211);
    }
    temp_r0_3 = M2C_FIELD(arg0, s32 *, 0x484);
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    temp_r0_2 = func_0203547c(arg0, 0x5E);
    if (temp_r0_2 == 0) {
        return temp_r0_2;
    }
    temp_r1_4      = (*data_0214da84 * 0x10DCD) + 1;
    *data_0214da84 = temp_r1_4;
    temp_r0        = (u16) ((u32) (temp_r1_4 << 0x10) >> 0x1F);
    if (temp_r0 == 0) {
        return (s32) temp_r0;
    }
    return func_0203e5e8(arg0, 0x20D);
}
