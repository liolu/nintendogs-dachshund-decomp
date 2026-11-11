/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02035450(void *, s32);
s32 func_020382c4(void *);
void func_0203e5e8(void *, s32);
extern u16 *data_0215a04c;

void func_ov003_0217d00c(void *arg0) {
    u16 t;
    s32 s;

    if (func_02035450(arg0, 0x32) == 0) {
        return;
    }
    t = *data_0215a04c;
    if (t == 1 || t == 4) {
        func_0203e5e8(arg0, 0x3AB);
        return;
    }
    s = func_020382c4(arg0);
    switch (s) {
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
