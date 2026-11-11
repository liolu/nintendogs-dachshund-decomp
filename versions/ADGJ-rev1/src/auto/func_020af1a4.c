/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020b1108(M2C_UNK);                     /* extern */
extern void *data_02153740;
extern s32 *data_02153894;

void func_020af1a4(void) {
    if (M2C_FIELD(data_02153740, s32 *, 0xA8) != 6) {
        return;
    }
    if (*data_02153894 == 9) {
        return;
    }
    func_020b1108(9);
}
