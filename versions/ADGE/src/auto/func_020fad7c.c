/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02003718(M2C_UNK);

extern void *data_0215a02c;

void func_020fad7c(void) {
    func_02003718(M2C_FIELD(data_0215a02c, s32 *, 8));
    data_0215a02c = NULL;
}
