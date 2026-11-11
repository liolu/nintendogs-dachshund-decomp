/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02038094(void *);
void func_0203e2b8(void *, s32);
void func_02029204(void *);
s32 func_02022dd0(void *, s32);

s32 func_ov002_0218a37c(void *arg0) {
    s32 r;

    r = func_02038094(arg0);
    switch (r) {
        case 0:
            func_0203e2b8(arg0, 0x30F);
            break;
        case 1:
            func_0203e2b8(arg0, 0x311);
            break;
        case 2:
            func_0203e2b8(arg0, 0x312);
            break;
        case 3:
            func_0203e2b8(arg0, 0x313);
            break;
        default:
            break;
    }
    if (*(s16 *) ((u8 *) arg0 + 0xF0) == 1) {
        func_02029204(arg0);
    } else if (func_02022dd0(arg0, 1) != 0) {
        func_02029204(arg0);
    }
    return 1;
}
