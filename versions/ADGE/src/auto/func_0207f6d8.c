/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207f4bc();                            /* extern */
M2C_UNK func_0207f5fc(void *);                      /* extern */
M2C_UNK func_0207f9bc(void *);                      /* extern */
M2C_UNK func_02080020(void *);                      /* extern */
M2C_UNK func_02080c28();                            /* extern */
M2C_UNK func_02080ca4();                            /* extern */
extern void **data_02153e6c;
extern M2C_UNK data_02153e8c;

void func_0207f6d8(void) {
    void *temp_r4;

    func_02080c28();
    temp_r4 = *data_02153e6c;
    func_02080020(temp_r4);
    func_0207f9bc(temp_r4);
    *((M2C_UNK *) ((s8 *) &data_02153e8c + (M2C_FIELD(temp_r4, s32 *, 0x6C) * 4))) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x64)                                                = 2;
    func_0207f5fc(temp_r4 + 0x90);
    func_0207f4bc();
    func_02080ca4();
}
