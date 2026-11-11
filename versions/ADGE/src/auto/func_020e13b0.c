/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020dcd98(void);
void func_020eb9fc(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_02159e70;

void func_020e13b0(void) {
    if (data_02159e70 == 0) {
        return;
    }
    func_020dcd98();
    func_020eb9fc(3, 0, 0);
}
