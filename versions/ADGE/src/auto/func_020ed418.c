/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020e23fc(M2C_UNK);
void func_020f0a5c(M2C_UNK);

extern void *data_02159e70;

void func_020ed418(void) {
    void *temp_r4;

    if (M2C_FIELD(data_02159e70, s32 *, 0xB8) != 0x16) {
        return;
    }
    temp_r4 = data_02159e70 + 0xC4;
    func_020f0a5c((s32) (temp_r4 + 8));
    func_020f0a5c((s32) (temp_r4 + 0x44));
    func_020f0a5c((s32) (temp_r4 + 0x80));
    func_020e23fc(1);
}
