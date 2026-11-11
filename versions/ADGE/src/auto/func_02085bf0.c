/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02067ef8(void *, void *);              /* extern */
extern s32 data_021541a4;

void func_02085bf0(void *arg0) {
    s32 temp_lr;
    s32 temp_r2;
    s32 temp_r4;

    temp_lr                   = (data_021541a4 * 0x5EEDF715) + 0x1B0CB173;
    data_021541a4             = temp_lr;
    M2C_FIELD(arg0, s32 *, 0) = (s32) (temp_lr >> 8);
    temp_r4                   = (data_021541a4 * 0x5EEDF715) + 0x1B0CB173;
    data_021541a4             = temp_r4;
    M2C_FIELD(arg0, s32 *, 4) = (s32) (temp_r4 >> 8);
    temp_r2                   = (data_021541a4 * 0x5EEDF715) + 0x1B0CB173;
    data_021541a4             = temp_r2;
    M2C_FIELD(arg0, s32 *, 8) = (s32) (temp_r2 >> 8);
    func_02067ef8(arg0, arg0);
}
