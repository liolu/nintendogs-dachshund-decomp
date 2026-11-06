/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_021199f0(M2C_UNK *, u8);                   /* extern */
M2C_UNK func_02119ca4(s32, s32);                    /* extern */
extern M2C_UNK data_021490ac;
extern s32 data_021560c0;

void func_0211918c(s32 arg0, s32 arg1) {
    func_02119ca4(data_021560c0, func_021199f0(&data_021490ac, (u8) (arg1 + 1)));
}
