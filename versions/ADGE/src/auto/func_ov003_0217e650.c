/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02028114(void *);
s32 func_0203535c(void *);
void func_0203e5e8(void *, s32);
s32 func_02024d30(void *, s32, s32, s32);
s32 func_020382c4(void *);
extern u8 *data_0215a04c;

void func_ov003_0217e650(void *arg0) {
    s32 x;
    s32 v1;
    s32 v2;
    s32 r;
    u16 w;

    x  = func_02028114(arg0);
    v1 = (s32) ((((s64) x * 0x5E) + 0x800) >> 12);
    x  = func_02028114(arg0);
    v2 = (s32) ((((s64) x * 0xA3) + 0x800) >> 12);
    r  = func_02024d30(arg0, 0xB, 0x24, v2);
    if (r == 0) {
        func_02024d30(arg0, 0x2E, 0x50, v1);
    }
    if (func_0203535c(arg0) == 0) {
        return;
    }
    w = *(u16 *) data_0215a04c;
    if (w == 1 || w == 4) {
        func_0203e5e8(arg0, 0x3AB);
        return;
    }
    r = func_020382c4(arg0);
    switch (r) {
        case 0:
            func_0203e5e8(arg0, 0x3AB);
            break;
        case 1:
            func_0203e5e8(arg0, 0x3AD);
            break;
        case 2:
            func_0203e5e8(arg0, 0x3AE);
            break;
        case 3:
            func_0203e5e8(arg0, 0x3AF);
            break;
        default:
            break;
    }
}
