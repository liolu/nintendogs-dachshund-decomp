/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020351a0(void *);
s32 func_02038094(void *);
void func_0203e2b8(void *, s32);
extern u16 *data_02153708;

void func_ov002_0217c724(void *arg0) {
    u16 t;
    s32 s;

    if (func_020351a0(arg0) == 0) {
        return;
    }
    t = *data_02153708;
    if (t == 1 || t == 4) {
        func_0203e2b8(arg0, 0x3AB);
        return;
    }
    s = func_02038094(arg0);
    switch (s) {
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
