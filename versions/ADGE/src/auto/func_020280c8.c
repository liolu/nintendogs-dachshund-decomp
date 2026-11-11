#include "engine.h"
#include "m2c.h"

s32 func_020280c8(s32 arg0) {
    return (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x9E8), s16 *, 6);
}
