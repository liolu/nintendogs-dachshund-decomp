#include "m2c.h"
s32 func_020638d0(void);
s32 func_0205e374(s32 arg0, s32 arg1, s32 arg2) {
    u32 *ptr;
    u32 old;

    ptr = (u32 *) func_020638d0();
    old = *ptr;
    *ptr = (old & ~arg0) ^ arg1;
    return (s32) old;
}
