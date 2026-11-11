/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0203535c();                                /* extern */
M2C_UNK func_0203e5e8(void *, s32);                 /* extern */
extern void *data_0215a064;

void func_ov005_0215d34c(void *arg0) {
    s32 temp_r0;

    temp_r0 = func_0203535c();
    if (!(M2C_FIELD(data_0215a064, u16 *, 0x84) & 1)) {
        M2C_FIELD(arg0, u16 *, 0x11A) = (u16) (M2C_FIELD(arg0, u16 *, 0x11A) + 1);
    } else {
        M2C_FIELD(arg0, u16 *, 0x11A) = 0U;
    }
    M2C_FIELD(arg0, s16 *, 0x11C) = 1;
    M2C_FIELD(arg0, s16 *, 0x11E) = 0;
    if (temp_r0 == 0) {
        return;
    }
    func_0203e5e8(arg0, 0x451);
}
