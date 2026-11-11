/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02003d80(M2C_UNK);

extern void *data_02159e70;

void func_02103bd4(void) {
    if (M2C_FIELD(data_02159e70, s32 *, 0xBC) != 5) {
        return;
    }
    func_02003d80(0x14);
}
