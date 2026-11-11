#include "m2c.h"
extern s8 *data_0215a064;
void func_02022900(M2C_UNK, s32 *);
extern u8 data_02135014[];
void func_02022810(M2C_UNK arg0) {
    s32 local[3];

    local[0] = (s32) M2C_FIELD(data_0215a064, s16 *, 0x86) << 12;
    local[1] = (s32) M2C_FIELD(data_0215a064, s16 *, 0x88) << 12;
    local[2] = -0x4000;
    func_02022900(arg0, local);
}
