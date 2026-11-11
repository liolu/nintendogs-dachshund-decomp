/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_ov027_02159324(void);
s32 func_020711e0(s32, M2C_UNK *);
extern void *data_ov027_02159b34;
extern void func_ov027_02158294(void);

s32 func_ov027_0215872c(void) {
    void *v;

    if (func_ov027_02159324() == 0) {
        return 0;
    }
    v = data_ov027_02159b34;
    if (M2C_FIELD(v, s32 *, 0) != 0) {
        return 0;
    }
    if (func_020711e0(M2C_FIELD(v, u16 *, 0x106), (M2C_UNK *) func_ov027_02158294) != 0) {
        M2C_FIELD(data_ov027_02159b34, s32 *, 0) = 1;
        return 1;
    }
    return 0;
}
