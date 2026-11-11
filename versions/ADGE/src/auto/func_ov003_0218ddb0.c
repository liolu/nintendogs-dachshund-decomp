/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 w0;
    s32 w1;
    s32 w2;
} Words3;

u8 *func_020361ac(u8 *);
s32 func_02028114(u8 *);
s32 func_02037130(u8 *, s32);
s32 func_0203e5e8(u8 *, s32);
extern s32 *data_0214da84;

void func_ov003_0218ddb0(u8 *arg0) {
    u8 *temp_r0;
    s32 temp_r1;
    u16 temp_r0_3;

    temp_r0 = func_020361ac(arg0);
    if (temp_r0 != 0) {
        *(Words3 *) (arg0 + 0x26C) = *(Words3 *) (temp_r0 + 0xBC);
        *(Words3 *) (arg0 + 0x278) = *(Words3 *) (arg0 + 0x26C);
        func_02037130(arg0, 0x300);
    }
    if ((s32) * (u16 *) (arg0 + 0xFC) <= ((s32) (0x1000 - func_02028114(arg0)) >> 8) + 0x19) {
        return;
    }
    temp_r1        = (*data_0214da84 * 0x10DCD) + 1;
    temp_r0_3      = (u16) ((u32) (temp_r1 << 0x10) >> 0x1E);
    *data_0214da84 = temp_r1;
    switch (temp_r0_3) {
        case 0:
            func_0203e5e8(arg0, 0x5F);
            return;
        case 1:
            func_0203e5e8(arg0, 0x5E);
            return;
        case 2:
            func_0203e5e8(arg0, 0x424);
            return;
        case 3:
            func_0203e5e8(arg0, 0x425);
            break;
        default:
            break;
    }
}
