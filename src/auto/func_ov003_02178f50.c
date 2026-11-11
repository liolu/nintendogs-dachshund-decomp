/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_ov003_021794dc(void *, s32, s32, s32, s32, s32, s32, s32);
extern s32 *data_0214da84;

void func_ov003_02178f50(void *arg0) {
    s32 var_r2;
    s32 new_val;
    u16 temp_ip;

    var_r2 = 0;
    if ((u32) M2C_FIELD(arg0, u16 *, 0xFC) >= 0x3CU) {
        new_val        = (*data_0214da84 * 0x10DCD) + 1;
        temp_ip        = new_val;
        *data_0214da84 = new_val;
        if ((u16) ((u32) (temp_ip * 0x50) >> 0x10) == 0) {
            var_r2 = 1;
        }
    }
    func_ov003_021794dc(arg0, -1, -1, 0, 1, var_r2, 0x13, 0x13);
}
