/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_021201d8();                            /* extern */
M2C_UNK func_021201dc();                            /* extern */
M2C_UNK func_0212042c();                            /* extern */
M2C_UNK func_02120440(u16);                         /* extern */
s32 func_02120748();                                /* extern */
M2C_UNK func_020c5014(s32);                         /* extern */
extern u16 data_0214affc;
extern s16 data_ov023_02157f80;
extern s32 *data_ov023_02157f84;

void func_ov023_02157d44(void) {
    u16 temp_r0;

    func_020c5014(*data_ov023_02157f84);
    temp_r0 = data_0214affc & 1;
    if (temp_r0 != 0) {
        func_02120440(temp_r0);
    } else if ((u16) (data_0214affc & 2) != 0) {
        func_0212042c();
    }
    func_021201d8();
    if (func_02120748() != 0) {
        data_ov023_02157f80 = 0x12C;
    }
    if ((s32) data_ov023_02157f80 > 0) {
        data_ov023_02157f80 -= 1;
    }
    func_021201dc();
}
