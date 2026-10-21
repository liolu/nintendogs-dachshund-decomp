#include "m2c.h"
extern s32 func_020466b0(s32, s32, s32);
extern void func_0203e5e8(s32, s32);
extern s32 *data_0214da84;
void func_020461f0(s32 arg0) {
    s32 temp_r1;

    M2C_FIELD(arg0, u16 *, 0x12E) = 0xB000;
    if (func_020466b0(arg0, 1, 1) != 0) {
        return;
    }
    temp_r1        = (*data_0214da84 * 0x10DCD) + 1;
    *data_0214da84 = temp_r1;
    switch ((u16) (((u32) (u16) temp_r1 * 0x64) >> 0x10)) {
        case 0:
            func_0203e5e8(arg0, 0x2ED);
            return;
        case 1:
            func_0203e5e8(arg0, 0x2F6);
            return;
        case 2:
            func_0203e5e8(arg0, 0x2F8);
            return;
    }
}
