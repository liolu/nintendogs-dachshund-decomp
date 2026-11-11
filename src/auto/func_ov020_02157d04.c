#include "m2c.h"

extern M2C_UNK data_ov020_021582c0;
M2C_UNK func_0206cf14(void *, s32, s32);

void func_ov020_02157d04(void) {
    u8 *a = *(u8 **) &data_ov020_021582c0;
    u8 *b = *(u8 **) (a + 8);
    func_0206cf14(*(void **) (b + 4), 0, *(u16 *) b << 3);
}
