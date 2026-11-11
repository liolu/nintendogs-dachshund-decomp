/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020e3e2c(M2C_UNK);

extern void *data_02159e70;
extern s32 *data_02159fc4;

void func_020e1e84(void) {
    if (M2C_FIELD(data_02159e70, s32 *, 0xA8) != 6) {
        return;
    }
    if (*data_02159fc4 == 9) {
        return;
    }
    func_020e3e2c(9);
}
