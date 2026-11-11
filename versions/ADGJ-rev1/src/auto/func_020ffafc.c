/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020b7f38(M2C_UNK, s16, s16);           /* extern */
extern void *data_02153740;

void func_020ffafc(void *arg0) {
    if (M2C_FIELD(data_02153740, s32 *, 0xBC) != 0x17) {
        return;
    }
    func_020b7f38(0x14, M2C_FIELD(arg0, s16 *, 0x888), M2C_FIELD(arg0, s16 *, 0x88A));
}
