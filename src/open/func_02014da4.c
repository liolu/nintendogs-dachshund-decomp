#include "m2c.h"

extern char data_0214da84[];

void *func_020350fc(void *);
void func_0203e5ac(void *, s32, s32);
s32 func_ov003_02196338(void *);
s32 func_02028714(void *, s32, s32);
s32 func_0202c9f0(void *, s32);
void func_0202fa6c(void *, s32);
s32 func_02027f68(void *, s32);
void func_02027f30(void *, s32, s32);
void func_0203e5e8(void *, s32);

void func_02014da4(void *arg0, s32 arg1) {
    s16 temp_r0_2;
    s32 var_r0;
    s32 var_r0_2;
    signed char temp_r0_3;
    s8 temp_r0_4;
    void *temp_r0;
    u32 *temp_r3;
    u32 temp_r2;
    u16 temp_r0_5;
    s32 n;
    u8 *p;

    (*(u16 *) ((u8 *) arg0 + 0x108))++;
    temp_r0 = func_020350fc(arg0);
    if (temp_r0 != NULL) {
        func_0203e5ac(arg0, 2, 1);
        temp_r0_2 = M2C_FIELD(temp_r0, s16 *, 0x90);
        switch (temp_r0_2) {
            case 4:
                temp_r0_3 = M2C_FIELD(arg0, s8 *, 0x8B);
                if (temp_r0_3 != 5) {
                    if (temp_r0_3 != 4) {
                        M2C_FIELD(arg0, s32 *, 0x948) = 1;
                    }
                }
                break;
            case 7:
                temp_r0_4 = M2C_FIELD(arg0, s8 *, 0x8B);
                if ((temp_r0_4 != 5) && (temp_r0_4 != 4)) {
                    M2C_FIELD(arg0, s32 *, 0x948) = 8;
                }
                break;
        }
        var_r0 = func_ov003_02196338(arg0);
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        var_r0_2 = 1;
    } else if (func_02028714(arg0, arg1, 0) != 0) {
        var_r0_2 = 1;
    } else if (func_0202c9f0(arg0, (s16) arg1) != 0) {
        var_r0_2 = 1;
    } else {
        var_r0_2 = 0;
    }
    if (var_r0_2 != 0) {
        M2C_FIELD(arg0, u16 *, 0x108) = 0;
        return;
    }
    if (M2C_FIELD(arg0, u16 *, 0xFC) > 0x12C) {
        temp_r3 = *(u32 **) data_0214da84;
        temp_r2 = *temp_r3 * 0x10DCD + 1;
        temp_r0_5 = (u16) ((u16) temp_r2 * 100u >> 16);
        *temp_r3 = temp_r2;
        if (temp_r0_5 == 0) {
            func_0202fa6c(arg0, (s16) arg1);
            return;
        }
    }
    n = func_02027f68(arg0, 0);
    p = (u8 *) arg0 + 0x100;
    if ((s32) M2C_FIELD(p, u16 *, 8) > (0x2710 - n) >> 2) {
        M2C_FIELD(p, u16 *, 8) = 0;
        func_02027f30(arg0, 0, 0x2710);
        func_0203e5e8(arg0, (s16) (arg1 + 0x4C));
    }
}
