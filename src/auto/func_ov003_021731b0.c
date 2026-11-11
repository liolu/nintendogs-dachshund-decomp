/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02028114(u8 *);
s32 func_0203535c(u8 *);
s32 func_02035424(u8 *, s32);
s32 func_02035450(u8 *, s32);
s32 func_0203547c(u8 *, s32);
s32 func_0203e5e8(u8 *, s32);
s32 func_ov003_021734f8(u8 *, s32, s32, s32, s32, s32, s32, s32, s32);

void func_ov003_021731b0(u8 *arg0) {
    s64 v;
    s32 temp_r0;
    s32 var_r0;

    if (func_0203547c(arg0, 3) != 0) {
        temp_r0                 = func_02028114(arg0);
        v                       = (s64) temp_r0 * -0x20 + 0x800;
        *(s32 *) (arg0 + 0x25C) = (s32) (v >> 12);
        *(s32 *) (arg0 + 0x264) = 0 - (*(s32 *) (arg0 + 0x25C) * 8);
    }
    if (func_02035450(arg0, 3) != 0 && func_02035424(arg0, 0x14) != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (func_ov003_021734f8(arg0, 0x3B0, 1, 0x200, 0, 0, 0, var_r0, 0) != 0) {
        return;
    }
    if (func_0203535c(arg0) == 0) {
        return;
    }
    func_0203e5e8(arg0, 0x3B2);
}
