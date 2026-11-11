/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02064db4(M2C_UNK *, M2C_UNK, M2C_UNK, u32, s32, s32, s32); /* extern */
void *func_020c081c();                              /* extern */
extern void *data_ov007_0215e7e0;
extern M2C_UNK func_ov007_0215a43c;

void func_ov007_0215b974(M2C_UNK arg0, u32 arg1) {
    if (arg1 > (u32) M2C_FIELD(func_020c081c(), u16 *, 0x4E)) {
        return;
    }
    if (M2C_FIELD(data_ov007_0215e7e0, s32 *, 0x3C) == 0) {
        return;
    }
    M2C_FIELD(data_ov007_0215e7e0, s32 *, 0x3C) = 0;
    if (func_02064db4(&func_ov007_0215a43c, 0, arg0, arg1, 0xFFFF, 5, 2) != 2) {
        M2C_FIELD(data_ov007_0215e7e0, s32 *, 0x3C) = 1;
    }
}
