/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020b10cc();                            /* extern */
M2C_UNK func_020b1108(M2C_UNK);                     /* extern */
extern void *data_02153740;
extern s32 *data_02153894;

void func_020afce8(s32 arg0) {
    if (M2C_FIELD(data_02153740, s32 *, 0xB8) != 2) {
        return;
    }
    if (arg0 != 0) {
        if (*data_02153894 == 0xD) {
            return;
        }
        func_020b1108(0xD);
        return;
    }
    if (*data_02153894 != 0xD) {
        return;
    }
    func_020b10cc();
}
