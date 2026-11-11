/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02006190();                            /* extern */

void func_020063ac(u16 arg0, void *arg1) {
    u16 temp_r1;

    if (M2C_FIELD(arg1, s32 *, 0x20) != 0) {
        func_02006190();
    }
    M2C_FIELD(arg1, s16 *, 0) = (s16) (arg0 & (arg0 ^ M2C_FIELD(arg1, u16 *, 2)));
    M2C_FIELD(arg1, s16 *, 4) = (s16) ((arg0 ^ 0xFFFF) & (arg0 ^ M2C_FIELD(arg1, u16 *, 2)));
    M2C_FIELD(arg1, u16 *, 2) = arg0;
    M2C_FIELD(arg1, s16 *, 6) = 0;
    temp_r1                   = M2C_FIELD(arg1, u16 *, 8);
    switch (temp_r1) {                              /* irregular */
        case 0:
            if (!(arg0 & M2C_FIELD(arg1, u16 *, 0xC))) {
                return;
            }
            M2C_FIELD(arg1, u16 *, 8)   = 1U;
            M2C_FIELD(arg1, u16 *, 0xA) = 0U;
            M2C_FIELD(arg1, s16 *, 6)   = (s16) (arg0 & M2C_FIELD(arg1, u16 *, 0xC));
            return;
        case 1:
            if (arg0 & M2C_FIELD(arg1, u16 *, 0xC)) {
                M2C_FIELD(arg1, u16 *, 0xA) = (u16) (M2C_FIELD(arg1, u16 *, 0xA) + 1);
                if ((u32) M2C_FIELD(arg1, u16 *, 0xA) < (u32) M2C_FIELD(arg1, u16 *, 0xE)) {
                    return;
                }
                M2C_FIELD(arg1, u16 *, 8)   = 2U;
                M2C_FIELD(arg1, u16 *, 0xA) = 0U;
                M2C_FIELD(arg1, s16 *, 6)   = (s16) (arg0 & M2C_FIELD(arg1, u16 *, 0xC));
                return;
            }
            M2C_FIELD(arg1, u16 *, 8) = 0U;
            return;
        case 2:
            if (arg0 & M2C_FIELD(arg1, u16 *, 0xC)) {
                M2C_FIELD(arg1, u16 *, 0xA) = (u16) (M2C_FIELD(arg1, u16 *, 0xA) + 1);
                if ((u32) M2C_FIELD(arg1, u16 *, 0xA) >= (u32) M2C_FIELD(arg1, u16 *, 0x10)) {
                    M2C_FIELD(arg1, u16 *, 0xA) = 0U;
                    M2C_FIELD(arg1, s16 *, 6)   = (s16) (arg0 & M2C_FIELD(arg1, u16 *, 0xC));
                }
                return;
            }
            M2C_FIELD(arg1, u16 *, 8) = 0U;
            return;
    }
}
