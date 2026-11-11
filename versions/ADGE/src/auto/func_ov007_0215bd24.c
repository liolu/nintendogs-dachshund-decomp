/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020c04f0(M2C_UNK *, M2C_UNK *);
extern void *data_ov007_0215e7e0;
extern void func_ov007_0215b8bc(void);

s32 func_ov007_0215bd24(void) {
    M2C_UNK sp0;

    if (M2C_FIELD(data_ov007_0215e7e0, s32 *, 0x28) == 1) {
        M2C_FIELD(data_ov007_0215e7e0, s32 *, 0x28) = 4;
        if (func_020c04f0((M2C_UNK *) func_ov007_0215b8bc, &sp0) == 0) {
            return 0;
        }
        M2C_FIELD(data_ov007_0215e7e0, s32 *, 0x2C) = 0;
        return 1;
    }
    return 0;
}
