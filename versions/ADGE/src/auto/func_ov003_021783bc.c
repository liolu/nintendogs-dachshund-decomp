/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0203535c(void *);
s32 func_0203547c(void *, s32);
s32 func_02028114(void *);
void func_020394f8(void *);
void func_ov003_021794dc(void *, s32, s32, s32, s32, s32, s32, s32);

void func_ov003_021783bc(void *arg0) {
    s8 kind;
    s32 r5;
    s32 t;
    s32 v;
    s64 p;

    kind = *(s8 *) ((u8 *) arg0 + 0x8B);
    switch (kind) {
        case 4:
        case 5:
            r5 = 0x14;
            break;
        default:
            r5 = 0x13;
            break;
    }
    t = func_0203535c(arg0);
    func_ov003_021794dc(arg0, 7, 0x19, 1, 1, t, r5, r5);
    if (func_0203547c(arg0, 7) != 0) {
        v                              = func_02028114(arg0);
        p                              = (s64) v * -15 + 0x800;
        *(s32 *) ((u8 *) arg0 + 0x25C) = (s32) (p >> 12);
        *(s32 *) ((u8 *) arg0 + 0x264) = *(s32 *) ((u8 *) arg0 + 0x25C) * -9;
    }
    func_020394f8(arg0);
}
