/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_01ffdb08(s16);                             /* extern */
s32 func_0200ccc4();                                /* extern */
s32 func_02022e04(void *, M2C_UNK);                 /* extern */
M2C_UNK func_0202706c(s32, M2C_UNK);                /* extern */
M2C_UNK func_02027484(s32, void *);                 /* extern */
s32 func_02028114(void *);                          /* extern */
M2C_UNK func_02029248(void *);                      /* extern */
s32 func_0203278c(void *, s16);                     /* extern */
M2C_UNK func_0203e5e8(void *, s32);                 /* extern */
M2C_UNK func_020a5828();                            /* extern */

s32 func_01ffdb08(s16);
s32 func_0200ccc4();
s32 func_02022e04(void *, M2C_UNK);
M2C_UNK func_0202706c(s32, M2C_UNK);
M2C_UNK func_02027484(s32, void *);
s32 func_02028114(void *);
M2C_UNK func_02029248(void *);
s32 func_0203278c(void *, s16);
M2C_UNK func_0203e5e8(void *, s32);
M2C_UNK func_020a5828();
void func_0200cbb4(void *arg0) {
    s16 var_r9;
    s32 temp_r0;
    s32 temp_r4;

    temp_r4 = func_0200ccc4();
    if ((M2C_FIELD(arg0, s16 *, 0xF0) != 0x6F) && (func_02022e04(arg0, 0x47) == 0) && (func_02022e04(arg0, 0x46) == 0) &&
        (func_02022e04(arg0, 0x4D) == 0)) {
        func_02029248(arg0);
    }
    var_r9 = 0;
    do {
        if (func_0203278c(arg0, var_r9) != 0) {
            temp_r0 = func_01ffdb08(var_r9);
            if (temp_r0 != 0) {
                func_0202706c(temp_r0, 5);
                func_02027484(temp_r0, arg0 + 0x2A0);
            }
        }
        var_r9 += 1;
    } while ((s32) var_r9 < 3);
    if (temp_r4 >= (s32) (func_02028114(arg0) * 0x10)) {
        return;
    }
    if (func_02022e04(arg0, 0x47) != 0) {
        func_02029248(arg0);
        func_020a5828();
    }
    func_0203e5e8(arg0, 0x47C);
}
