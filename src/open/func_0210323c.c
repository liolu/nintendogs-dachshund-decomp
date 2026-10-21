#include "m2c.h"
extern void *data_0215a038;
extern u8 *func_020e8384(s32 arg0, s16 arg1);
extern void func_020c8380(s32 arg0);
void func_0210323c(s32 arg0, s32 arg1) {
    M2C_FIELD(data_0215a038, u8 **, 0x24) = func_020e8384(arg0, (s16) arg1);
    M2C_FIELD(data_0215a038, u16 *, 0x10) =
        M2C_FIELD(M2C_FIELD(data_0215a038, u8 **, 0x24), u16 *, 0x10);
    if (M2C_FIELD(data_0215a038, s32 *, 0x18) != 0) {
        return;
    }
    M2C_FIELD(data_0215a038, s32 *, 0x14) = 1;
    if (M2C_FIELD(data_0215a038, void **, 0) == 0) {
        return;
    }
    func_020c8380(M2C_FIELD(data_0215a038, s32 *, 0x1C));
}
