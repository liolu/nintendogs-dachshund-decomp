/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_ov028_0215b7a4(void);
s32 func_0206fde8(s32, M2C_UNK *);
extern void *data_ov028_0215bfb4;
extern void func_ov028_0215a714(void);

s32 func_ov028_0215abac(void) {
    void *v;

    if (func_ov028_0215b7a4() == 0) {
        return 0;
    }
    v = data_ov028_0215bfb4;
    if (M2C_FIELD(v, s32 *, 0) != 0) {
        return 0;
    }
    if (func_0206fde8(M2C_FIELD(v, u16 *, 0x106), (M2C_UNK *) func_ov028_0215a714) != 0) {
        M2C_FIELD(data_ov028_0215bfb4, s32 *, 0) = 1;
        return 1;
    }
    return 0;
}
