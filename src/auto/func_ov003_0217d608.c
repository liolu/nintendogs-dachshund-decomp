/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0203e5e8(void *, s32);
s32 func_ov003_0217df20(void *, s16, s32);
extern u32 *data_0214da84;

void func_ov003_0217d608(void *arg0) {
    u32 seed;
    u32 q;
    s32 var_r5;

    seed           = (*data_0214da84 * 0x10DCD) + 1;
    q              = (((u32) (u16) seed) * 0x32) >> 16;
    *data_0214da84 = seed;
    if ((u16) q == 0) {
        var_r5 = 1;
    } else {
        var_r5 = 0;
    }
    if (func_ov003_0217df20(arg0, (s16) (*(s32 *) ((u8 *) arg0 + 0x484) + 7), 0) != 0) {
        return;
    }
    if (var_r5 == 0) {
        return;
    }
    if (*(s32 *) ((u8 *) arg0 + 0x484) == 0) {
        func_0203e5e8(arg0, 0x20D);
        return;
    }
    func_0203e5e8(arg0, 0x20E);
}
