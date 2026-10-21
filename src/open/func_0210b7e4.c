#include "m2c.h"
M2C_UNK func_020cd9cc(M2C_UNK);                      /* extern */
M2C_UNK func_020c8cb8(void);                         /* extern */
s32 func_02088e78(void);                             /* extern */
void func_020e23fc(M2C_UNK);                         /* extern */
void func_020e25e8(void);                            /* extern */
M2C_UNK func_020eb5a4(M2C_UNK, M2C_UNK, M2C_UNK);    /* extern */
void func_020f0ca4(s32, s32, s32, s32, u16, u16, s32, s16, s16, s16, s16); /* extern */
s32 func_020f0bfc(void *, s16, s16);                 /* extern */
void func_020e11fc(void);                            /* extern */
void func_02088df0(void);                            /* extern */
void func_020cd974(M2C_UNK);                         /* extern */
M2C_UNK func_020f0af4(M2C_UNK);                      /* extern */
void func_020d2c64(s16, s32, s32, s32, s32);         /* extern */
void func_0208ff8c(M2C_UNK);                         /* extern */
void func_0210c0bc(M2C_UNK);                         /* extern */
extern void *data_02159e70;
extern u8 data_0214d624[];
extern void *data_02159e64;
void func_0210b7e4(s32 arg0) {
    s32 var;
    s32 temp_r4;
    s32 var_r5;
    s32 var_r4;
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0x0) = M2C_FIELD(arg0, s32 *, 0x4);
    temp_r4 = arg0 + 0x1CA8;
    switch (M2C_FIELD(arg0, s32 *, 0x0)) {
    case 0:
        var = 1;
        M2C_FIELD(arg0, s32 *, 0x10) = M2C_FIELD(arg0, s32 *, 0x10) + 0x1999;
        if (M2C_FIELD(arg0, s32 *, 0x10) >= 0x10000) {
            M2C_FIELD(arg0, s32 *, 0x10) = 0x10000;
        } else {
            var = 0;
        }
        if (var != 0) {
            M2C_FIELD(arg0, s32 *, 0x4) = 1;
        }
        break;
    case 1:
        var = 1;
        M2C_FIELD(arg0, s32 *, 0x18) = M2C_FIELD(arg0, s32 *, 0x18) + 0x1999;
        if (M2C_FIELD(arg0, s32 *, 0x18) >= 0x10000) {
            M2C_FIELD(arg0, s32 *, 0x18) = 0x10000;
        } else {
            var = 0;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = M2C_FIELD(arg0, s32 *, 0x20) - 0xA000;
        if (M2C_FIELD(arg0, s32 *, 0x20) <= 0) {
            M2C_FIELD(arg0, s32 *, 0x20) = 0;
        } else {
            var = 0;
        }
        if (var != 0) {
            M2C_FIELD(arg0, s32 *, 0x4) = 2;
            func_020cd9cc(M2C_FIELD(temp_r4, s16 *, 0));
            if (func_020c8cb8() != 0) {
                func_02088e78();
            }
        }
        break;
    case 2:
        if (M2C_FIELD(arg0, s32 *, 0x1C) == 0) {
            func_020e23fc(1);
        }
        if (M2C_FIELD(data_02159e70, s32 *, 0x48B8) == 1) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 1;
        }
        if (M2C_FIELD(data_02159e70, s32 *, 0x48BC) == 1) {
            M2C_FIELD(arg0, s32 *, 0x4) = 3;
            func_020e25e8();
        } else if (M2C_FIELD(data_02159e70, s32 *, 0x4860) != 0) {
            if (M2C_FIELD(arg0, s32 *, 0x1C) == 0) {
                var_r5 = data_0214d624[0];
                var_r4 = data_0214d624[1];
                temp_r0 = func_020eb5a4(2, var_r5, var_r4);
                if (M2C_FIELD(data_0214d624, u16 *, 2) & 2) {
                    if (temp_r0 == 0) {
                        func_020f0ca4(arg0 + 0x24, 2, 0x37, 0, 0, 0, 1, 2, 2, 0xA, 0);
                        func_020f0bfc((void *) (arg0 + 0x24), (s16) var_r5, (s16) var_r4);
                        M2C_FIELD(arg0, s32 *, 0x4) = 5;
                        func_020e23fc(0);
                        func_0208ff8c(0x2A);
                    }
                }
            }
        }
        break;
    case 3:
        var = 1;
        M2C_FIELD(arg0, s32 *, 0x18) -= 0x2AAA;
        if (M2C_FIELD(arg0, s32 *, 0x18) <= 0) {
            M2C_FIELD(arg0, s32 *, 0x18) = 0;
        } else {
            var = 0;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = M2C_FIELD(arg0, s32 *, 0x20) + 0xA000;
        if (M2C_FIELD(arg0, s32 *, 0x20) >= 0x3C000) {
            M2C_FIELD(arg0, s32 *, 0x20) = 0x3C000;
        } else {
            var = 0;
        }
        if (var != 0) {
            M2C_FIELD(arg0, s32 *, 0x4) = 4;
        }
        break;
    case 4:
        var = 1;
        M2C_FIELD(arg0, s32 *, 0x10) -= 0x1999;
        if (M2C_FIELD(arg0, s32 *, 0x10) <= 0) {
            M2C_FIELD(arg0, s32 *, 0x10) = 0;
        } else {
            var = 0;
        }
        if (var != 0) {
            func_020e11fc();
            func_02088df0();
            if (M2C_FIELD(arg0, s32 *, 0x60) != 0) {
                func_020cd974(M2C_FIELD(temp_r4, s16 *, 0));
            }
        }
        break;
    case 5:
        if (func_020f0af4(arg0 + 0x24) != 0) {
            func_020d2c64(0xB, 0x2FA9, 0, 0, 0);
            M2C_FIELD(arg0, s32 *, 0x4) = 6;
        }
        break;
    case 6:
        if (M2C_FIELD(data_02159e64, s32 *, 0xA4) != 0) {
            if (M2C_FIELD(data_02159e64, s16 *, 0x9A) != 0) {
                M2C_FIELD(arg0, s32 *, 0x4) = 2;
                M2C_FIELD(arg0, s32 *, 0x1C) = 0;
            } else {
                M2C_FIELD(arg0, s32 *, 0x60) = 1;
                M2C_FIELD(arg0, s32 *, 0x4) = 3;
                func_020e25e8();
            }
        }
        break;
    }
    func_0210c0bc(arg0);
}
