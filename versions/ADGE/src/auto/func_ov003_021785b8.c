/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0203535c(void *);
void func_020394f8(void *);
void func_ov003_021794dc(void *, s32, s32, s32, s32, s32, s32, s32);

void func_ov003_021785b8(void *arg0) {
    s8 t;
    s32 v;
    s32 r;

    t = *(s8 *) ((u8 *) arg0 + 0x8B);
    switch (t) {
        case 4:
        case 5:
            v = 0x14;
            break;
        default:
            v = 0x13;
            break;
    }
    r = func_0203535c(arg0);
    func_ov003_021794dc(arg0, 5, 0x19, 1, 1, r, v, v);
    func_020394f8(arg0);
}
