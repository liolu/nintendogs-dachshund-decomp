/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0206ce4c(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0206cfd8(s32, M2C_UNK, M2C_UNK);       /* extern */
extern void *data_02153728;

void func_020999a4(void) {
    if (data_02153728 == NULL) {
        return;
    }
    func_0206ce4c(M2C_FIELD(M2C_FIELD(data_02153728, void **, 0xC), s32 *, 0x14), 0, 0x4000);
    func_0206cfd8(M2C_FIELD(M2C_FIELD(data_02153728, void **, 0x10), s32 *, 0xC), 0, 0x100);
}
