/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_02153708;

s32 func_020280ec(void);
void func_02024ce8(void *, s32, s32, s32);
s32 func_020351a0(void *);
s32 func_02038094(void *);
void func_0203e2b8(void *, s16);

void func_ov002_0217c420(u8 *arg0) {
    s64 pq;
    s32 val;
    s32 ret;
    u16 st;
    s32 v;

    ret = func_020280ec();
    pq  = (s64) ret * 0x102 + 0x800;
    val = (s32) (pq >> 12);
    func_02024ce8(arg0, 0x1e, 0x31, val);
    if (func_020351a0(arg0) == 0) {
        return;
    }
    st = *(u16 *) data_02153708;
    if (st == 1 || st == 4) {
        func_0203e2b8(arg0, 0x3ab);
        return;
    }
    v = func_02038094(arg0);
    switch (v) {
        case 0:
            func_0203e2b8(arg0, 0x3ab);
            break;
        case 1:
            func_0203e2b8(arg0, 0x3ad);
            break;
        case 2:
            func_0203e2b8(arg0, 0x3ae);
            break;
        case 3:
            func_0203e2b8(arg0, 0x3af);
            break;
        default:
            break;
    }
}
