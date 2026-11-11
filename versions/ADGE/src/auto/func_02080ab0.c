/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207ed9c(M2C_UNK);                     /* extern */
M2C_UNK func_0207ef2c(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_0208095c(M2C_UNK);                     /* extern */
extern u16 data_02154154;
extern s32 data_02154158;
extern M2C_UNK data_0215415c;
extern M2C_UNK func_02080a28;

void func_02080ab0(void) {
    if (data_02154154 != 0) {
        return;
    }
    data_02154154 = 1;
    func_0208095c(0);
    M2C_FIELD(&data_0215415c, s32 *, 0) = 0;
    M2C_FIELD(&data_0215415c, s32 *, 4) = 0;
    *(s16 *) 0x04000102                 = 0;
    *(s16 *) 0x04000100                 = 0;
    *(s16 *) 0x04000102                 = 0xC1;
    func_0207ef2c(8, &func_02080a28);
    func_0207ed9c(8);
    data_02154158 = 0;
}
