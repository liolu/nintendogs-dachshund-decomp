#include "m2c.h"
extern void *data_0215a044;
extern void *data_0215a04c;
extern void *data_0215a064;
extern void *data_021555f8;
extern void *data_02159fc4;
s32 func_020e08fc(void);
s32 func_01ffdb08(s16);
s32 func_0202816c(s32);
s32 func_02027c48();
s32 func_020e2178(void);
s32 func_020ae268(s32);
s32 func_02114a1c(void);
s32 func_020e1a70(void);
s32 func_020e047c(s32 arg0, s32 arg1) {
    s32 var_r4 = 0xffff;
    s32 temp;
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r2;
    u32 var_u32;
    u32 temp_a;
    u32 temp_b;
    u32 temp_c;
    u32 *p;

    switch (arg1) {
        case 4:
            var_r4 = func_020e08fc();
            break;
        case 0x13f2:
            var_r4 = (u16) (M2C_FIELD(M2C_FIELD(data_0215a044, s32 *, 0x34), s16 *, 4) - 1);
            break;
        case 0x13f3:
            if (M2C_FIELD(M2C_FIELD(data_0215a044, s32 *, 0x34), s16 *, 6) != 0) {
                var_r4 = 0;
            } else {
                var_r4 = 1;
            }
            break;
        case 7:
            temp_r0 = func_0202816c(func_01ffdb08(M2C_FIELD(data_0215a04c, s16 *, 0xE)));
            temp_r2 = 0;
            switch (M2C_FIELD(data_0215a04c, s16 *, 6)) {
                case 0:
                    temp_r2 = temp_r0 + 0x7d0;
                    break;
                case 1:
                    temp_r2 = temp_r0 + 0x7d8;
                    break;
                case 2:
                    temp_r2 = temp_r0 + 0x7e0;
                    break;
            }
            if (M2C_FIELD(temp_r2, s16 *, 4) > 1) {
                var_r4 = 0;
            } else {
                var_r4 = 1;
            }
            break;
        case 0x7d0:
            var_u32 = (u32) func_01ffdb08(M2C_FIELD(data_0215a04c, s16 *, 0xE));
            if (var_u32 != 0) {
                var_u32 = func_02027c48();
                if (var_u32 <= 0x3c) {
                    var_r4 = 2;
                } else if (var_u32 <= 0x78) {
                    var_r4 = 1;
                } else {
                    var_r4 = 0;
                }
            }
            break;
        case 0x13f0:
            if (func_020e2178() != 0) {
                var_r4 = 0;
            } else {
                var_r4 = 1;
            }
            break;
        case 0x13ed:
            temp_r2 = M2C_FIELD(data_0215a064, s16 *, 0x7a);
            temp_r0 = 0;
            if ((temp_r2 < 0) || (M2C_FIELD(data_021555f8, s16 *, 0x20) <= temp_r2)) {
                temp_r0 = 0;
            } else {
                temp_r0 = M2C_FIELD(data_021555f8 + (temp_r2 * 4), s32 *, 4);
            }
            var_r4 = (u16) func_020ae268(temp_r0);
            break;
        case 0x13ee:
            switch (M2C_FIELD(data_0215a064, s16 *, 0x58)) {
                case 2:
                    var_r4 = 0;
                    break;
                case 1:
                    var_r4 = 1;
                    break;
                case -1:
                    var_r4 = 2;
                    break;
                case 0:
                    var_r4 = 3;
                    break;
            }
            break;
        case 0x13f4:
            var_u32 = (u16) (func_02114a1c() >> 12);
            if (var_u32 == 0) {
                var_r4 = 0;
            } else if (var_u32 < 0xa) {
                var_r4 = 1;
            } else if (var_u32 < 0x46) {
                var_r4 = 2;
            } else {
                var_r4 = 3;
            }
            break;
        case 0x13ef:
            var_u32 = (u16) ((M2C_FIELD(M2C_FIELD(data_0215a044, s32 *, 4), s16 *, 2) + 0x3b) / 60);
            if (var_u32 == 0) {
                var_r4 = 0;
            } else if (var_u32 <= 0xa) {
                var_r4 = 1;
            } else if (var_u32 <= 0x14) {
                var_r4 = 2;
            } else if (var_u32 <= 0x1e) {
                var_r4 = 3;
            } else {
                var_r4 = 4;
            }
            break;
        case 0x13f1:
            temp_r0 = M2C_FIELD(data_0215a064, s16 *, 0x5c);
            if (temp_r0 == 0) {
                switch (M2C_FIELD(data_0215a064, s16 *, 0x58)) {
                    case -1:
                    case 0:
                        var_r4 = 1;
                        break;
                    default:
                        var_r4 = 0;
                        break;
                }
            } else {
                var_r4 = temp_r0 <= 6 ? 2 : 3;
            }
            break;
        case 5:
            switch (M2C_FIELD(data_0215a044, s16 *, 0)) {
                case 1:
                    var_r4 = 0;
                    break;
                case 2:
                    var_r4 = 1;
                    break;
                case 3:
                    var_r4 = 2;
                    break;
                case 4:
                    var_r4 = 3;
                    break;
                case 5:
                    var_r4 = 4;
                    break;
            }
            break;
        case 6:
            if (M2C_FIELD(data_0215a04c, s16 *, 6) == 1) {
                var_r4 = 0;
            } else {
                var_r4 = 1;
            }
            break;
        case 0x1770:
            temp = M2C_FIELD(data_0215a044, s32 *, 4);
            var_r4 = (u16) (M2C_FIELD(temp, s16 *, 0) == 6 ? M2C_FIELD(temp, s16 *, 0x20) : 0);
            break;
        case 0x1771:
            var_r4 = func_020e1a70();
            break;
        case 0x1772:
            p = (u32 *) ((u8 *) data_02159fc4 + 0x184);
            temp_a = M2C_FIELD(data_02159fc4, u32 *, 0x184);
            temp_b = p[1];
            temp_c = p[2];
            if (temp_a > temp_b && temp_a > temp_c) {
                var_r4 = 0;
            } else if (temp_b > temp_c) {
                var_r4 = 1;
            } else {
                var_r4 = 2;
            }
            break;
    }
    return var_r4;
}
