/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_020c9990();                              /* extern */
M2C_UNK func_020ca4b0(void *, M2C_UNK *);           /* extern */
extern M2C_UNK func_ov008_0215a69c;

void *func_ov008_0215a65c(void) {
    void *temp_r0;

    temp_r0                         = func_020c9990();
    M2C_FIELD(temp_r0, s32 *, 0x3C) = 0;
    M2C_FIELD(temp_r0, s32 *, 0x40) = 0x2000;
    M2C_FIELD(temp_r0, s32 *, 0x44) = 0;
    func_020ca4b0(temp_r0, &func_ov008_0215a69c);
    M2C_FIELD(temp_r0, s32 *, 0x7C) = 0x6000;
    return temp_r0;
}
