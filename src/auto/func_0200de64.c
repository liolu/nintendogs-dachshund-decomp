/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02022b38();                            /* extern */
s32 func_02027508(void *);                          /* extern */
M2C_UNK func_0203e2b8(void *, s32);                 /* extern */
M2C_UNK func_020eae74(s32, M2C_UNK);                /* extern */

void func_0200de64(void *arg0) {
    func_02022b38();
    if (((u32) M2C_FIELD(arg0, u16 *, 0x10A) > 1U) && (M2C_FIELD(arg0, s32 *, 0x488) == 0) &&
        (M2C_FIELD(arg0, s32 *, 0x2A4) == 0)) {
        func_020eae74(func_02027508(arg0), 0x44);
        func_020eae74(func_02027508(arg0), 0x43);
        M2C_FIELD(arg0, s32 *, 0x488) = 1;
    }
    if ((u32) M2C_FIELD(arg0, u16 *, 0x10A) <= 0x3CU) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x2A4) != 0) {
        return;
    }
    func_0203e2b8(arg0, 0x411);
}
