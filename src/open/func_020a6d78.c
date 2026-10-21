#include "m2c.h"
#include "engine.h"
extern void *data_02159e70;
extern u8 data_0212c174[];
extern s32 data_021545bc[7];
M2C_UNK func_02116cb4(M2C_UNK);
M2C_UNK func_02116da0(M2C_UNK);
void func_02116f14(M2C_UNK);
s32 func_020a6d78(s32 arg0) {
    switch (arg0) {
    case 0x6B:
    case 0x6C:
    case 0x6D:
        return 1;
    case 0x45:
        return 2;
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
        return 3;
    }
    return 0;
}
