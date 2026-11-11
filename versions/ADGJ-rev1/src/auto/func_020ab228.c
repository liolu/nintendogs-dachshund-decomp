/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020efb80(M2C_UNK);                     /* extern */
M2C_UNK func_020f0f98(M2C_UNK, M2C_UNK);            /* extern */
extern void *data_02153740;

void func_020ab228(void) {
    if (M2C_FIELD(data_02153740, s32 *, 0xA8) == 7) {
        func_020efb80(0xA);
        return;
    }
    func_020f0f98(0x37, 2);
}
