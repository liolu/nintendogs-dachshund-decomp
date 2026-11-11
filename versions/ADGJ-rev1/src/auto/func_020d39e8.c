/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s16 data_02154c8c;
extern M2C_UNK data_02154c90;

void func_020d39e8(void *arg0) {
    if (arg0 == NULL) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x20) =
        (s32) (M2C_FIELD(&data_02154c90, s32 *, 0) + M2C_FIELD(*M2C_FIELD(arg0, void ***, 0x18), s32 *, 4));
    M2C_FIELD(arg0, s32 *, 0x24) =
        (s32) (M2C_FIELD(&data_02154c90, s32 *, 4) + M2C_FIELD(*M2C_FIELD(arg0, void ***, 0x18), s32 *, 8));
    M2C_FIELD(arg0, s32 *, 0x28) =
        (s32) (M2C_FIELD(&data_02154c90, s32 *, 8) + M2C_FIELD(*M2C_FIELD(arg0, void ***, 0x18), s32 *, 0xC));
    M2C_FIELD(arg0, s32 *, 0x54) = (s32) data_02154c8c;
    M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (s16) (data_02154c8c * 6);
}
