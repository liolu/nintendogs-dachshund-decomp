/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_01ffdb08(M2C_UNK);                         /* extern */
M2C_UNK func_0202706c(s32, M2C_UNK);                /* extern */
M2C_UNK func_020274d8(s32, s16);                    /* extern */
s32 func_02034208();                                /* extern */
M2C_UNK func_020afc54(void *);                      /* extern */
M2C_UNK func_02114310(s16);                         /* extern */

void func_020fa978(void *arg0, M2C_UNK arg1) {
    s32 temp_r4;

    temp_r4 = func_01ffdb08(arg1);
    if (func_02034208() == 0) {
        return;
    }
    func_0202706c(temp_r4, 0x23);
    func_020274d8(temp_r4, M2C_FIELD(arg0, s16 *, 0x94));
    func_02114310(M2C_FIELD(arg0, s16 *, 0x94));
    func_020afc54(arg0);
}
