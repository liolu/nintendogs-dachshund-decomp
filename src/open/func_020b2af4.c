#include "m2c.h"
s32 func_020b2af4(void) {
    s32 t;

    func_01ffdb08();
    t = func_02028120();
    return (s32) (((s64) t * 0x3000 + 0x800) >> 12);
}
