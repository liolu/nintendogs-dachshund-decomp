/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207f4bc();                            /* extern */
s32 func_02080c28();                                /* extern */
M2C_UNK func_02080c3c(s32);                         /* extern */
extern void **data_02153e6c;

void func_0207f670(u16 *arg0) {
    s32 temp_r4;
    void *temp_r2;

    temp_r4 = func_02080c28();
    temp_r2 = *data_02153e6c;
    if (arg0 != NULL) {
        *arg0 |= (u16) (1 << M2C_FIELD(temp_r2, s32 *, 0x6C));
    }
    M2C_FIELD(temp_r2, s32 *, 0x64) = 0;
    func_0207f4bc();
    func_02080c3c(temp_r4);
}
