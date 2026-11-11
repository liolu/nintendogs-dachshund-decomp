/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02110d8c();                            /* extern */

void func_020d12b8(void *arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x214);
    func_02110d8c();
    M2C_FIELD(temp_r4, s32 *, 0x10) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x14) = 0;
}
