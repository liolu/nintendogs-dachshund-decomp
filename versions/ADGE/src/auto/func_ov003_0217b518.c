/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct Blk3 {
    u32 a;
    u32 b;
    u32 c;
};

extern u8 *data_0215a064;
s32 func_0200f8d0(void *);
s32 func_0203535c(void *);
s32 func_020350fc(void *);
s32 func_0202cde8(void *, s32, s32, s32);
void func_ov003_021964c0(void *, s32, s32);
void func_ov003_0218a480(void *, s32, s32);

void func_ov003_0217b518(void *arg0) {
    u8 *p;
    s32 r4;

    p                                      = *(u8 **) (data_0215a064 + 0x1C);
    *(struct Blk3 *) ((u8 *) arg0 + 0x3B4) = *(struct Blk3 *) (p + 0x30);
    if (func_0200f8d0(arg0) != 0) {
        return;
    }
    if (func_0203535c(arg0) == 0) {
        return;
    }
    r4 = func_020350fc(arg0);
    if (func_0202cde8(arg0, 0, r4, 1) != 0) {
        return;
    }
    if (r4 != 0) {
        func_ov003_021964c0(arg0, r4, 0);
        return;
    }
    func_ov003_0218a480(arg0, 0, 0);
}
