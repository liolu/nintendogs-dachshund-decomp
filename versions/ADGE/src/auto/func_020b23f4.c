/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_01ffdb08(s16);                             /* extern */
s32 func_02033eb8(s32);                             /* extern */
s32 func_02033ec4(s32);                             /* extern */
M2C_UNK func_020a8190(void *, s32, s32, s32);       /* extern */
M2C_UNK func_020a826c(void *, s32, s32, s32);       /* extern */
M2C_UNK func_020a83c0(void *);                      /* extern */
M2C_UNK func_020afb00(void *);                      /* extern */
M2C_UNK func_020afbc4(void *);                      /* extern */

void func_020b23f4(void *arg0, M2C_UNK (*arg1)(void *), void *arg2) {
    s32 temp_r5;

    temp_r5 = func_01ffdb08(M2C_FIELD(arg0, s16 *, 0x98));
    func_020a83c0(arg0);
    arg1(arg0);
    if (M2C_FIELD(arg0, s32 *, 0x16C) & 7) {
        func_020a8190(arg0, M2C_FIELD(arg2, s32 *, 0xC), M2C_FIELD(arg2, s32 *, 0x10), M2C_FIELD(arg2, s32 *, 0x14));
        if ((s32) M2C_FIELD(arg0, s32 *, 0xB0) > 0x99A) {
            M2C_FIELD(arg0, s32 *, 0xB0) = 0x99A;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0xB4) > 0x99A) {
            M2C_FIELD(arg0, s32 *, 0xB4) = 0x99A;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0xB8) > 0x99A) {
            M2C_FIELD(arg0, s32 *, 0xB8) = 0x99A;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0xB0) < -2458) {
            M2C_FIELD(arg0, s32 *, 0xB0) = -0x99A;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0xB4) < -2458) {
            M2C_FIELD(arg0, s32 *, 0xB4) = -0x99A;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0xB8) < -2458) {
            M2C_FIELD(arg0, s32 *, 0xB8) = -0x99A;
        }
        return;
    }
    if (func_02033ec4(temp_r5) != 0) {
        return;
    }
    if (func_02033eb8(temp_r5) != 0) {
        func_020afb00(arg0);
        return;
    }
    func_020a826c(arg0, M2C_FIELD(arg2, s32 *, 0), M2C_FIELD(arg2, s32 *, 4), M2C_FIELD(arg2, s32 *, 8));
    if ((s32) M2C_FIELD(arg0, s32 *, 0xB0) > 0x99A) {
        M2C_FIELD(arg0, s32 *, 0xB0) = 0x99A;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xB4) > 0x99A) {
        M2C_FIELD(arg0, s32 *, 0xB4) = 0x99A;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xB8) > 0x99A) {
        M2C_FIELD(arg0, s32 *, 0xB8) = 0x99A;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xB0) < -2458) {
        M2C_FIELD(arg0, s32 *, 0xB0) = -0x99A;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xB4) < -2458) {
        M2C_FIELD(arg0, s32 *, 0xB4) = -0x99A;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xB8) < -2458) {
        M2C_FIELD(arg0, s32 *, 0xB8) = -0x99A;
    }
    func_020afbc4(arg0);
}
