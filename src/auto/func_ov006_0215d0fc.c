/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02025e84(void *);
s32 func_02028114(void *);
s32 func_02035450(void *, s32);
s32 func_0203547c(void *, s32);
void func_ov006_0215d188(void *);

void func_ov006_0215d0fc(void *arg0) {
    s32 temp_r0;
    s64 prod;

    if (func_02035450(arg0, 0x1) != 0) {
        func_02025ea4(arg0);
    }
    if (func_0203547c(arg0, 0x1) != 0) {
        temp_r0                       = func_02028114(arg0);
        prod                          = (s64) temp_r0 * -0x20LL + 0x800LL;
        M2C_FIELD(arg0, s32 *, 0x25C) = (s32) ((u64) prod >> 12);
        M2C_FIELD(arg0, s32 *, 0x264) = (s32) (M2C_FIELD(arg0, s32 *, 0x25C) * -0xC);
    }
    func_ov006_0215d188(arg0);
}
