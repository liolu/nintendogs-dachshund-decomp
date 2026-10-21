#include "m2c.h"
extern M2C_UNK data_02130da8;
s32 func_020cc580(void *arg0);
void func_020cc288(void *arg0);
void func_020cc168(void *arg0);
#pragma opt_propagation off
s32 func_020cbf5c(void *arg0) {
    s32 var_r4;
    s32 i;

    var_r4 = 0;
    M2C_FIELD(arg0, u16 *, 2) = 0;
    if ((s32) M2C_FIELD(arg0, s16 *, 0xE) > 0) {
        M2C_FIELD(arg0, s16 *, 0xE) = M2C_FIELD(arg0, s16 *, 0xE) - 1;
    }
    switch ((s32) M2C_FIELD(arg0, s16 *, 0)) {
    case 0:
        break;
    case 1:
        var_r4 = 0;
        switch (M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x30), u8 *, 0)) {
        case 1:
            var_r4 = func_020cc580(arg0);
            break;
        case 2:
            func_020cc288(arg0);
            break;
        case 3:
            func_020cc168(arg0);
            break;
        }
        break;
    case 2:
        break;
    case 3:
        if (M2C_FIELD(arg0, u16 *, 0x44) != 0) {
            M2C_FIELD(arg0, s16 *, 0) = 1;
            M2C_FIELD(arg0, u16 *, 8) = M2C_FIELD(arg0, u16 *, 8) & ~1;
            M2C_FIELD(arg0, u16 *, 8) = M2C_FIELD(arg0, u16 *, 8) & ~2;
            M2C_FIELD(arg0, s16 *, 2) = 2;
            i = 0;
            if (M2C_FIELD(arg0, s16 *, 0x58) > 0) {
                do {
                    ((s16 *) ((s8 *) arg0 + 0x5A))[i] = 0;
                    i++;
                } while (i < M2C_FIELD(arg0, s16 *, 0x58));
            }
            M2C_FIELD(arg0, s16 *, 0x58) = 0;
            M2C_FIELD(arg0, s16 *, 4) = (s16) M2C_FIELD(&data_02130da8, s16 *, 0xA);
        }
        break;
    case 4:
        M2C_FIELD(arg0, s16 *, 0xA) = M2C_FIELD(arg0, s16 *, 0xA) - 1;
        if ((s32) M2C_FIELD(arg0, s16 *, 0xA) <= 0) {
            M2C_FIELD(arg0, s16 *, 0) = 1;
        }
        break;
    case 5:
        if ((s32) M2C_FIELD(arg0, s16 *, 0x48) >= 0) {
            M2C_FIELD(arg0, s16 *, 0) = 1;
        }
        break;
    case 6:
        M2C_FIELD(arg0, s16 *, 0xA) = M2C_FIELD(arg0, s16 *, 0xA) - 1;
        if ((s32) M2C_FIELD(arg0, s16 *, 0xA) <= 0) {
            M2C_FIELD(arg0, s16 *, 0) = 1;
            M2C_FIELD(arg0, s16 *, 0x1A) = 0;
        }
        break;
    case 7:
        M2C_FIELD(arg0, s16 *, 0xA) = M2C_FIELD(arg0, s16 *, 0xA) - 1;
        if ((s32) M2C_FIELD(arg0, s16 *, 0xA) <= 0) {
            M2C_FIELD(arg0, s16 *, 0) = 1;
            M2C_FIELD(arg0, s16 *, 8) = 0;
            M2C_FIELD(arg0, s16 *, 0x1A) = 1;
            M2C_FIELD(arg0, s16 *, 0xC) = 0x1E;
            M2C_FIELD(arg0, s16 *, 4) = (s16) M2C_FIELD(&data_02130da8, s16 *, 0xA);
            M2C_FIELD(arg0, s16 *, 2) = 2;
            i = 0;
            if (M2C_FIELD(arg0, s16 *, 0x58) > 0) {
                do {
                    ((s16 *) ((s8 *) arg0 + 0x5A))[i] = 0;
                    i++;
                } while (i < M2C_FIELD(arg0, s16 *, 0x58));
            }
            M2C_FIELD(arg0, s16 *, 0x58) = 0;
        }
        break;
    }
    M2C_FIELD(arg0, u16 *, 0x44) = 0;
    return var_r4;
}
