/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020b10cc();                            /* extern */
extern void *data_02153740;
extern s32 *data_02153894;

void func_020afa24(void) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = M2C_FIELD(data_02153740, s32 *, 0xA8);
    if ((temp_r0 != 0) && (temp_r0 != 4) && (temp_r0 != 0xE)) {
        return;
    }
    temp_r0_2 = *data_02153894;
    if ((temp_r0_2 != 6) && (temp_r0_2 != 7)) {
        return;
    }
    func_020b10cc();
}
