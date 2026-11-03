/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020f07b4(M2C_UNK);                     /* extern */
M2C_UNK func_020f9330(void *, M2C_UNK, M2C_UNK);    /* extern */
extern void *data_02154cb0;

s32 func_020e973c(void) {
    if (M2C_FIELD(data_02154cb0, s16 *, 0x4E30) == 0) {
        return 0;
    }
    func_020f9330(data_02154cb0, 0x39, 1);
    func_020f07b4(0x7E);
    return 1;
}
