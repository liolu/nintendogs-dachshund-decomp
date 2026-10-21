#include "m2c.h"
s32 func_02003a00(void);
s32 func_020e1e58(void);
void func_020e1e1c(void);
void func_0208df98(s32);
s32 func_0208f1fc(s32, s32, s32);
void func_020a5c0c(s32);
void func_020e18f0(void);
s32 func_020e18d0(void);
s32 func_02029008(s32, s32, s32);
s32 func_01ffdb08(s16);
void func_0211f814(u8 *);
void func_0211ee7c(void);
void func_0211eb60(u8 *);
extern void *data_02159fc4;
extern void *data_0215a064;
extern void *data_0215a04c;
void func_0211e900(u8 *arg0) {
    s32 temp;

    switch (M2C_FIELD(arg0, u16 *, 4)) {
    case 0:
        if (func_02003a00() != 0) {
            M2C_FIELD(arg0, u16 *, 4) = 0x800;
            M2C_FIELD(arg0, u16 *, 6) = 0;
        }
        return;
    case 0x800:
        if (func_020e1e58() == 0) {
            return;
        }
        M2C_FIELD(arg0, u16 *, 4) = 0x801;
        M2C_FIELD(arg0, u16 *, 6) = 0;
        func_020e1e1c();
        func_0208df98(0x78);
        func_0208f1fc(0, 0x3C, 0x78);
        return;
    case 0x801:
        M2C_FIELD(arg0, s16 *, 8) = M2C_FIELD(arg0, s16 *, 8) - 1;
        if (M2C_FIELD(arg0, s16 *, 8) <= 0) {
            M2C_FIELD(arg0, u16 *, 4) = 0x802;
            M2C_FIELD(arg0, u16 *, 6) = 0;
        }
        return;
    case 0x802:
        if (M2C_FIELD(data_02159fc4, s32 *, 0) != 9) {
            return;
        }
        M2C_FIELD(arg0, u16 *, 4) = 0x803;
        M2C_FIELD(arg0, u16 *, 6) = 0;
        M2C_FIELD(data_0215a064, s32 *, 0x20) |= 2;
        func_020a5c0c(M2C_FIELD(data_0215a04c, s16 *, 0xE));
        func_0211f814(arg0);
        return;
    case 0x803:
        func_0211ee7c();
        return;
    case 0x804:
        M2C_FIELD(arg0, s16 *, 6) = M2C_FIELD(arg0, s16 *, 6) + 1;
        if (M2C_FIELD(arg0, s16 *, 6) < 0x78) {
            return;
        }
        temp = func_01ffdb08(M2C_FIELD(data_0215a04c, s16 *, 0xE));
        M2C_FIELD(arg0, u16 *, 4) = 0x805;
        M2C_FIELD(arg0, u16 *, 6) = 0;
        func_020e18f0();
        func_02029008(temp, 0x4C, 1);
        return;
    case 0x805:
        M2C_FIELD(arg0, s16 *, 6) = M2C_FIELD(arg0, s16 *, 6) + 1;
        if (M2C_FIELD(arg0, s16 *, 6) < 0xB4) {
            return;
        }
        M2C_FIELD(arg0, u16 *, 4) = 0x803;
        M2C_FIELD(arg0, u16 *, 6) = 0;
        func_0211f814(arg0);
        return;
    case 0x806:
        func_0211eb60(arg0);
        return;
    case 0x807:
        if (func_020e18d0() != 0) {
            M2C_FIELD(arg0, u16 *, 4) = 1;
            M2C_FIELD(arg0, s32 *, 0xC) = 1;
        }
        break;
    }
}
