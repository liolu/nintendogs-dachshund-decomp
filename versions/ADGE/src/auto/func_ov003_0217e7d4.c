/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_0215a04c;

s32 func_02028114(void);
void func_02024d30(void *, s32, s32, s32);
s32 func_0203535c(void *);
s32 func_020382c4(void *);
void func_0203e5e8(void *, s16);

void func_ov003_0217e7d4(u8 *arg0) {
    s64 pq;
    s32 val;
    s32 ret;
    u16 st;
    s32 v;

    ret = func_02028114();
    pq  = (s64) ret * 0x102 + 0x800;
    val = (s32) (pq >> 12);
    func_02024d30(arg0, 0x1e, 0x31, val);
    if (func_0203535c(arg0) == 0) {
        return;
    }
    st = *(u16 *) data_0215a04c;
    if (st == 1 || st == 4) {
        func_0203e5e8(arg0, 0x3ab);
        return;
    }
    v = func_020382c4(arg0);
    switch (v) {
        case 0:
            func_0203e5e8(arg0, 0x3ab);
            break;
        case 1:
            func_0203e5e8(arg0, 0x3ad);
            break;
        case 2:
            func_0203e5e8(arg0, 0x3ae);
            break;
        case 3:
            func_0203e5e8(arg0, 0x3af);
            break;
        default:
            break;
    }
}
