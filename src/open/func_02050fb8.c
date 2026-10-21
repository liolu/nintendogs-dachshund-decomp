#include "m2c.h"
extern void *data_0214da84;
s32 func_0202daec(void);
void func_0203e5e8(s32 arg0, s32 arg1);
void func_02027658(s32 arg0, s32 *arg1);
s32 func_02050fb8(s32 arg0, s32 arg1) {
    s32 v0[3];
    u32 *p;
    u32 seed;
    u16 bit;
    s32 d0;
    s32 d2;
    s32 sum;
    s16 sel;

    switch (func_0202daec()) {
    case 1:
    case 2:
    case 3:
        func_0203e5e8(arg0, 0x2AD);
        return 1;
    case 4:
    case 5:
    case 6:
        func_0203e5e8(arg0, 0x2B9);
        return 1;
    case 7:
    case 9:
    case 11:
    case 13:
        func_0203e5e8(arg0, 0x2C3);
        return 1;
    case 8:
    case 10:
    case 12:
    case 14:
        func_0203e5e8(arg0, 0x2C8);
        return 1;
    case 0:
        p = (u32 *) data_0214da84;
        seed = *p * 0x10DCD + 1;
        *p = seed;
        bit = (u16) ((seed << 16) >> 31);
        switch (bit) {
        case 0:
            func_02027658(arg1, v0);
            d0 = v0[0] - M2C_FIELD(arg0, s32 *, 0x2A0);
            d2 = v0[2] - M2C_FIELD(arg0, s32 *, 0x2A8);
            sum = (s32) (((s64) d0 * M2C_FIELD(arg0, s32 *, 0x18C) + 0x800) >> 12) +
                  (s32) (((s64) d2 * M2C_FIELD(arg0, s32 *, 0x194) + 0x800) >> 12);
            sel = (s16) (sum <= 0);
            if (sel == 0) {
                func_0203e5e8(arg0, 0x2A4);
            } else {
                func_0203e5e8(arg0, 0x2A3);
            }
            return 1;
        case 1:
            func_0203e5e8(arg0, 0x2A1);
            return 1;
        }
        break;
    }
    return 0;
}
