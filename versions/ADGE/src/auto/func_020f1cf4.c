/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020eb9a8(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_020eb9fc(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020f1098(void *);                      /* extern */
extern M2C_UNK data_02146f44;
extern M2C_UNK data_02146f54;
extern void *data_02159e70;

void func_020f1cf4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    if (M2C_FIELD(data_02159e70, s32 *, 0xA8) == 7) {
        func_020f1098(arg0 + 0xC4);
        func_020f1098(arg0 + 0xE4);
        func_020f1098(arg0 + 0x104);
    }
    M2C_FIELD(arg0, s32 *, 4) = 0x3C;
    if (M2C_FIELD(data_02159e70, s32 *, 0xA8) == 7) {
        func_020eb9fc(0, 0, 1);
    }
    M2C_FIELD(arg0, s32 *, 8) = 0x4C;
    if (M2C_FIELD(data_02159e70, s32 *, 0xA8) != 7) {
        return;
    }
    func_020eb9a8(0, &data_02146f54, 1);
    func_020eb9a8(0, &data_02146f44, 0);
}
