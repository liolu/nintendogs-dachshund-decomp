#include "m2c.h"
extern void *data_02159e38;
s32 func_020cd9cc(s16 arg0) {
    return M2C_FIELD(data_02159e38, s32 *, 0x1434) + 4 + arg0 * 0xa4;
}
