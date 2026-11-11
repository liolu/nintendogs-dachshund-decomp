/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0202f9b4();                                /* extern */
M2C_UNK func_0203e5e8(void *, s32);                 /* extern */
M2C_UNK func_ov004_021696c8(void *, s32);           /* extern */
extern s32 *data_0214da84;

void func_ov004_02168524(void *arg0) {
    s32 temp_r1;
    u16 temp_r0;
    u16 temp_r0_2;
    u16 temp_r2;

    func_ov004_021696c8(arg0, func_0202f9b4());
    if ((u32) M2C_FIELD(arg0, u16 *, 0xFC) <= 0xC8U) {
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x488) >= 2) {
        s32 n          = (*data_0214da84 * 0x10DCD) + 1;
        *data_0214da84 = n;
        temp_r2        = (u16) n;
        temp_r0        = (u16) ((u32) (temp_r2 * 3) >> 0x10);
        switch (temp_r0) {                          /* switch 1; irregular */
            case 0:                                     /* switch 1 */
                func_0203e5e8(arg0, 0x4CC);
                return;
            case 1:                                     /* switch 1 */
                func_0203e5e8(arg0, 0x4CD);
                return;
            case 2:                                     /* switch 1 */
                func_0203e5e8(arg0, 0x4CE);
                return;
        }
    } else {
        temp_r1        = (*data_0214da84 * 0x10DCD) + 1;
        *data_0214da84 = temp_r1;
        temp_r0_2      = (u16) ((u32) (temp_r1 << 0x10) >> 0x1F);
        switch (temp_r0_2) {                        /* switch 2; irregular */
            case 0:                                     /* switch 2 */
                func_0203e5e8(arg0, 0x4CD);
                return;
            case 1:                                     /* switch 2 */
                func_0203e5e8(arg0, 0x4CE);
                return;
        }
    }
}
