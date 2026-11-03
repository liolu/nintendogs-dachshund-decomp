/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_02003d1c(M2C_UNK);

extern void *data_02153740;

void func_020dfb14(void) {
    if (M2C_FIELD(data_02153740, s32 *, 0xBC) != 5) {
        return;
    }
    func_02003d1c(0x14);
}
