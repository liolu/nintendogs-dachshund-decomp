/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02022b38(M2C_UNK);                     /* extern */
s32 func_020350a8(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_ov002_021852bc(M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */

void func_ov002_02184ff0(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_020350a8(arg0, 1);
    func_02022b38(arg0);
    func_ov002_021852bc(arg0, 6, 0x2F, temp_r4);
}
