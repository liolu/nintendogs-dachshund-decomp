/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207e40c(s32, s32);                    /* extern */
extern void *data_021538b4;

void func_020b5288(void) {
    if (M2C_FIELD(data_021538b4, s32 *, 0) != 0) {
        return;
    }
    func_0207e40c(M2C_FIELD(data_021538b4, s32 *, 4), 0x434E535F);
    M2C_FIELD(data_021538b4, s32 *, 0) = 1;
}
