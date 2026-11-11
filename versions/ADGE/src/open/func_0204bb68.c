#include "m2c.h"
void func_020358c8(M2C_UNK);
s32 func_02028714(M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_0203560c(M2C_UNK, M2C_UNK);
s32 func_020354a8(M2C_UNK, M2C_UNK);
void func_0203e5e8(M2C_UNK, M2C_UNK);
void func_02035fd8(M2C_UNK);
s32 func_0202f9a0(M2C_UNK);
extern u32 *data_0214da84;
s32 func_0204bb68(M2C_UNK arg0, void *arg1, void *arg2) {
    s32 var;

    func_020358c8(arg0);
    if (func_02028714(arg0, 0, 1) != 0) {
        return 1;
    }
    if (func_0203560c(arg0, 0) != 0) {
        return 1;
    }
    if (func_020354a8(arg0, 0) != 0) {
        return 1;
    }
    do {
        if (M2C_FIELD(arg0, s16 *, 0xFA) == 0x1B) {
            func_0203e5e8(arg0, 0x281);
            M2C_FIELD(arg0, s16 *, 0xFA) = 0;
            break;
        }
        if (arg1 != NULL) {
            if (arg2 == NULL) {
                break;
            }
            if ((M2C_FIELD(arg1, s16 *, 0xEA) >= 0x278) && (M2C_FIELD(arg1, s16 *, 0xEA) <= 0x27B)) {
                var = 1;
            } else {
                var = 0;
            }
            if (var != 0) {
                break;
            }
        }
        func_02035fd8(arg0);
        return func_0202f9a0(arg0);
    } while (0);
    return 0;
}
