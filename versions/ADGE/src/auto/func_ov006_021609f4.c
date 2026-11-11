/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0200c488(s32, s32);
extern s32 data_ov006_02164260;

s32 func_ov006_021609f4(s32 arg0, s32 arg1) {
    func_0200c488(2, arg0);
    return M2C_FIELD((M2C_FIELD(M2C_FIELD((data_ov006_02164260 + (arg0 * 4)), void **, 0x68), s32 *, 0x2C) + (arg1 * 4)),
                     s32 *, 0x3C);
}
