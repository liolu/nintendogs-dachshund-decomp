/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207fb04();                            /* extern */
M2C_UNK func_0207fc44(void *);                      /* extern */
M2C_UNK func_02080004(void *);                      /* extern */
M2C_UNK func_02080668(void *);                      /* extern */
M2C_UNK func_0208120c();                            /* extern */
M2C_UNK func_02081288();                            /* extern */
extern void **data_0215333c;
extern M2C_UNK data_0215335c;

void func_0207fd20(void) {
    void *temp_r4;

    func_0208120c();
    temp_r4 = *data_0215333c;
    func_02080668(temp_r4);
    func_02080004(temp_r4);
    *((M2C_UNK *) ((s8 *) &data_0215335c + (M2C_FIELD(temp_r4, s32 *, 0x6C) * 4))) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x64)                                                = 2;
    func_0207fc44(temp_r4 + 0x90);
    func_0207fb04();
    func_02081288();
}
