/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02003c48(M2C_UNK);

extern void *data_02159e70;

void func_0209ee40(void) {
    if (M2C_FIELD(data_02159e70, s32 *, 0xB4) != 0x17) {
        return;
    }
    func_02003c48(0xA);
}
