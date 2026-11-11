/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} T12;

extern u8 *data_0215a064;

s32 func_02028114(void);
void func_02024d30(void *, s32, s32, s32);
s32 func_0200f8d0(void *);
s32 func_0203535c(void *);
s32 func_020350fc(void *);
s32 func_0202cde8(void *, s32, s32, s32);
void func_ov003_021964c0(void *, s32, s32);
void func_ov003_0218a480(void *, s32, s32);

void func_ov003_0217aaf4(u8 *arg0) {
    s32 ret;
    s32 val;
    s32 r5;
    u8 *q;
    s64 pq;

    ret = func_02028114();
    pq  = (s64) ret * 0x102 + 0x800;
    val = (s32) (pq >> 12);
    func_02024d30(arg0, 0x1e, 0x31, -val);
    q                       = *(u8 **) (data_0215a064 + 0x1c);
    *(T12 *) (arg0 + 0x3b4) = *(T12 *) (q + 0x30);
    if (func_0200f8d0(arg0) != 0) {
        return;
    }
    if (func_0203535c(arg0) == 0) {
        return;
    }
    r5 = func_020350fc(arg0);
    if (func_0202cde8(arg0, 0, r5, 1) != 0) {
        return;
    }
    if (r5 != 0) {
        func_ov003_021964c0(arg0, r5, 0);
    } else {
        func_ov003_0218a480(arg0, 0, 0);
    }
}
