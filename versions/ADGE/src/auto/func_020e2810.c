/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020dca54(M2C_UNK);
void func_020dcd98(void);
void func_020eb9fc(M2C_UNK, M2C_UNK, M2C_UNK);

extern void *data_02159e70;

void func_020e2810(void) {
    s32 temp_r0;

    func_020dca54((s32) (data_02159e70 + 0x5028));
    temp_r0 = M2C_FIELD(data_02159e70, s32 *, 0xA8);
    if (temp_r0 == 9) {
        return;
    }
    if (temp_r0 == 0xA) {
        return;
    }
    if (data_02159e70 == NULL) {
        return;
    }
    func_020dcd98();
    func_020eb9fc(3, 0, 0);
}
