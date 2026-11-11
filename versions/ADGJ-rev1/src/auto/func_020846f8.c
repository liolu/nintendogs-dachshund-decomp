/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0206e1b8(s32, s32 *, M2C_UNK);         /* extern */

s32 func_020846f8(s32 arg0, s32 arg1, s32 *arg2) {
    s32 sp0;

    func_0206e1b8(arg0 + 8, &sp0, 4);
    if (sp0 != arg1) {
        return 0;
    }
    if (arg2 != NULL) {
        func_0206e1b8(arg0 + 0xC, arg2, 0x1C);
    }
    return 1;
}
