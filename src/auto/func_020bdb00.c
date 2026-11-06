/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020b8c1c(s32, u16, u16);               /* extern */
M2C_UNK func_020b8ce8(s32, u16, M2C_UNK, M2C_UNK);  /* extern */

void func_020bdb00(void *arg0) {
    M2C_UNK (*temp_r1_2)(void *);
    s32 temp_r0;
    u16 temp_r1;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    switch (temp_r0) {                              /* irregular */
        case 4:
            M2C_FIELD(arg0, s32 *, 0x1C) = 0;
            return;
        case 1:
            temp_r1 = M2C_FIELD(arg0, u16 *, 4);
            if (temp_r1 != 0xFFFF) {
                if (M2C_FIELD(arg0, s32 *, 8) != 0) {
                    func_020b8c1c(M2C_FIELD(arg0, s32 *, 0), temp_r1, M2C_FIELD(arg0, u16 *, 0xC));
                }
                if (M2C_FIELD(arg0, s32 *, 0x10) != 0) {
                    func_020b8ce8(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, u16 *, 4), 0, 0);
                }
            }
            temp_r1_2 = M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x2C);
            if (temp_r1_2 != NULL) {
                temp_r1_2(arg0);
            }
            M2C_FIELD(arg0, s32 *, 0x1C) = 0;
            return;
    }
}
