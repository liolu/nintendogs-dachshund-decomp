/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020d6068(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
extern void *data_02159fc4;

void func_020f1258(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 4) <= 2) {
        return;
    }
    func_020d6068(0, 4, 0);
    M2C_FIELD(data_02159fc4, s32 *, 0x19C) = 1;
}
