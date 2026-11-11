/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0206cbf8(s32, s32, s32);
M2C_UNK func_020d6a50();
extern void *data_ov029_0215a540;

void func_ov029_0215a248(void) {
    volatile s32 sp0;
    volatile s32 sp4;
    void *temp_r3;
    void *temp_r3_2;

    temp_r3                      = *(void **) ((u8 *) data_ov029_0215a540 + 0x18);
    M2C_FIELD(temp_r3, s16 *, 2) = 0;
    sp0                          = 0xC0;
    func_0206cbf8(sp0, M2C_FIELD(temp_r3, s32 *, 4), M2C_FIELD(temp_r3, u16 *, 0) * 8);
    temp_r3_2                      = *(void **) ((u8 *) data_ov029_0215a540 + 0x1C);
    M2C_FIELD(temp_r3_2, s16 *, 2) = 0;
    sp4                            = 0xC0;
    func_0206cbf8(sp4, M2C_FIELD(temp_r3_2, s32 *, 4), M2C_FIELD(temp_r3_2, u16 *, 0) * 8);
    func_020d6a50();
}
