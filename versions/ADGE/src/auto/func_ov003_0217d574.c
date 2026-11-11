/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0203535c();                                /* extern */
M2C_UNK func_0203e5e8(void *, s32);                 /* extern */
s32 func_ov003_0217df20(void *, s16, M2C_UNK);      /* extern */

void func_ov003_0217d574(void *arg0) {
    s32 temp_r4;

    temp_r4 = func_0203535c();
    if (func_ov003_0217df20(arg0, (s16) (M2C_FIELD(arg0, s32 *, 0x484) + 7), 0) != 0) {
        return;
    }
    if (temp_r4 == 0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x484) == 0) {
        func_0203e5e8(arg0, 0x20D);
        return;
    }
    func_0203e5e8(arg0, 0x20E);
}
