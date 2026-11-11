/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0206bab4(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_0206bb1c(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_0207cb18();                            /* extern */
M2C_UNK func_020d65a0();                            /* extern */
M2C_UNK func_020d6688();                            /* extern */
extern void *data_ov029_0215a540;

void func_ov029_0215a1e4(void) {
    void *temp_r0;
    void *temp_r0_2;

    temp_r0 = M2C_FIELD(data_ov029_0215a540, void **, 0x18);
    func_0206bb1c(M2C_FIELD(temp_r0, s32 *, 4), 0, M2C_FIELD(temp_r0, u16 *, 0) * 8);
    temp_r0_2 = M2C_FIELD(data_ov029_0215a540, void **, 0x1C);
    func_0206bab4(M2C_FIELD(temp_r0_2, s32 *, 4), 0, M2C_FIELD(temp_r0_2, u16 *, 0) * 8);
    func_020d6688();
    func_0207cb18();
    func_020d65a0();
}
