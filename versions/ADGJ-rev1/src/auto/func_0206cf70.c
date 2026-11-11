/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0206da58(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_0206dfd4(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_0213b3c4;

void func_0206cf70(s32 arg0, s32 arg1, s32 arg2) {
    if ((data_0213b3c4 != -1) && ((u32) arg2 > 0x1CU)) {
        func_0206da58(data_0213b3c4, arg0, arg1 + 0x05000600, arg2);
        return;
    }
    func_0206dfd4(arg0, arg1 + 0x05000600, arg2);
}
