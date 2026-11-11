/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02023674();                            /* extern */
extern u16 *data_0215a04c;

void func_020235a4(void *arg0, s32 arg1, s32 arg2) {
    if (*data_0215a04c != 0x11) {
        return;
    }
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x9E8), u8 *, 0x72) != 4) {
        return;
    }
    func_02023674(arg0, arg1, arg2);
}
