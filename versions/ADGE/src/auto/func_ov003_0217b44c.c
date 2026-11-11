/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0215a064[];
typedef struct {
    s32 a;
    s32 b;
    s32 c;
} Triple;

s32 func_0200f8d0(void *);
s32 func_0203535c(void *);
s32 func_020350fc(void *);
s32 func_0202cde8(void *, s32, s32, s32);
void func_ov003_021964c0(void *, s32, s32);
void func_ov003_0218a480(void *, s32, s32);

void func_ov003_0217b44c(void *arg0) {
    s32 t;
    u8 *src;

    src                               = *(u8 **) (*(u8 **) data_0215a064 + 0x1C) + 0x30;
    *(Triple *) ((u8 *) arg0 + 0x3B4) = *(Triple *) src;
    if (func_0200f8d0(arg0) != 0) {
        return;
    }
    if (func_0203535c(arg0) == 0) {
        return;
    }
    t = func_020350fc(arg0);
    if (func_0202cde8(arg0, 0, t, 1) != 0) {
        return;
    }
    if (t != 0) {
        func_ov003_021964c0(arg0, t, 0);
        return;
    }
    func_ov003_0218a480(arg0, 0, 0);
}
