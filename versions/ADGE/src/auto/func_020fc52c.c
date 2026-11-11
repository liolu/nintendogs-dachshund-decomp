#include "engine.h"
#include "m2c.h"

s32 func_020fc52c(s32 arg0) {
    return (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x214), s8 *, 8);
}
