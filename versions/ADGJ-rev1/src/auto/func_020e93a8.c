/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_ov003_02157d50();                      /* extern */

void func_020e93a8(void *arg0) {
    s32 *temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 **, 0x214);
    if (*temp_r1 != 0) {
        return;
    }
    *temp_r1 = 1;
    func_ov003_02157d50();
}
