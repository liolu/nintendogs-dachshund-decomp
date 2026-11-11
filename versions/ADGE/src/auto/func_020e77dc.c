/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020dab90(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020e65dc(M2C_UNK);

extern s16 data_02144f68;
extern void *data_02159e70;

void func_020e77dc(void) {
    void *temp_r4;

    if (M2C_FIELD(data_02159e70, s32 *, 0xB8) != 0x26) {
        return;
    }
    M2C_FIELD(data_02159e70, s32 *, 0xC4) = 1;
    if (M2C_FIELD(data_02159e70, s32 *, 0xB8) != 0x26) {
        return;
    }
    temp_r4                         = data_02159e70 + 0xC4;
    M2C_FIELD(temp_r4, s16 *, 0x30) = 0;
    data_02144f68                   = 0;
    func_020dab90(0, M2C_FIELD(temp_r4, s32 *, 0x10), 0);
    func_020e65dc((s32) temp_r4);
}
