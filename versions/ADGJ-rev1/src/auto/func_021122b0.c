/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_01ffda04(s16);                             /* extern */
s32 func_02033dbc(s32);                             /* extern */
s32 func_02044644(M2C_UNK);                         /* extern */
s32 func_02092d80(s32, void *, s32);                /* extern */
M2C_UNK func_02108740(void *);                      /* extern */
M2C_UNK func_0210fc70(void *, M2C_UNK);             /* extern */
M2C_UNK func_0210fd98(void *);                      /* extern */

void func_021122b0(void *arg0, M2C_UNK arg1) {
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r5;

    temp_r5 = func_01ffda04(M2C_FIELD(arg0, s16 *, 0x98));
    temp_r4 = func_02044644(0);
    func_02108740(arg0);
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x120);
    if (func_02092d80(temp_r4, arg0 + 0xBC, (temp_r3 >> 1) + (temp_r3 >> 3)) != 0) {
        func_0210fc70(arg0, arg1);
        return;
    }
    if (func_02033dbc(temp_r5) != 0) {
        return;
    }
    func_0210fd98(arg0);
}
