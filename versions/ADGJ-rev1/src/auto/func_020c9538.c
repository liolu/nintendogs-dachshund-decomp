#include "m2c.h"

extern void *data_02154c48;

u16 func_020c9538(void) {
    return M2C_FIELD(M2C_FIELD(data_02154c48, void **, 0x141C), u16 *, 0x7C);
}
