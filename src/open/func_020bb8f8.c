#include "m2c.h"
extern void func_020a7de0(s32);
extern void func_020b95c4(s32);
extern void func_020b95d0(s32, s32, s32, s32);
extern M2C_UNK data_0214d5fc;
void func_020bb8f8(s32 arg0) {
    func_020a7de0(1);
    if (M2C_FIELD(arg0, s32 *, 0x34) == 2) {
        func_020b95d0(arg0, 0x15, -1, 0);
    }
    if ((u16) (M2C_FIELD(&data_0214d5fc, u16 *, 0) & 0x200) == 0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x34) == 0x15) {
        func_020b95d0(arg0, 0x1C, -1, 0);
        func_020b95c4(arg0);
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x34) == 0x1C) {
        func_020b95d0(arg0, 0x15, -1, 0);
        func_020b95c4(arg0);
    }
}
