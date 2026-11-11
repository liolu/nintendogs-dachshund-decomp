#include "m2c.h"

extern void *data_02154c48;

u8 func_020c9494(void) {
    return M2C_FIELD(M2C_FIELD(data_02154c48, void **, 0x141C), u8 *, 0x84);
}
