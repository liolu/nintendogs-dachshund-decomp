/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020280ec(u8 *);
s32 func_020351a0(u8 *);
s32 func_02035268(u8 *, s32);
s32 func_02035294(u8 *, s32);
s32 func_020352c0(u8 *, s32);
s32 func_0203e2b8(u8 *, s32);
s32 func_ov002_02171078(u8 *, s32, s32, s32, s32, s32, s32, s32, s32);

void func_ov002_02170e34(u8 *arg0) {
    s64 v;
    s32 temp_r0;
    s32 var_r0;

    if (func_020352c0(arg0, 3) != 0) {
        temp_r0                 = func_020280ec(arg0);
        v                       = (s64) temp_r0 * -0x20 + 0x800;
        *(s32 *) (arg0 + 0x25C) = (s32) (v >> 12);
        *(s32 *) (arg0 + 0x264) = 0 - (*(s32 *) (arg0 + 0x25C) * 8);
    }
    if (func_02035294(arg0, 3) != 0 && func_02035268(arg0, 0x14) != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (func_ov002_02171078(arg0, 0x3B0, 1, 0x200, 0, 0, 0, var_r0, 0) != 0) {
        return;
    }
    if (func_020351a0(arg0) == 0) {
        return;
    }
    func_0203e2b8(arg0, 0x3B2);
}
