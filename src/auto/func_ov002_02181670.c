/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void *data_02153708;

s32 func_0202c05c(void *, s32);
s32 func_020351a0(void *);
void func_0203e2b8(void *, s32);
s32 func_02038094(void *);

void func_ov002_02181670(u8 *arg0) {
    u16 x;
    s32 t;

    if (func_0202c05c(arg0, 1) != 0) {
        return;
    }
    if (func_020351a0(arg0) == 0) {
        return;
    }
    x = *(u16 *) data_02153708;
    if (x == 1 || x == 4) {
        func_0203e2b8(arg0, 0x3AB);
        return;
    }
    t = func_02038094(arg0);
    switch (t) {
        case 0:
            func_0203e2b8(arg0, 0x3AB);
            return;
        case 1:
            func_0203e2b8(arg0, 0x3AD);
            return;
        case 2:
            func_0203e2b8(arg0, 0x3AE);
            return;
        case 3:
            func_0203e2b8(arg0, 0x3AF);
            return;
    }
}
