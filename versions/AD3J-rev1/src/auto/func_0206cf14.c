/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_0206db60(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_0206e004(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_0213b3c4;

void func_0206cf14(s32 arg0, s32 arg1, s32 arg2) {
    if ((data_0213b3c4 != -1) && ((u32) arg2 > 0x30U)) {
        func_0206db60(data_0213b3c4, arg0, arg1 + 0x07000000, arg2);
        return;
    }
    func_0206e004(arg0, arg1 + 0x07000000, arg2);
}
