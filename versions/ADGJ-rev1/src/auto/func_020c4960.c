/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02075c78(s32, u16);                    /* extern */
M2C_UNK func_02075c8c(s32, s16, s16, s16);          /* extern */

void func_020c4960(void *arg0) {
    func_02075c8c(M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(arg0, s16 *, 0x2A), M2C_FIELD(arg0, s16 *, 0x2C),
                  M2C_FIELD(arg0, s16 *, 0x2E));
    func_02075c78(M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(arg0, u16 *, 0x28));
}
