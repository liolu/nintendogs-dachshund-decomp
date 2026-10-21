#include "m2c.h"
extern void *data_02159e70;
extern void func_020d6068(s32, s32, s32);
extern M2C_UNK data_02145364;
extern void func_02041e98(s32);
void func_020e88a0(s32 arg0) {
    s32 r2 = 0;

    if (M2C_FIELD(data_02159e70, s32 *, 0xAC) != 2) {
        return;
    }
    switch (M2C_FIELD(arg0, s32 *, 0x28)) {
    case 4:
    case 5:
    case 6:
        r2 = 1;
        break;
    }
    func_020d6068(2, 8, r2);
}
