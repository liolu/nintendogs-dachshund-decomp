/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020ab47c();                            /* extern */
M2C_UNK func_020b1108(M2C_UNK);                     /* extern */
extern void *data_02153740;

void func_020af518(void) {
    if (M2C_FIELD(data_02153740, s32 *, 0xA8) != 5) {
        return;
    }
    func_020b1108(3);
    func_020ab47c();
}
