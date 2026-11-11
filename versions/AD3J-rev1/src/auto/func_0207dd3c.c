/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_0207e1a0(u32, u32, u32);

void *func_0207dd3c(u32 a0, u32 a1, u32 a2) {
    u32 s;
    u32 e;

    e = (a1 + a0) & ~3;
    s = (a0 + 3) & ~3;
    if (s > e || e - s < 0x4C) {
        return 0;
    }
    return func_0207e1a0(s, e, a2);
}
