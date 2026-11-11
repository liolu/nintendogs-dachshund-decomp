#include "engine.h"
#include "m2c.h"

extern u16 data_02155664;

void func_020c07c8(s32 arg0) {
    data_02155664 |= (u16) (1 << arg0);
}
