#include "engine.h"
#include "m2c.h"

s32 func_02033e94(s32 arg0) {
    return M2C_FIELD(arg0, s32 *, 0x948) & 0x10;
}
