#include "m2c.h"
s32 func_0203535c(void *);
void func_02027f30(void *, s32, s32);
void func_ov003_0218c730(void *);
s32 func_0203547c(void *, s32);
s32 func_02027f68(void *, s32);
s32 func_020093f8(void *, s32, s32, s32, s32);
s32 func_02028120(void *);
void func_0200925c(void *, s32, s32);
void func_020138fc(void *arg0) {
    s32 v;
    s32 flag;

    if (func_0203535c(arg0) != 0) {
        M2C_FIELD(arg0, s16 *, 0x104) = 0;
        func_02027f30(arg0, 2, 0);
        func_ov003_0218c730(arg0);
        flag = 1;
    } else {
        flag = 0;
    }
    if (M2C_FIELD(arg0, s16 *, 0x152) == 0x113) {
        if (func_0203547c(arg0, 0x13) != 0) {
            if ((func_02027f68(arg0, 7) >> 9) < 5) {
                v = func_020093f8(arg0, 0x3E, 2, 0, 0);
                if (v != -1) {
                    M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x8FC + v * 4), s32 *, 0x44) = (s32) (((s64) func_02028120(arg0) * 0xE66 + 0x800) >> 12);
                }
            }
        }
    }
    if ((flag == 0) && (func_0203547c(arg0, 0x45) == 0)) {
        return;
    }
    func_0200925c(arg0, 0x3E, 2);
}
