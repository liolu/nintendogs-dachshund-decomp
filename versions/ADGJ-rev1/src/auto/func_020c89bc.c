#include "m2c.h"

extern void *data_02154c48;

s32 func_020c89bc(s32 arg0) {
    return M2C_FIELD(data_02154c48, s32 *, 0x141C) + 0xB8 + (arg0 * 8);
}
