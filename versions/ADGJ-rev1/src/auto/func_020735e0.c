/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02073468(void *);                          /* extern */
M2C_UNK func_0207e3b0(s32, M2C_UNK);                /* extern */
s32 func_0207e40c(s32, u16);                        /* extern */

s32 func_020735e0(void *arg0) {
    if (func_0207e40c(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, u16 *, 0xC)) == 0) {
        return -1;
    }
    if (func_02073468(arg0) != 0) {
        return M2C_FIELD(arg0, u16 *, 0xC) - 1;
    }
    func_0207e3b0(M2C_FIELD(arg0, s32 *, 0), 0);
    return -1;
}
