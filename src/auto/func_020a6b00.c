/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020b7f88(M2C_UNK, s16, s16);           /* extern */
extern void *data_02153740;

void func_020a6b00(void *arg0) {
    if (M2C_FIELD(data_02153740, s32 *, 0xBC) != 0xB) {
        return;
    }
    func_020b7f88(0x14, M2C_FIELD(arg0, s16 *, 0x888), M2C_FIELD(arg0, s16 *, 0x88A));
}
