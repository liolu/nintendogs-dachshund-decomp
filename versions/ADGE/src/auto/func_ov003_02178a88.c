/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_ov003_021794dc(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
extern s32 *data_0214da84;

void func_ov003_02178a88(void *arg0) {
    s32 var_r2;
    u32 next;
    u32 scaled;

    var_r2 = 0;
    if ((u32) M2C_FIELD(arg0, u16 *, 0xFC) >= 0x1E) {
        next           = (u32) *data_0214da84 * 0x10DCDU + 1U;
        scaled         = (u16) next * 0x1EU;
        *data_0214da84 = (s32) next;
        if ((u16) (scaled >> 0x10) == 0) {
            var_r2 = 1;
        }
    }
    func_ov003_021794dc(arg0, -1, -1, 0, 1, var_r2, 0x17, 0x17);
}
