/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200348c(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02007128(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_02066c68(s32);                         /* extern */
s16 func_0207f624();                                /* extern */
M2C_UNK func_020cbac4(M2C_UNK);                     /* extern */
extern s16 data_02154c40;
extern s32 data_02154c44;
extern M2C_UNK data_02154c4c;
extern M2C_UNK data_02154c58;

void func_020cba58(M2C_UNK arg0) {
    s16 temp_r4;

    temp_r4 = func_0207f624();
    func_02007128(&data_02154c58, &data_02154c4c);
    data_02154c40 = temp_r4;
    func_02066c68(0x1202);
    func_020cbac4(arg0);
    data_02154c44 = func_0200348c(arg0, 0x14C00);
}
