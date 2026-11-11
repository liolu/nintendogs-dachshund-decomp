/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020848a8(s32);                         /* extern */
M2C_UNK func_02084bf8(s32);                         /* extern */
M2C_UNK func_02084c0c(s32);                         /* extern */
M2C_UNK func_02084c20(s32, M2C_UNK *);              /* extern */
M2C_UNK func_02084cd4(s32, M2C_UNK *);              /* extern */
M2C_UNK func_02084d74(s32, s32);                    /* extern */
s32 func_020c23f8(s32, s32);                        /* extern */
extern M2C_UNK data_02144820;
extern void *data_02154c9c;
extern M2C_UNK func_020d6ecc;
extern M2C_UNK func_020d6f04;

void func_020d6ca0(s32 arg0) {
    void *temp_r4;

    temp_r4 = data_02154c9c;
    M2C_FIELD(temp_r4, s32 *, 0xC) =
        func_020c23f8(M2C_FIELD(temp_r4, s32 *, 8), *((M2C_UNK *) ((s8 *) &data_02144820 + (arg0 * 4))));
    func_020848a8(M2C_FIELD(temp_r4, s32 *, 0));
    func_02084d74(M2C_FIELD(temp_r4, s32 *, 0), M2C_FIELD(temp_r4, s32 *, 0xC));
    func_02084cd4(M2C_FIELD(temp_r4, s32 *, 0), &func_020d6f04);
    func_02084c20(M2C_FIELD(temp_r4, s32 *, 0), &func_020d6ecc);
    func_02084c0c(M2C_FIELD(temp_r4, s32 *, 0));
    func_02084bf8(M2C_FIELD(temp_r4, s32 *, 0));
}
