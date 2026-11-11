/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02003d80(M2C_UNK);                     /* extern */
M2C_UNK func_020d6240(M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_020e13f4();                            /* extern */
M2C_UNK func_020f0ea0(void *);                      /* extern */
M2C_UNK func_020f1098(void *);                      /* extern */
extern M2C_UNK data_021445d0;
extern M2C_UNK data_021445e8;
extern M2C_UNK data_02144600;
extern M2C_UNK data_02144604;
extern void *data_02159e70;

void func_020d87ec(s32 *arg0) {
    *arg0                                   = 0;
    M2C_FIELD(data_02159e70, s32 *, 0xC838) = 1;
    M2C_FIELD(data_02159e70, s32 *, 0xC83C) = 1;
    func_020d6240(0xD, &data_021445d0, &data_021445e8, &data_02144600, &data_02144604);
    if (M2C_FIELD(data_02159e70, s32 *, 0xBC) == 3) {
        func_020f1098(((s8 *) arg0 + 0x130));
        func_020f1098(((s8 *) arg0 + 0x150));
        func_020f1098(((s8 *) arg0 + 0x170));
        func_020f1098(((s8 *) arg0 + 0x190));
        func_020f1098(((s8 *) arg0 + 0x1B0));
    } else {
        func_020f0ea0(((s8 *) arg0 + 0x130));
        func_020f0ea0(((s8 *) arg0 + 0x150));
        func_020f0ea0(((s8 *) arg0 + 0x170));
        func_020f0ea0(((s8 *) arg0 + 0x190));
        func_020f0ea0(((s8 *) arg0 + 0x1B0));
    }
    func_02003d80(0x10);
    func_020e13f4();
}
