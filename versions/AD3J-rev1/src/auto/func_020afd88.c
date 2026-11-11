#include "engine.h"
#include "m2c.h"

extern void *data_02153740;

s32 func_020afd88(void) {
    if (M2C_FIELD(data_02153740, s32 *, 0xB8) == 0xA) {
        return 1;
    }
    return 0;
}
