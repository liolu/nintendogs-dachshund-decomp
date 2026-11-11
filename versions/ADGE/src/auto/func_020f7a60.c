/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern s16 data_0215a01c;
extern M2C_UNK data_0215a020;

void func_020f7a60(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x20) =
        (s32) (M2C_FIELD(&data_0215a020, s32 *, 0) + M2C_FIELD(*M2C_FIELD(arg0, void ***, 0x18), s32 *, 4));
    M2C_FIELD(arg0, s32 *, 0x24) =
        (s32) (M2C_FIELD(&data_0215a020, s32 *, 4) + M2C_FIELD(*M2C_FIELD(arg0, void ***, 0x18), s32 *, 8));
    M2C_FIELD(arg0, s32 *, 0x28) =
        (s32) (M2C_FIELD(&data_0215a020, s32 *, 8) + M2C_FIELD(*M2C_FIELD(arg0, void ***, 0x18), s32 *, 0xC));
    M2C_FIELD(arg0, s32 *, 0x54) = (s32) data_0215a01c;
    M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (s16) (data_0215a01c * 6);
}
