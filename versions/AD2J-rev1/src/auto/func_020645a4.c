/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02080820(s32, M2C_UNK);                /* extern */
extern s32 data_0214d520;

s16 func_020645a4(s32 arg0, s32 arg1) {
    func_02080820(data_0214d520, 0x280);
    return M2C_FIELD(((arg0 * 0x24) + data_0214d520 + (arg1 * 2)), s16 *, 0x20);
}
