/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02063cb0(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
void *func_02063dd0();                              /* extern */
M2C_UNK func_020801f4(void *, M2C_UNK);             /* extern */

s32 func_02064500(void) {
    void *temp_r2;
    void *temp_r4;

    temp_r4 = func_02063dd0();
    if (func_02063cb0(2, 7, 8) != 0) {
        return 0;
    }
    func_020801f4(M2C_FIELD(temp_r4, void **, 4) + 0xC, 4);
    temp_r2 = M2C_FIELD(temp_r4, void **, 4);
    if (M2C_FIELD(temp_r2, s32 *, 0xC) == 1) {
        return 0;
    }
    func_020801f4(temp_r2 + 0x18E, 4);
    return (M2C_FIELD(M2C_FIELD(temp_r4, void **, 4), u16 *, 0x18E) + 0x1F) & ~0x1F;
}
