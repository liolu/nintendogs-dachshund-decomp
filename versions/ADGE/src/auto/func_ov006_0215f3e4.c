/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02027e3c(void *, M2C_UNK);                 /* extern */
u32 func_020384a0(void *, s32);                     /* extern */
M2C_UNK func_0203e5e8(void *, s32);                 /* extern */
extern void *data_0214da84;
extern s16 *data_0215a044;

s32 func_ov006_0215f3e4(void *arg0) {
    u32 temp_r0;

    if ((*data_0215a044 != 0) && ((s32) M2C_FIELD(arg0, s8 *, 0x89) >= (s32) M2C_FIELD(data_0214da84, s16 *, 0x32))) {
        func_0203e5e8(arg0, 0x4D4);
        return 1;
    }
    temp_r0 = func_020384a0(arg0, func_02027e3c(arg0, 0));
    switch (temp_r0) {
        case 0:
            func_0203e5e8(arg0, 0x4DD);
            return 1;
        case 1:
            func_0203e5e8(arg0, 0x4DE);
            return 1;
        case 2:
            func_0203e5e8(arg0, 0x4DF);
            return 1;
        case 3:
            func_0203e5e8(arg0, 0x4E0);
            return 1;
        case 4:
            func_0203e5e8(arg0, 0x4E1);
            return 1;
        case 5:
            func_0203e5e8(arg0, 0x4E2);
            return 1;
        default:
            return 0;
    }
}
