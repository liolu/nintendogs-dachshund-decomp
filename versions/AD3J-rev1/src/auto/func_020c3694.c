/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_02003790(M2C_UNK);

extern void *data_02154c1c;

void func_020c3694(void) {
    if (data_02154c1c == NULL) {
        return;
    }
    func_02003790(M2C_FIELD(data_02154c1c, s32 *, 0x28));
}
