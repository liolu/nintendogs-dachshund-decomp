/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void *data_0215a04c;

s32 func_0202c0c0(void *, s32);
s32 func_0203535c(void *);
void func_0203e5e8(void *, s32);
s32 func_020382c4(void *);

void func_ov003_021839e8(u8 *arg0) {
    u16 x;
    s32 t;

    if (func_0202c0c0(arg0, 1) != 0) {
        return;
    }
    if (func_0203535c(arg0) == 0) {
        return;
    }
    x = *(u16 *) data_0215a04c;
    if (x == 1 || x == 4) {
        func_0203e5e8(arg0, 0x3AB);
        return;
    }
    t = func_020382c4(arg0);
    switch (t) {
        case 0:
            func_0203e5e8(arg0, 0x3AB);
            return;
        case 1:
            func_0203e5e8(arg0, 0x3AD);
            return;
        case 2:
            func_0203e5e8(arg0, 0x3AE);
            return;
        case 3:
            func_0203e5e8(arg0, 0x3AF);
            return;
    }
}
