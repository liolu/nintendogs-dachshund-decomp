/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02081130(s32);                         /* extern */
M2C_UNK func_02081480(s32);                         /* extern */
M2C_UNK func_02081494(s32);                         /* extern */
M2C_UNK func_020814a8(s32, M2C_UNK *);              /* extern */
M2C_UNK func_0208155c(s32, M2C_UNK *);              /* extern */
M2C_UNK func_020815fc(s32, s32);                    /* extern */
s32 func_020c79a0(s32, s32);                        /* extern */
extern M2C_UNK data_02149c58;
extern void *data_0215a02c;
extern M2C_UNK func_020faebc;
extern M2C_UNK func_020faef4;

void func_020fac90(s32 arg0) {
    void *temp_r4;

    temp_r4 = data_0215a02c;
    M2C_FIELD(temp_r4, s32 *, 0xC) =
        func_020c79a0(M2C_FIELD(temp_r4, s32 *, 8), *((M2C_UNK *) ((s8 *) &data_02149c58 + (arg0 * 4))));
    func_02081130(M2C_FIELD(temp_r4, s32 *, 0));
    func_020815fc(M2C_FIELD(temp_r4, s32 *, 0), M2C_FIELD(temp_r4, s32 *, 0xC));
    func_0208155c(M2C_FIELD(temp_r4, s32 *, 0), &func_020faef4);
    func_020814a8(M2C_FIELD(temp_r4, s32 *, 0), &func_020faebc);
    func_02081494(M2C_FIELD(temp_r4, s32 *, 0));
    func_02081480(M2C_FIELD(temp_r4, s32 *, 0));
}
