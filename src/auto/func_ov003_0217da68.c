/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0202938c(void *);
void func_0203e5e8(void *, s16);
s32 func_ov003_0217df20(void *, s16, s32);
extern s32 *data_0214da84;

void func_ov003_0217da68(u8 *arg0) {
    s32 t;
    u16 q;

    if (func_ov003_0217df20(arg0, (s16) (*(s32 *) (arg0 + 0x484) + 5), 1) != 0) {
        return;
    }
    if (func_0202938c(arg0) != 0) {
        return;
    }
    t              = (*data_0214da84 * 0x10DCD) + 1;
    *data_0214da84 = t;
    q              = (u16) ((u32) ((u16) t * 0x32) >> 0x10);
    switch (q) {
        case 0:
            func_0203e5e8(arg0, (s16) (*(s32 *) (arg0 + 0x484) + 0x213));
            return;
        case 1:
            func_0203e5e8(arg0, (s16) (*(s32 *) (arg0 + 0x484) + 0x21E));
            return;
    }
}
