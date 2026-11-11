/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020037f4(M2C_UNK);

extern void *data_02159e0c;

void func_020c8c80(void) {
    if (data_02159e0c == NULL) {
        return;
    }
    func_020037f4(M2C_FIELD(data_02159e0c, s32 *, 0x28));
}
