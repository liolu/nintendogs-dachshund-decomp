#include "m2c.h"
#include "engine.h"
extern s32 data_021545bc[7];
extern void *data_02159e70;
extern u8 data_0212c174[];
M2C_UNK func_02116cb4(M2C_UNK);
M2C_UNK func_02116da0(M2C_UNK);
void func_02116f14(M2C_UNK);
s32 func_020ae22c(void *arg0) {
    switch (M2C_FIELD(arg0, s16 *, 0x94)) {
        case 0x29:
        case 0x2A:
        case 0x2B:
        case 0x2C:
        case 0x2D:
        case 0x2E:
            return 1;
    }
    return 0;
}
