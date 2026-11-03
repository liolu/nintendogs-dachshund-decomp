/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_02003be4(M2C_UNK);

extern void *data_02153740;

void func_020fbe70(void) {
    if (M2C_FIELD(data_02153740, s32 *, 0xB4) != 0x17) {
        return;
    }
    func_02003be4(0xA);
}
