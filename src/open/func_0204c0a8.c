#include "m2c.h"
M2C_UNK func_0204dd00(M2C_UNK, s32, M2C_UNK, M2C_UNK, s32); /* extern */
extern void func_02025850();
void func_02035fcc(s32, s16);                        /* extern */
void func_0202706c(M2C_UNK, s16);                    /* extern */
M2C_UNK func_020358c8(s32);                          /* extern */
s32 func_02028714(s32, M2C_UNK, M2C_UNK);            /* extern */
s32 func_0203560c(s32, M2C_UNK);                     /* extern */
s32 func_020354a8(s32, M2C_UNK);                     /* extern */
M2C_UNK func_0202f9a0(s32);                          /* extern */
M2C_UNK func_02035fd8(s32);                          /* extern */
M2C_UNK func_02054108(M2C_UNK);                      /* extern */
void func_0203e5e8(s32, s32);                        /* extern */
extern u32 *data_0214da84;
s32 func_0204c0a8(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r1;
    s32 var_r3;
    s32 var_r0;

    if (arg1 != 0 && *(s16 *) (arg1 + 0xea) == 0x27f) {
        func_02025850(arg0);
        var_r3 = 2;
        var_r0 = 1;
    } else {
        var_r3 = 0;
        var_r0 = 0;
    }
    func_0204dd00(arg0, arg1, arg2, var_r3, var_r0);
    if (arg1 != 0 && *(u16 *) (arg0 + 0xfc) == 0x1e) {
        temp_r1 = *(s8 *) (arg0 + 0x88);
        func_02035fcc(arg1, temp_r1);
        func_0202706c(arg1, 8);
    }
    func_020358c8(arg0);
    if (func_02028714(arg0, 0, 1) != 0) {
        var_r0 = 1;
    } else if (func_0203560c(arg0, 0) != 0) {
        var_r0 = 1;
    } else if (func_020354a8(arg0, 0) != 0) {
        var_r0 = 1;
    } else if (arg1 != 0) {
        var_r0 = 0;
    } else {
        func_0202f9a0(arg0);
        func_02035fd8(arg0);
        var_r0 = 1;
    }
    if (var_r0 == 0) {
        var_r0 = func_02054108(arg0);
        if (var_r0 == 0) {
            var_r0 = *(s16 *) (arg0 + 0xfa);
            if (var_r0 == 0x19) {
                func_0203e5e8(arg0, 0x27a);
                *(s16 *) (arg0 + 0xfa) = 0;
                return 0;
            }
            if (var_r0 == 0x1a) {
                func_0203e5e8(arg0, 0x27b);
                *(s16 *) (arg0 + 0xfa) = 0;
                return 0;
            }
        }
    }
    return var_r0;
}
