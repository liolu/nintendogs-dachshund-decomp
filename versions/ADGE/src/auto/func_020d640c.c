/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020cbaf0(s32, M2C_UNK, M2C_UNK, s32, s32); /* extern */
extern s32 data_02159e70;

s32 func_020d640c(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_020cbaf0(M2C_FIELD(((arg0 * 0x294) + data_02159e70 + (arg1 * 4)), s32 *, 0x2074), arg2, arg3, data_02159e70 + 0x48C8,
                  0x200);
    return data_02159e70 + 0x48C8;
}
