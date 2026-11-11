/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02081c64(M2C_UNK);

void func_02081310(s32 arg0, s32 arg1) {
    void *var_r5;

    *(u16 *) 0x04000060          = (*(u16 *) 0x04000060 & ~0x3000) | 8;
    M2C_FIELD(arg0, s32 *, 0x38) = arg1;
    var_r5                       = M2C_FIELD(arg0, void **, 4);
    if (var_r5 == NULL) {
        return;
    }
    do {
        M2C_FIELD(arg0, void **, 0x34) = var_r5;
        if (((u32) (M2C_FIELD(var_r5, s32 *, 0x1C) << 0x1C) >> 0x1F) == 0) {
            func_02081c64(arg0);
        }
        var_r5 = M2C_FIELD(var_r5, void **, 0);
    } while (var_r5 != NULL);
}
