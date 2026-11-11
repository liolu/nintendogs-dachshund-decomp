/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020a5240(M2C_UNK);                     /* extern */
M2C_UNK func_020b1108(M2C_UNK);                     /* extern */
extern void *data_02153740;

void func_020af304(void) {
    if (M2C_FIELD(data_02153740, s32 *, 0xA8) != 7) {
        return;
    }
    func_020a5240(0x28);
    func_020b1108(1);
}
