#include "m2c.h"
extern void func_0208c550(s32);
extern void func_02088fdc(s16);
extern void func_0208cdac(s16, s16);
extern void func_0208ca3c(void);
extern void func_02088f38(void);
void func_020ffb5c(s32 arg0) {
    u8 *p;
    u16 a;
    s16 t;
    s32 v;
    s32 d;

    p = M2C_FIELD(arg0, u8 **, 0x214);
    a = M2C_FIELD(p, u16 *, 0x1C);
    if (a >= 0xEEF && a <= 0x20B6) {
        t = M2C_FIELD(p, s16 *, 0x6);
        v = (t * (s32) (a - 0xEEF)) / 4551;
        if (v >= 0 && v < t) {
            if (M2C_FIELD(p, s16 *, 0x2) == 2) {
                d = M2C_FIELD(p, s32 *, 0x14);
                if (d <= 0) {
                    d = -d;
                }
                if (d < 0x71C) {
                    if (M2C_FIELD(p, s32 *, 0x54) != 0) {
                        if (M2C_FIELD(p, s32 *, 0x58) == 0) {
                            return;
                        }
                        func_0208c550(0);
                        M2C_FIELD(p, s32 *, 0x58) = 0;
                    } else {
                        func_02088fdc(v);
                    }
                    return;
                }
            }
            if (M2C_FIELD(p, s32 *, 0x54) != 0) {
                func_0208cdac(M2C_FIELD(arg0, s16 *, 0x94), v);
            } else {
                func_02088fdc(v);
            }
        } else {
            if (M2C_FIELD(p, s32 *, 0x54) != 0) {
                func_0208ca3c();
            } else {
                func_02088f38();
            }
        }
    } else {
        if (M2C_FIELD(p, s32 *, 0x54) != 0) {
            func_0208ca3c();
        } else {
            func_02088f38();
        }
    }
}
