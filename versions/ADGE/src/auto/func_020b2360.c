/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_01ffdb08(s16);                             /* extern */
s32 func_02033eb8(s32);                             /* extern */
s32 func_02044980(M2C_UNK);                         /* extern */
M2C_UNK func_020a83c0(void *);                      /* extern */
M2C_UNK func_020afa9c(void *, M2C_UNK);             /* extern */
M2C_UNK func_020afbc4(void *);                      /* extern */
s32 func_021144f0(s32, void *, s32);                /* extern */

void func_020b2360(void *arg0, M2C_UNK arg1) {
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r5;

    temp_r5 = func_01ffdb08(M2C_FIELD(arg0, s16 *, 0x98));
    temp_r4 = func_02044980(0);
    func_020a83c0(arg0);
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x120);
    if (func_021144f0(temp_r4, arg0 + 0xBC, (temp_r3 >> 1) + (temp_r3 >> 3)) != 0) {
        func_020afa9c(arg0, arg1);
        return;
    }
    if (func_02033eb8(temp_r5) != 0) {
        return;
    }
    func_020afbc4(arg0);
}
