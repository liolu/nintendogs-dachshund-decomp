/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02063db4();                                /* extern */
void *func_02063dd0();                              /* extern */
M2C_UNK func_020801f4(void *, M2C_UNK);             /* extern */

u16 func_02064324(void) {
    u16 temp_r0;
    void *temp_r2;
    void *temp_r4;

    temp_r4 = func_02063dd0();
    if (func_02063db4() != 0) {
        return 0U;
    }
    func_020801f4(M2C_FIELD(temp_r4, void **, 4), 2);
    temp_r2 = M2C_FIELD(temp_r4, void **, 4);
    temp_r0 = M2C_FIELD(temp_r2, u16 *, 0);
    switch (temp_r0) {                              /* irregular */
        case 9:
            func_020801f4(temp_r2 + 0x17E, 2);
            if (M2C_FIELD(M2C_FIELD(temp_r4, void **, 4), u16 *, 0x17E) == 0) {
                return 0U;
            }
        case 10:
        case 11:
            func_020801f4(M2C_FIELD(temp_r4, void **, 4) + 0xB8, 2);
            return M2C_FIELD(M2C_FIELD(temp_r4, void **, 4), u16 *, 0xB8);
        default:
            return 0U;
    }
}
