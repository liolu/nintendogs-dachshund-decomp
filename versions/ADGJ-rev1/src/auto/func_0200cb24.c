/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_01ffda04(s16);                             /* extern */
s32 func_0200cc34();                                /* extern */
s32 func_02022dd0(void *, M2C_UNK);                 /* extern */
M2C_UNK func_02027044(s32, M2C_UNK);                /* extern */
M2C_UNK func_0202745c(s32, void *);                 /* extern */
s32 func_020280ec(void *);                          /* extern */
M2C_UNK func_02029204(void *);                      /* extern */
s32 func_02032690(void *, s16);                     /* extern */
M2C_UNK func_0203e2b8(void *, s32);                 /* extern */
M2C_UNK func_02105bd0();                            /* extern */

void func_0200cb24(void *arg0) {
    s16 var_r9;
    s32 temp_r0;
    s32 temp_r4;

    temp_r4 = func_0200cc34();
    if ((M2C_FIELD(arg0, s16 *, 0xF0) != 0x6F) && (func_02022dd0(arg0, 0x47) == 0) && (func_02022dd0(arg0, 0x46) == 0) &&
        (func_02022dd0(arg0, 0x4D) == 0)) {
        func_02029204(arg0);
    }
    var_r9 = 0;
    do {
        if (func_02032690(arg0, var_r9) != 0) {
            temp_r0 = func_01ffda04(var_r9);
            if (temp_r0 != 0) {
                func_02027044(temp_r0, 5);
                func_0202745c(temp_r0, arg0 + 0x2A0);
            }
        }
        var_r9 += 1;
    } while ((s32) var_r9 < 3);
    if (temp_r4 >= (s32) (func_020280ec(arg0) * 0x10)) {
        return;
    }
    if (func_02022dd0(arg0, 0x47) != 0) {
        func_02029204(arg0);
        func_02105bd0();
    }
    func_0203e2b8(arg0, 0x47B);
}
