#include "m2c.h"
extern void *data_02159e38;
s32 func_020ce084(s16 arg0) {
    return M2C_FIELD((s8 *) data_02159e38 + arg0 * 0x18, s32 *, 0x14F4) + 4;
}
