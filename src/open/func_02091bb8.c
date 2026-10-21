#include "m2c.h"
extern s8 data_0215422c[];
extern u8 data_0212942a[];
extern u8 data_0212bae8[];
s32 func_0208ee68();
s32 func_02091bb8(void) {
    u16 v = M2C_FIELD(data_0215422c, u16 *, 0x18);

    if (v != 0x18) {
        return M2C_FIELD(data_0212942a, u8 *, v * 6);
    }
    return M2C_FIELD(data_0212bae8, u8 *, func_0208ee68());
}
