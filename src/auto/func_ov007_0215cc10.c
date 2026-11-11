/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov007_0215badc(void);
s32 func_0206fde8(s32, M2C_UNK *);
extern void *data_ov007_0215e7fc;
extern void func_ov007_0215c54c(void);

s32 func_ov007_0215cc10(void) {
    void *v;

    if (func_ov007_0215badc() == 0) {
        return 0;
    }
    v = data_ov007_0215e7fc;
    if (M2C_FIELD(v, s32 *, 4) != 0) {
        return 0;
    }
    if (func_0206fde8(M2C_FIELD(v, u16 *, 0x10A), (M2C_UNK *) func_ov007_0215c54c) != 0) {
        M2C_FIELD(data_ov007_0215e7fc, s32 *, 4) = 1;
        return 1;
    }
    return 0;
}
