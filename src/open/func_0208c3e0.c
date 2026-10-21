#include "m2c.h"
extern u8 data_02154350[];
extern u8 data_02154358[];
void func_02070f88(void *p, s32 arg);
void func_02073328(void *p, s32 a, s32 b);
void func_02070dac(void *p, s32 a, s32 b);
void func_02070e7c(void *p, s32 a, s32 b);
void func_0208c3e0(s32 arg0, s32 arg1) {
    u8 *base = data_02154350;
    u8 *other = data_02154358;
    s32 limit;
    unsigned shift;
    int vol;
    s32 shift2;

    if (arg1 != 0) {
        if (M2C_FIELD(base, s32 *, 0) != 0) {
            func_02070f88(base, 0);
        }
        if (M2C_FIELD(base, s32 *, 0x4C) == 0) {
            func_02073328(other, 0x30, 8);
            M2C_FIELD(base, s32 *, (unsigned short)0x4C) = 1;
        }
        limit = 10000;
        vol = 0x28;
        shift = 2;
        shift2 = 6;
    } else {
        if (M2C_FIELD(other, s32 *, 0) == 0) {
            if (arg0 > 0) {
                func_02073328(other, 0x30, 0xA);
            } else if (arg0 < 0) {
                func_02073328(other, 0x30, 0xB);
            }
        }
        limit = 10000;
        vol = 0xA;
        shift = 3;
        shift2 = 6;
    }
    if (M2C_FIELD(other, s32 *, 0) != 0) {
        if (0 > arg0) {
            arg0 = -arg0;
        }
        if (arg0 > limit) {
            arg0 = limit;
        }
        func_02070dac(other, 0xFFFF, arg0 >> shift);
        vol = vol + (arg0 >> shift2);
        if (vol > 0x7F) {
            vol = 0x7F;
        }
        func_02070e7c(other, vol, 0);
    }
    M2C_FIELD(base, s32 *, (u32)0x50) = 1;
}
