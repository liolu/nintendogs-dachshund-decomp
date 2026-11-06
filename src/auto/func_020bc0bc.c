/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020b1108(M2C_UNK);                     /* extern */
extern void *data_02153740;

void func_020bc0bc(s32 *arg0) {
    *arg0 = 0;
    if (M2C_FIELD(data_02153740, s32 *, 0xA8) != 3) {
        return;
    }
    func_020b1108(8);
}
