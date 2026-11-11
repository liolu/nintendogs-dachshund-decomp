/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0208f350(M2C_UNK);
void func_020907d0(M2C_UNK, M2C_UNK);

extern void *data_02159e70;

void func_020dda80(void) {
    if (M2C_FIELD(data_02159e70, s32 *, 0xA8) == 7) {
        func_0208f350(9);
        return;
    }
    func_020907d0(0x37, 1);
}
