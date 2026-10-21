#include "m2c.h"
M2C_UNK func_02027644(void *, s32);                 /* extern */
s32 func_02028114(s32);                             /* extern */
s32 func_02028714(s32, M2C_UNK, M2C_UNK);           /* extern */
extern void func_0202507c();
M2C_UNK func_0202f9a0(s32);                         /* extern */
void func_02026b9c(s32);                            /* extern */
void func_02026c14(s32);                            /* extern */
s32 func_0203535c();                                /* extern */
s32 func_020354a8(s32, M2C_UNK);                    /* extern */
s32 func_0203560c(s32, M2C_UNK);                    /* extern */
M2C_UNK func_020358c8(s32);                         /* extern */
M2C_UNK func_02035fd8(s32);                         /* extern */
void func_0203e5ac(void *, s32, s16);               /* extern */
M2C_UNK func_02037130(s32, M2C_UNK);                /* extern */
M2C_UNK func_02039128(s32);                         /* extern */
s32 func_02053154(s32);                             /* extern */
void *func_02036258();                              /* extern */
M2C_UNK func_02027644(void *, s32);
s32 func_02028114(s32);
s32 func_02028714(s32, M2C_UNK, M2C_UNK);
M2C_UNK func_0202f9a0(s32);
void func_02026b9c(s32);
void func_02026c14(s32);
s32 func_0203535c();
s32 func_020354a8(s32, M2C_UNK);
s32 func_0203560c(s32, M2C_UNK);
M2C_UNK func_020358c8(s32);
M2C_UNK func_02035fd8(s32);
void func_0203e5ac(void *, s32, s16);
M2C_UNK func_02037130(s32, M2C_UNK);
M2C_UNK func_02039128(s32);
s32 func_02053154(s32);
void *func_02036258();
s32 func_0204b3c8(s32 arg0) {
    s32 temp_r4;
    s16 temp_r1;
    s32 temp_r0;
    s32 var_r0;

    temp_r4 = (s32) func_02036258(arg0);
    if (temp_r4 != 0) {
        func_02039128(arg0);
        func_02027644((void *) temp_r4, arg0 + 0x278);
        func_02037130(arg0, 0x302);
    }
    temp_r1 = *(s16 *)(arg0 + 0x152);
    switch (temp_r1) {
        case 0x167:
            temp_r0 = func_02028114(arg0);
            func_0202507c(arg0, 9, 0x11, (s32)(((s64)temp_r0 * -630 + 0x800) >> 12));
            if (func_0203535c(arg0) != 0) {
                func_0203e5ac((void *) arg0, 0, 0x17e);
                func_02026b9c(arg0);
            }
            break;
        case 0x17e:
            if (func_0203535c(arg0) != 0) {
                func_0203e5ac((void *) arg0, 0, 0x17f);
                func_02026c14(arg0);
            }
            break;
    }
    func_020358c8(arg0);
    if (func_02028714(arg0, 0, 1) != 0) {
        var_r0 = 1;
    } else if (func_0203560c(arg0, 0) != 0) {
        var_r0 = 1;
    } else if (func_020354a8(arg0, 0) != 0) {
        var_r0 = 1;
    } else if (temp_r4 != 0) {
        var_r0 = 0;
    } else {
        func_0202f9a0(arg0);
        func_02035fd8(arg0);
        var_r0 = 1;
    }
    if (var_r0 == 0) {
        var_r0 = func_02053154(arg0);
    }
    return var_r0;
}
