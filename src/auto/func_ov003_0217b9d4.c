/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0203e5ac(void *, s32, s32);
void func_ov003_0217bda0(void *, s32, s32);

void func_ov003_0217b9d4(void *arg0) {
    s8 st;
    s16 v;

    func_ov003_0217bda0(arg0, 0, -1);
    st = *(s8 *) ((u8 *) arg0 + 0x95);
    switch (st) {
        default:
            func_0203e5ac(arg0, 0, 0);
            return;
        case 1:
            v = *(s16 *) ((u8 *) arg0 + 0x152);
            if (v == 0x15E) {
                return;
            }
            if (v == 0x15F) {
                return;
            }
            func_0203e5ac(arg0, 0, 0x15E);
            return;
        case 2:
            v = *(s16 *) ((u8 *) arg0 + 0x152);
            if (v == 0x160) {
                return;
            }
            if (v == 0x161) {
                return;
            }
            func_0203e5ac(arg0, 0, 0x160);
            return;
    }
}
