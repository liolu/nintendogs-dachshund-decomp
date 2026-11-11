/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02035264(void *, s32);
void func_0203e5ac(void *, s32, s32);
s32 func_0202df7c(void *);
void func_02122f74(s32);

s32 func_ov003_021728e4(void *arg0, s32 arg1, s32 arg2, s32 arg3, s16 a4, s16 a5, s16 a6) {
    s32 r5;
    s16 cur;

    r5  = 0;
    cur = *(s16 *) ((u8 *) arg0 + arg1 * 2 + 0x152);
    if (arg2 == cur) {
        if (func_02035264(arg0, arg1) != 0) {
            func_0203e5ac(arg0, arg1, a4);
        }
    } else if (arg3 == cur) {
        if (func_02035264(arg0, arg1) != 0) {
            func_0203e5ac(arg0, arg1, a5);
        }
    } else if ((a4 == cur) || (a5 == cur)) {
        if ((s32) * (u16 *) ((u8 *) arg0 + 0xFC) > a6) {
            r5 = 1;
        }
    }
    if (r5 != 0) {
        if (func_0202df7c(arg0) != 0) {
            func_02122f74(2);
        }
    }
    return r5;
}
