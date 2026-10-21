#include "m2c.h"
void func_0203e5e8(M2C_UNK, M2C_UNK);
extern u32 *data_0214da84;
s32 func_0204cc30(s32 arg0) {
    u32 *seed;
    u32 r;
    u16 sel;

    if (M2C_FIELD(arg0, u16 *, 0xFC) > 0xA
        && M2C_FIELD(arg0, u16 *, 0xFC) < 0x1E
        && M2C_FIELD(arg0, s16 *, 0x152) >= 0x14
        && M2C_FIELD(arg0, s16 *, 0x152) <= 0x16
        && (M2C_FIELD(arg0, s16 *, 0xEE) < 0x25E || M2C_FIELD(arg0, s16 *, 0xEE) > 0x25F)) {
        seed = data_0214da84;
        r = *seed * 0x10DCD + 1;
        *seed = r;
        sel = (u16) (((u16) r * 120u) >> 16);
        if (sel == 0) {
            func_0203e5e8(arg0, 0x25E);
            return 1;
        }
    }
    if (M2C_FIELD(arg0, u16 *, 0xFC) > 0x64
        && M2C_FIELD(arg0, s16 *, 0x152) >= 0x14
        && M2C_FIELD(arg0, s16 *, 0x152) <= 0x16
        && M2C_FIELD(arg0, s8 *, 0xA1) >= 1
        && M2C_FIELD(arg0, s8 *, 0xA1) <= 2
        && M2C_FIELD(arg0, s32 *, 0x468) >= 3
        && M2C_FIELD(arg0, s32 *, 0x468) <= 4) {
        seed = data_0214da84;
        r = *seed * 0x10DCD + 1;
        *seed = r;
        sel = (u16) (((u16) r * 6u) >> 16);
        if (sel == 0) {
            func_0203e5e8(arg0, 0x25F);
            return 1;
        }
    }
    M2C_FIELD(arg0, s32 *, 0x468) = M2C_FIELD(arg0, s8 *, 0xA1);
    return 0;
}
