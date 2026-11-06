/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c643c(s32, M2C_UNK, M2C_UNK, s32, s32); /* extern */
extern s32 data_02153740;

s32 func_020a3dfc(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_020c643c(M2C_FIELD(((arg0 * 0x294) + data_02153740 + (arg1 * 4)), s32 *, 0xCE4), arg2, arg3, data_02153740 + 0x3538,
                  0x200);
    return data_02153740 + 0x3538;
}
