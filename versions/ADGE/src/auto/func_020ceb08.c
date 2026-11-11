#include "engine.h"
#include "m2c.h"

extern void *data_02159e38;

s32 func_020ceb08(void) {
    if (M2C_FIELD(M2C_FIELD(data_02159e38, void **, 0x141C), s8 *, 0x89) != 0) {
        return 1;
    }
    return 0;
}
