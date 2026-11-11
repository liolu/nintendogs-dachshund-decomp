#include "m2c.h"

extern void *data_ov028_0215c030;

u16 func_ov028_0215b77c(void) {
    return M2C_FIELD(data_ov028_0215c030, u16 *, 0x24);
}
