/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0203547c(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_ov003_021794dc(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
extern s32 *data_0214da84;

void func_ov003_02178b18(M2C_UNK arg0) {
    s32 temp_r1;
    s32 var_r4;

    var_r4 = 0;
    if ((func_0203547c(arg0, 0x12) != 0) || (func_0203547c(arg0, 0x38) != 0) || (func_0203547c(arg0, 0x4B) != 0) ||
        (func_0203547c(arg0, 0x69) != 0)) {
        temp_r1        = (*data_0214da84 * 0x10DCD) + 1;
        *data_0214da84 = temp_r1;
        if ((u16) ((u32) (temp_r1 << 0x10) >> 0x1F) == 0) {
            var_r4 = 1;
        }
    }
    func_ov003_021794dc(arg0, -1, -1, 0, 1, var_r4, 0x17, 0x17);
}
