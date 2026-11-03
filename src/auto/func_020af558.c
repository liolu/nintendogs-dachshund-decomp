/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020b1108(M2C_UNK);

extern void *data_02153740;

void func_020af558(void) {
    if (M2C_FIELD(data_02153740, s32 *, 0xA8) != 5) {
        return;
    }
    func_020b1108(1);
}
