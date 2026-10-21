/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207fb04();                            /* extern */
s32 func_0208120c();                                /* extern */
M2C_UNK func_02081220(s32);                         /* extern */
extern void **data_0215333c;

void func_0207fcb8(u16 *arg0) {
    s32 temp_r4;
    void *temp_r2;

    temp_r4 = func_0208120c();
    temp_r2 = *data_0215333c;
    if (arg0 != NULL) {
        *arg0 |= (u16) (1 << M2C_FIELD(temp_r2, s32 *, 0x6C));
    }
    M2C_FIELD(temp_r2, s32 *, 0x64) = 0;
    func_0207fb04();
    func_02081220(temp_r4);
}
