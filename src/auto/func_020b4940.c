/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020a8500(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020b3794(M2C_UNK);

extern s16 data_0213c928;
extern void *data_02153740;

void func_020b4940(void) {
    void *temp_r4;

    if (M2C_FIELD(data_02153740, s32 *, 0xB8) != 0x26) {
        return;
    }
    M2C_FIELD(data_02153740, s32 *, 0xC4) = 1;
    if (M2C_FIELD(data_02153740, s32 *, 0xB8) != 0x26) {
        return;
    }
    temp_r4                         = data_02153740 + 0xC4;
    M2C_FIELD(temp_r4, s16 *, 0x30) = 0;
    data_0213c928                   = 0;
    func_020a8500(0, M2C_FIELD(temp_r4, s32 *, 0x10), 0);
    func_020b3794((s32) temp_r4);
}
