/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020eb804(s32, s32, M2C_UNK, M2C_UNK);  /* extern */

void func_020f0df0(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r0_2;
    u16 temp_r0;

    func_020eb804(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4), arg1, arg2);
    temp_r0 = M2C_FIELD(arg0, u16 *, 0x1E);
    if (temp_r0 != 0) {
        M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (temp_r0 - 1);
        return;
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x14);
    switch (temp_r0_2) {                            /* irregular */
        case 2:
            M2C_FIELD(arg0, u16 *, 0x1C) = (u16) (M2C_FIELD(arg0, u16 *, 0x1C) + 1);
            if ((u32) M2C_FIELD(arg0, u16 *, 0x1C) > (u32) M2C_FIELD(arg0, u16 *, 0xE)) {
                M2C_FIELD(arg0, s32 *, 0x14) = 3;
                M2C_FIELD(arg0, u16 *, 0x1C) = (u16) M2C_FIELD(arg0, u16 *, 0xE);
            }
            return;
        case 4:
            M2C_FIELD(arg0, u16 *, 0x1C) = (u16) (M2C_FIELD(arg0, u16 *, 0x1C) - 1);
            if (M2C_FIELD(arg0, u16 *, 0x1C) == 0) {
                M2C_FIELD(arg0, s32 *, 0x14) = 1;
                M2C_FIELD(arg0, u16 *, 0x1C) = 0U;
            }
            return;
    }
}
