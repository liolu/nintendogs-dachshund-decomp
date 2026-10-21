#include "m2c.h"
s32 func_02003a00(void);
s32 func_020e21e4(void);
void func_020e2250(void);
void func_0208df98(s32);
s32 func_0208f1fc(s32, s32, s32);
void func_02118f00(void);
s32 func_0210e4a0(void);
void func_0208e084(s32, s32, s32);
void func_0208f350(s32);
void func_020e2210(void);
void func_0208fd08(s32);
s32 func_02119cfc(s32, s16);
void func_02119aa8(s32, s32);
s32 func_020e18d0(void);
extern void *data_0215a064;
void func_021197f4(u8 *arg0) {
    s32 temp;

    switch (M2C_FIELD(arg0, u16 *, 4)) {
    case 0:
        M2C_FIELD(arg0, s16 *, 6) = M2C_FIELD(arg0, s16 *, 6) + 1;
        if (func_02003a00() != 0) {
            M2C_FIELD(arg0, u16 *, 4) = 0x300;
            M2C_FIELD(arg0, u16 *, 6) = 0;
        }
        return;
    case 0x300:
        if (func_020e21e4() == 0) {
            return;
        }
        M2C_FIELD(arg0, u16 *, 4) = 0x301;
        M2C_FIELD(arg0, u16 *, 6) = 0;
        func_020e2250();
        func_0208df98(0x78);
        func_0208f1fc(0, 0x28, 0x78);
        return;
    case 0x301:
        M2C_FIELD(arg0, s16 *, 8) = M2C_FIELD(arg0, s16 *, 8) - 1;
        if (M2C_FIELD(arg0, s16 *, 8) > 0) {
            return;
        }
        M2C_FIELD(arg0, u16 *, 4) = 0x302;
        M2C_FIELD(arg0, u16 *, 6) = 0;
        M2C_FIELD(data_0215a064, s32 *, 0x20) |= 1;
        M2C_FIELD(data_0215a064, s32 *, 0x20) |= 2;
        func_02118f00();
        temp = func_0210e4a0();
        if (temp >= 0) {
            func_0208e084(temp, 0x7F, 0);
        }
        func_0208f1fc(0, 0x3C, 0x3C);
        return;
    case 0x302:
        M2C_FIELD(arg0, s16 *, 2) = M2C_FIELD(arg0, s16 *, 2) - 1;
        if (M2C_FIELD(arg0, s16 *, 2) > 0 && M2C_FIELD(arg0, s16 *, 2) <= 0x258) {
            if (M2C_FIELD(arg0, s16 *, 2) % 60 == 0) {
                func_0208f350(6);
            }
        }
        if (M2C_FIELD(arg0, s16 *, 2) > 0) {
            return;
        }
        M2C_FIELD(arg0, u16 *, 4) = 0x303;
        M2C_FIELD(arg0, u16 *, 6) = 0;
        M2C_FIELD(data_0215a064, s32 *, 0x20) &= ~1;
        M2C_FIELD(data_0215a064, s32 *, 0x20) &= ~2;
        func_020e2210();
        func_0208df98(0x3C);
        func_0208f1fc(0, 0x6E, 0x78);
        func_0208fd08(0x64);
        return;
    case 0x303:
        if (M2C_FIELD(data_0215a064, u16 *, 0x5E) == 0) {
            M2C_FIELD(arg0, s16 *, 6) = M2C_FIELD(arg0, s16 *, 6) + 1;
        }
        if (M2C_FIELD(arg0, s16 *, 6) < 0x78) {
            return;
        }
        func_02119cfc(M2C_FIELD(arg0, s32 *, 0x1C), M2C_FIELD(data_0215a064, s16 *, 0x56));
        func_02119aa8((s32) arg0, M2C_FIELD(arg0, s32 *, 0x1C));
        M2C_FIELD(arg0, u16 *, 4) = 0x304;
        M2C_FIELD(arg0, u16 *, 6) = 0;
        return;
    case 0x304:
        M2C_FIELD(arg0, u16 *, 4) = 0x305;
        M2C_FIELD(arg0, u16 *, 6) = 0;
        return;
    case 0x305:
        if (func_020e18d0() != 0) {
            M2C_FIELD(arg0, u16 *, 4) = 1;
            M2C_FIELD(arg0, s32 *, 0xC) = 1;
        }
        break;
    }
}
