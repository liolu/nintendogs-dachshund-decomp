#include "engine.h"
#include "m2c.h"

extern void *data_02159e38;

s32 func_020cef48(void) {
    return M2C_FIELD(M2C_FIELD(data_02159e38, void **, 0x141C), s32 *, 0x78);
}
