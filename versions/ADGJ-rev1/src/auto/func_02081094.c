/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207f3e4(M2C_UNK);                     /* extern */
M2C_UNK func_0207f574(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_02080f40(M2C_UNK);                     /* extern */
extern u16 data_02153624;
extern s32 data_02153628;
extern M2C_UNK data_0215362c;
extern M2C_UNK func_0208100c;

void func_02081094(void) {
    if (data_02153624 != 0) {
        return;
    }
    data_02153624 = 1;
    func_02080f40(0);
    M2C_FIELD(&data_0215362c, s32 *, 0) = 0;
    M2C_FIELD(&data_0215362c, s32 *, 4) = 0;
    *(s16 *) 0x04000102                 = 0;
    *(s16 *) 0x04000100                 = 0;
    *(s16 *) 0x04000102                 = 0xC1;
    func_0207f574(8, &func_0208100c);
    func_0207f3e4(8);
    data_02153628 = 0;
}
