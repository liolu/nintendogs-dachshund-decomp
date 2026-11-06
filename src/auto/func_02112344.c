/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_01ffda04(s16);                             /* extern */
s32 func_02033dbc(s32);                             /* extern */
s32 func_02033dc8(s32);                             /* extern */
M2C_UNK func_02108510(void *, s32, s32, s32);       /* extern */
M2C_UNK func_021085ec(void *, s32, s32, s32);       /* extern */
M2C_UNK func_02108740(void *);                      /* extern */
M2C_UNK func_0210fcd4(void *);                      /* extern */
M2C_UNK func_0210fd98(void *);                      /* extern */

void func_02112344(void *arg0, M2C_UNK (*arg1)(void *), void *arg2) {
    s32 temp_r5;

    temp_r5 = func_01ffda04(M2C_FIELD(arg0, s16 *, 0x98));
    func_02108740(arg0);
    arg1(arg0);
    if (M2C_FIELD(arg0, s32 *, 0x16C) & 7) {
        func_02108510(arg0, M2C_FIELD(arg2, s32 *, 0xC), M2C_FIELD(arg2, s32 *, 0x10), M2C_FIELD(arg2, s32 *, 0x14));
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
    if (func_02033dc8(temp_r5) != 0) {
        return;
    }
    if (func_02033dbc(temp_r5) != 0) {
        func_0210fcd4(arg0);
        return;
    }
    func_021085ec(arg0, M2C_FIELD(arg2, s32 *, 0), M2C_FIELD(arg2, s32 *, 4), M2C_FIELD(arg2, s32 *, 8));
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
    func_0210fd98(arg0);
}
