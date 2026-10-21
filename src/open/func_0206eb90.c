#include "m2c.h"
typedef struct {
    s32 quotient;
    s32 remainder;
} DivMod;

extern DivMod func_0205df50(s32 dividend, s32 divisor);
extern s32 func_02070154();
extern void func_0206cdc0();
s32 func_0206eb90(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_18;
    s32 temp;
    s32 temp2;

    temp = func_02070154(arg0, arg1, arg2);
    var_18 = M2C_FIELD(arg0, s32 *, 0x18);
    if (arg1 < M2C_FIELD(arg0, s32 *, 4)) {
        if (arg1 == M2C_FIELD(arg0, s32 *, 4) - 1) {
            temp2 = M2C_FIELD(arg0, s32 *, 0) % temp;
            if (temp2 != 0) {
                func_0206cdc0(arg2, arg1 * temp + var_18, temp2);
            } else {
                func_0206cdc0(arg2, arg1 * temp + var_18, temp);
            }
        } else {
            func_0206cdc0(arg2, arg1 * temp + var_18, temp);
        }
    } else {
        return 0;
    }
    return 1;
}
