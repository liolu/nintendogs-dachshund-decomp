/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02028714(void *, M2C_UNK, M2C_UNK);        /* extern */
M2C_UNK func_0202f6e8(void *);                      /* extern */
M2C_UNK func_0202fa5c(void *);                      /* extern */
s32 func_020354a8(void *, M2C_UNK);                 /* extern */
s32 func_0203560c(void *, M2C_UNK);                 /* extern */
M2C_UNK func_02035978(void *, M2C_UNK);             /* extern */
M2C_UNK func_02035fd8(void *);                      /* extern */

void func_0200da50(void *arg0, s32 arg1, s32 arg2) {
    func_02035978(arg0, 0);
    if (func_02028714(arg0, 0, 1) != 0) {
        return;
    }
    if (func_0203560c(arg0, 0) != 0) {
        return;
    }
    if (func_020354a8(arg0, 0) != 0) {
        return;
    }
    if ((arg1 != 0) && ((u32) M2C_FIELD(arg0, u16 *, 0xFC) > 0x3CU)) {
        func_0202f6e8(arg0);
        return;
    }
    if (arg2 == 0) {
        return;
    }
    if ((u32) M2C_FIELD(arg0, u16 *, 0xFC) <= 0x3CU) {
        return;
    }
    func_02035fd8(arg0);
    func_0202fa5c(arg0);
}
