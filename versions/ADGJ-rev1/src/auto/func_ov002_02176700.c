/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020352c0(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_ov002_021770e8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
extern s32 *data_0214b484;

void func_ov002_02176700(M2C_UNK arg0) {
    s32 temp_r1;
    s32 var_r4;

    var_r4 = 0;
    if ((func_020352c0(arg0, 0x12) != 0) || (func_020352c0(arg0, 0x38) != 0) || (func_020352c0(arg0, 0x4B) != 0) ||
        (func_020352c0(arg0, 0x69) != 0)) {
        temp_r1        = (*data_0214b484 * 0x10DCD) + 1;
        *data_0214b484 = temp_r1;
        if ((u16) ((u32) (temp_r1 << 0x10) >> 0x1F) == 0) {
            var_r4 = 1;
        }
    }
    func_ov002_021770e8(arg0, -1, -1, 0, 1, var_r4, 0x17, 0x17);
}
