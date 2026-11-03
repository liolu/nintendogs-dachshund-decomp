/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020a8934(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020a89a4(M2C_UNK, s32, M2C_UNK);       /* extern */
M2C_UNK func_020a8db4(s32, M2C_UNK);                /* extern */

void func_020b0444(void) {
    s32 temp_r0;

    temp_r0 = func_020a8934(0, 4);
    func_020a8db4(temp_r0, 0);
    func_020a89a4(0, temp_r0, 0xE);
}
