/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020ddc88(void);
void func_020e3e2c(M2C_UNK);

extern void *data_02159e70;

void func_020e2210(void) {
    if (M2C_FIELD(data_02159e70, s32 *, 0xA8) != 5) {
        return;
    }
    func_020e3e2c(3);
    func_020ddc88();
}
