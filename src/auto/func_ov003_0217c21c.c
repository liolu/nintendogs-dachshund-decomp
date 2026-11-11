/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02028114(void *);                          /* extern */
s32 func_02028714(void *, M2C_UNK, M2C_UNK);        /* extern */
M2C_UNK func_0202f9a0(void *);                      /* extern */
s32 func_020354a8(void *, M2C_UNK);                 /* extern */
M2C_UNK func_02035978(void *, M2C_UNK);             /* extern */
s32 func_02037130(void *, s32);                     /* extern */
M2C_UNK func_0203910c();                            /* extern */

void func_ov003_0217c21c(void *arg0) {
    s32 temp_r4;

    func_0203910c();
    temp_r4 = func_02037130(arg0, 0x392);
    func_02035978(arg0, 1);
    if (((u32) M2C_FIELD(arg0, u16 *, 0xFC) > 0x28U) && (func_02028714(arg0, 0, 1) != 0)) {
        return;
    }
    if (func_020354a8(arg0, 0) != 0) {
        return;
    }
    if (temp_r4 < (s32) (func_02028114(arg0) << 6)) {
        func_0202f9a0(arg0);
        return;
    }
    if ((u32) M2C_FIELD(arg0, u16 *, 0xFC) <= 0x190U) {
        return;
    }
    func_0202f9a0(arg0);
}
