#include "engine.h"
#include "m2c.h"

extern u16 data_0214dfd0;

s32 func_02063db4(void) {
    if (data_0214dfd0 != 0) {
        return 0;
    }
    return 3;
}
