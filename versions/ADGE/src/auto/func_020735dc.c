/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02071198(void *);                      /* extern */
M2C_UNK func_0207353c(void *);                      /* extern */
M2C_UNK func_02080070(M2C_UNK *);                   /* extern */
M2C_UNK func_020800e0(M2C_UNK *);                   /* extern */
M2C_UNK func_02087e90(void *);                      /* extern */
extern M2C_UNK data_021508d4;

void func_020735dc(void *arg0) {
    func_020800e0(&data_021508d4);
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x10C) << 0x1E) >> 0x1F) != 0) {
        func_02071198(arg0);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x10C) << 0x1F) >> 0x1F) != 0) {
        func_02087e90(arg0 + 0x5C);
    }
    func_0207353c(arg0);
    func_02080070(&data_021508d4);
}
