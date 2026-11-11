/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020b8b0c(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020be07c(M2C_UNK);

extern void *data_02153740;

void func_020becf8(s32 arg0) {
    *(M2C_UNK *) arg0 = 0;
    if (M2C_FIELD(data_02153740, s32 *, 0xA8) != 7) {
        return;
    }
    func_020be07c(arg0 + 0xC4);
    if (M2C_FIELD(data_02153740, s32 *, 0xA8) != 7) {
        return;
    }
    func_020b8b0c(0, 0, 0);
}
