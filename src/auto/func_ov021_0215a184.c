#include "m2c.h"

extern M2C_UNK data_ov021_0215a740;
M2C_UNK func_0206bb1c(void *, s32, s32);

void func_ov021_0215a184(void) {
    u8 *a = *(u8 **) &data_ov021_0215a740;
    u8 *b = *(u8 **) (a + 8);
    func_0206bb1c(*(void **) (b + 4), 0, *(u16 *) b << 3);
}
