/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020280ec(void *);
s32 func_020351a0(void *);
void func_0203e2b8(void *, s32);
s32 func_02024ce8(void *, s32, s32, s32);
s32 func_02038094(void *);
extern u8 *data_02153708;

void func_ov002_0217c29c(void *arg0) {
    s32 x;
    s32 v1;
    s32 v2;
    s32 r;
    u16 w;

    x  = func_020280ec(arg0);
    v1 = (s32) ((((s64) x * 0x5E) + 0x800) >> 12);
    x  = func_020280ec(arg0);
    v2 = (s32) ((((s64) x * 0xA3) + 0x800) >> 12);
    r  = func_02024ce8(arg0, 0xB, 0x24, v2);
    if (r == 0) {
        func_02024ce8(arg0, 0x2E, 0x50, v1);
    }
    if (func_020351a0(arg0) == 0) {
        return;
    }
    w = *(u16 *) data_02153708;
    if (w == 1 || w == 4) {
        func_0203e2b8(arg0, 0x3AB);
        return;
    }
    r = func_02038094(arg0);
    switch (r) {
        case 0:
            func_0203e2b8(arg0, 0x3AB);
            break;
        case 1:
            func_0203e2b8(arg0, 0x3AD);
            break;
        case 2:
            func_0203e2b8(arg0, 0x3AE);
            break;
        case 3:
            func_0203e2b8(arg0, 0x3AF);
            break;
        default:
            break;
    }
}
