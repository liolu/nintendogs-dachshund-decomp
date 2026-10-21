#include "m2c.h"
extern s32 *data_0214da84;
s32 func_02036258(s32);
s32 func_0202fa5c(s32);
s32 func_0202f9a0(s32);
void func_02035fd8(s32);
s32 func_02027700(s32, s32);
s32 func_0203535c(s32);
s32 func_0204469c(void);
void func_0203e5e8(s32, s32);
void func_02035fcc(s32, s16);
void func_0202706c(s32, s32);
s32 func_02053154(s32 arg0) {
    s32 temp_r4;
    s32 temp_r3;
    u16 temp_r0;

    temp_r4 = func_02036258(arg0);
    if ((u32) (u16) M2C_FIELD(arg0, u16 *, 0xFC) > 0xC8U) {
        func_02035fd8(arg0);
        return func_0202fa5c(arg0);
    }
    if (temp_r4 == 0) {
        func_02035fd8(arg0);
        return func_0202f9a0(arg0);
    }
    if (func_0203535c(temp_r4) != 0) {
        switch (func_02027700(arg0, temp_r4)) {
        case 1:
            temp_r3        = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp_r3;
            temp_r0        = (u16) ((u32) (temp_r3 << 0x10) >> 0x1F);
            switch (temp_r0) {
            case 0:
                temp_r4 = func_02036258(arg0);
                if (!(func_0204469c() & 0x20)) {
                    return func_0202fa5c(arg0);
                }
                if (temp_r4 == 0) {
                    return 0;
                }
                temp_r3        = (*data_0214da84 * 0x10DCD) + 1;
                *data_0214da84 = temp_r3;
                temp_r0        = (u16) ((u32) (temp_r3 << 0x10) >> 0x1F);
                switch (temp_r0) {
                case 0:
                    func_0203e5e8(arg0, 0x2CD);
                    return 1;
                case 1:
                    func_0203e5e8(arg0, 0x2CE);
                    return 1;
                default:
                    return 0;
                }
            case 1:
                if (!(func_0204469c() & 0x100)) {
                    return func_0202fa5c(arg0);
                }
                if ((u32) (u8) (s8) (M2C_FIELD(arg0, s8 *, 0x8B) - 4) <= 1U ||
                    (u32) (u8) (s8) (M2C_FIELD(temp_r4, s8 *, 0x8B) - 4) <= 1U) {
                    return 0;
                }
                func_02035fcc(arg0, (s32) (s16) M2C_FIELD(temp_r4, s8 *, 0x88));
                func_0203e5e8(arg0, 0x26F);
                func_02035fcc(temp_r4, (s32) (s16) M2C_FIELD(arg0, s8 *, 0x88));
                func_0202706c(temp_r4, 0x18);
                return 1;
            default:
                break;
            }
            break;
        case 0:
            func_02035fd8(arg0);
            return func_0202fa5c(arg0);
        case -1:
            temp_r3        = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp_r3;
            temp_r0        = (u16) ((u32) (temp_r3 << 0x10) >> 0x1F);
            switch (temp_r0) {
            case 0:
                func_02035fcc(temp_r4, (s32) (s16) M2C_FIELD(arg0, s8 *, 0x88));
                func_0202706c(temp_r4, 0x11);
                return 1;
            case 1:
                if (!(func_0204469c() & 0x100)) {
                    return func_0202fa5c(arg0);
                }
                if ((u32) (u8) (s8) (M2C_FIELD(arg0, s8 *, 0x8B) - 4) <= 1U ||
                    (u32) (u8) (s8) (M2C_FIELD(temp_r4, s8 *, 0x8B) - 4) <= 1U) {
                    return 0;
                }
                func_02035fcc(arg0, (s32) (s16) M2C_FIELD(temp_r4, s8 *, 0x88));
                func_0203e5e8(arg0, 0x273);
                func_02035fcc(temp_r4, (s32) (s16) M2C_FIELD(arg0, s8 *, 0x88));
                func_0202706c(temp_r4, 0x16);
                return 1;
            default:
                break;
            }
            break;
        }
    }
    return 0;
}
