/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0200c3ec(s32, s32);
extern s32 data_ov005_02161dc0;

s32 func_ov005_0215e570(s32 arg0, s32 arg1) {
    func_0200c3ec(2, arg0);
    return M2C_FIELD((M2C_FIELD(M2C_FIELD((data_ov005_02161dc0 + (arg0 * 4)), void **, 0x68), s32 *, 0x2C) + (arg1 * 4)),
                     s32 *, 0x3C);
}
