/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0206fde8(M2C_UNK, M2C_UNK);
M2C_UNK func_020beeb4(void);
void func_020c1028(M2C_UNK);

extern void *data_02156ec0;

s32 func_020c17a8(void) {
    if (func_020beeb4() == 0) {
        return 0;
    }
    if (M2C_FIELD(data_02156ec0, s32 *, 4) != 0) {
        return 0;
    }
    if (func_0206fde8((s32) M2C_FIELD(data_02156ec0, u16 *, 0x10A), (s32) func_020c1028) != 0) {
        M2C_FIELD(data_02156ec0, s32 *, 4) = 1;
        return 1;
    }
    return 0;
}
