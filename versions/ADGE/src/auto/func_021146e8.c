/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02117964(M2C_UNK);

extern void *data_0215a064;

void func_021146e8(s32 arg0) {
    switch (arg0) {                                 /* irregular */
        case 3:
            M2C_FIELD(data_0215a064, s16 *, 0x7C) = 0x6D;
            break;
        case 1:
            M2C_FIELD(data_0215a064, s16 *, 0x7C) = 0x6B;
            break;
        case 2:
            M2C_FIELD(data_0215a064, s16 *, 0x7C) = 0x6C;
            break;
    }
    if (M2C_FIELD(data_0215a064, s16 *, 0x7C) == -1) {
        return;
    }
    func_02117964((s32) data_0215a064);
}
