#include "engine.h"
#include "m2c.h"

extern u16 data_02156ea0;

s32 func_020c0e08(void) {
    if (data_02156ea0 != 0) {
        return 1;
    }
    return 0;
}
