#include "m2c.h"
s32 func_020940a0(s32 arg0, s32 *arg1, s32 arg2, s16 arg3);
s32 func_02093bc4(s32 arg0, s32 arg1, s32 arg2);
s32 func_02093754(s32 arg0, s32 arg1, s32 arg2, s16 arg3);
s32 func_02094740(s32 **arg0, u32 arg1, s32 arg2, s32 arg3, s16 arg4) {
    s32 r;
    u8 *ent;

    if (arg0 == 0 || *arg0 == 0) {
        return 0;
    }
    if (arg1 >= (u32) *(*arg0)) {
        return 0;
    }
    r = func_020940a0(arg2, &arg3, 0, arg4);
    if (r < 0) {
        goto out;
    }
    ent = (u8 *) *arg0 + 0x94 + arg1 * 0x18;
    if (func_02093bc4(*(s32 *) (ent + 0x14), arg2, arg3) != 1) {
        r = -4;
        goto out;
    }
    func_02093754(*(s32 *) (ent + 0x14), arg2, arg3, arg4);
    *(s32 *) (ent + 4) = 1;
    *(s32 *) (ent + 0) = 1;
out:
    return r;
}
