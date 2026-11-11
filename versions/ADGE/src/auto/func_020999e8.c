/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207f5c8(M2C_UNK *);                   /* extern */
M2C_UNK func_0207f734(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK *, s32, s32); /* extern */
M2C_UNK func_0207ff20(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK data_02154f08;
extern s32 data_02154f0c;
extern M2C_UNK data_02154f10;
extern M2C_UNK data_02154f14;
extern M2C_UNK data_02154f18;
extern M2C_UNK data_02154f2c;
extern M2C_UNK data_02154f40;
extern M2C_UNK data_02154f54;
extern M2C_UNK data_021555e8;
extern M2C_UNK func_02099aa4;

void func_020999e8(void) {
    if (data_02154f0c != 0) {
        return;
    }
    func_0207ff20(&data_02154f40, &data_02154f14, 1);
    func_0207ff20(&data_02154f2c, &data_02154f10, 1);
    func_0207ff20(&data_02154f18, &data_02154f08, 1);
    func_0207f734(&data_02154f54, &func_02099aa4, 0, &data_021555e8, 0x600, 0x18);
    func_0207f5c8(&data_02154f54);
    data_02154f0c = 1;
}
