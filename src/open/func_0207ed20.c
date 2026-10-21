#include "m2c.h"
s32 func_0207ed20(s32 arg0) {
    volatile u16 *control = (volatile u16 *) 0x4000208;
    volatile s32 *data    = (volatile s32 *) 0x4000214;
    u16 old;
    s32 value;

    old   = *control;
    *control = 0;
    value = *data;
    *data = arg0;
    (void) *control;
    *control = old;
    return value;
}
