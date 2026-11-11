/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0208e084(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020e1fb8();                            /* extern */
s32 func_0210e4a0();                                /* extern */
M2C_UNK func_02116d20(void *, M2C_UNK);             /* extern */
M2C_UNK func_02116dec(void *, M2C_UNK);             /* extern */
extern void *data_0215a064;

void func_0211e4f0(void) {
    s32 temp_r0;

    func_02116dec(data_0215a064, 0x1C);
    func_02116d20(data_0215a064, 0);
    temp_r0 = func_0210e4a0();
    if (temp_r0 >= 0) {
        func_0208e084(temp_r0, 0x7F, 0);
    }
    func_020e1fb8();
    M2C_FIELD(data_0215a064, s16 *, 0x68) = 0;
}
