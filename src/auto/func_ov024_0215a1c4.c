/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020c0898();                            /* extern */
M2C_UNK func_020c089c();                            /* extern */
M2C_UNK func_020c0aec();                            /* extern */
M2C_UNK func_020c0b00(u16);                         /* extern */
s32 func_020c0e08();                                /* extern */
M2C_UNK func_020ca618(s32);                         /* extern */
extern u16 data_0214d5fc;
extern s16 data_ov024_0215a400;
extern s32 *data_ov024_0215a404;

void func_ov024_0215a1c4(void) {
    u16 temp_r0;

    func_020ca618(*data_ov024_0215a404);
    temp_r0 = data_0214d5fc & 1;
    if (temp_r0 != 0) {
        func_020c0b00(temp_r0);
    } else if ((u16) (data_0214d5fc & 2) != 0) {
        func_020c0aec();
    }
    func_020c0898();
    if (func_020c0e08() != 0) {
        data_ov024_0215a400 = 0x12C;
    }
    if ((s32) data_ov024_0215a400 > 0) {
        data_ov024_0215a400 -= 1;
    }
    func_020c089c();
}
