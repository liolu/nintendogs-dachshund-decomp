#include "m2c.h"
M2C_UNK func_02085ce8(M2C_UNK arg0, s32 arg1) {
    M2C_UNK base = arg0 + 0x8;
    s32 limit = M2C_FIELD(arg0, u16 *, 0x6);
    if (arg1 < 0 || arg1 >= limit) {
        return 0;
    }
    return base + (arg1 * 0xC);
}
