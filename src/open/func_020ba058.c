#include "m2c.h"
extern s32 data_02155638;
extern s8 data_0213eee8[];
extern s8 data_0215563c[];
void func_020ba058(void) {
    u8 buf[0x2C];

    func_020bae1c(data_02155638);
    func_020bb0f0((void *) M2C_FIELD(data_02155638, s32 *, 0x38), M2C_FIELD(data_02155638, s32 *, 8), buf);
    M2C_FIELD(data_0213eee8, s32 *, 0x28) = M2C_FIELD(buf, s32 *, 0x28);
    func_020ba0b0((M2C_UNK) data_0213eee8, (M2C_UNK) data_0215563c);
}
