/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02025e3c(void *);
s32 func_020280ec(void *);
s32 func_02035294(void *, s32);
s32 func_020352c0(void *, s32);
void func_ov005_0215ad0c(void *);

void func_ov005_0215abf4(void *arg0) {
    s32 temp_r0;
    s64 prod;

    if (func_02035294(arg0, 0xA) != 0) {
        func_02025e3c(arg0);
    }
    if (func_020352c0(arg0, 0xA) != 0) {
        temp_r0                       = func_020280ec(arg0);
        prod                          = (s64) temp_r0 * -0x70LL + 0x800LL;
        M2C_FIELD(arg0, s32 *, 0x25C) = (s32) ((u64) prod >> 12);
        M2C_FIELD(arg0, s32 *, 0x264) = (s32) (M2C_FIELD(arg0, s32 *, 0x25C) * -0xE);
    }
    func_ov005_0215ad0c(arg0);
}
