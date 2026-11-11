/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020c3504(M2C_UNK);

extern void *data_02154ca8;

void func_020df964(void) {
    func_020c3504(M2C_FIELD(data_02154ca8, s32 *, 0x1C));
    data_02154ca8 = NULL;
}
