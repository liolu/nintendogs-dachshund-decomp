/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0200f8d0(void *);
void func_02024e30(void *, s32, s32);
s32 func_02028114(void *);
s32 func_0203535c(void *);
void func_020394f8(void *);
void func_0203e5e8(void *, s32);

void func_ov003_0217bc8c(void *arg0) {
    s32 temp_r0;
    s64 prod;

    temp_r0 = func_02028114(arg0);
    prod    = (s64) temp_r0 * 0x5DLL + 0x800LL;
    func_02024e30(arg0, 0xB, -(s32) ((u64) prod >> 12));
    func_020394f8(arg0);
    if (func_0200f8d0(arg0) != 0) {
        return;
    }
    if (func_0203535c(arg0) == 0) {
        return;
    }
    func_0203e5e8(arg0, 0x354);
}
