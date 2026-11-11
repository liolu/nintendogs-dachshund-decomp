/* compiler: 1.2/sp2p3  */
#include "m2c.h"

u16 func_02063f4c();                                /* extern */
s32 func_02080c28();                                /* extern */
M2C_UNK func_02080c3c(s32);                         /* extern */
extern u16 data_0215566c;
extern s32 data_02155678;
extern s32 data_0215567c;

s32 func_020c0678(u16 *arg0) {
    s32 temp_r4;

    temp_r4 = func_02080c28();
    if ((data_0215567c == 1) || (data_0215566c == 1)) {
        *arg0 = 0x17;
        return 0;
    }
    *arg0 = func_02063f4c();
    if (*arg0 == 0) {
        data_02155678 = 0;
        func_02080c3c(temp_r4);
        return 1;
    }
    func_02080c3c(temp_r4);
    return 0;
}
