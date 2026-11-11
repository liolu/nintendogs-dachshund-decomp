/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02034f40();                              /* extern */
M2C_UNK func_0203e280(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_ov002_02193e98(void *);                    /* extern */

s32 func_0200f86c(void *arg0) {
    s16 temp_r0_2;
    s8 temp_r0_3;
    s8 temp_r0_4;
    void *temp_r0;

    temp_r0 = func_02034f40();
    if (temp_r0 != NULL) {
        func_0203e280(arg0, 2, 1);
        temp_r0_2 = M2C_FIELD(temp_r0, s16 *, 0x90);
        switch (temp_r0_2) {                        /* irregular */
            case 4:
                temp_r0_3 = M2C_FIELD(arg0, s8 *, 0xA4);
                if (temp_r0_3 != 5) {
                    if (temp_r0_3 != 4) {
                        M2C_FIELD(arg0, s32 *, 0x188) = 1;
                    }
                }
                break;
            case 7:
                temp_r0_4 = M2C_FIELD(arg0, s8 *, 0xA4);
                if ((temp_r0_4 != 5) && (temp_r0_4 != 4)) {
                    M2C_FIELD(arg0, s32 *, 0x188) = 8;
                }
                break;
        }
        return func_ov002_02193e98(arg0);
    }
    return 0;
}
