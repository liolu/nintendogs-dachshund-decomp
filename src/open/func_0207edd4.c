#include "m2c.h"
s32 func_0207edd4(s32 arg0) {
    volatile u16 *ime = (volatile u16 *) 0x4000208;
    volatile u32 *ie = (volatile u32 *) 0x4000210;
    u16 saved;
    u32 old;
    u16 tmp;

    saved = *ime;
    *ime = 0;
    old = *ie;
    *ie = arg0;
    tmp = *ime;
    *ime = saved;
    return old;
}
