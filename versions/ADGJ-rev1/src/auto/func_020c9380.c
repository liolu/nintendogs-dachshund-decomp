#include "m2c.h"

extern void *data_02154c48;

s32 func_020c9380(void) {
    if (M2C_FIELD(M2C_FIELD(data_02154c48, void **, 0x141C), s8 *, 0x86) != 0) {
        return 1;
    }
    return 0;
}
