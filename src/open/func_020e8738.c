#include "m2c.h"
extern M2C_UNK data_02145364;
extern void func_02041e98(s32);
extern void *data_02159e70;
extern void func_020d6068(s32, s32, s32);
void func_020e8738(s32 arg0) {
    s32 i;

    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    func_020d60e4(0xE, (s32) &data_02145364, 2);
    for (i = 0; i < 3; i++) {
        func_02041e98((s8) i);
    }
}
