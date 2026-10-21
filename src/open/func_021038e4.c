#include "m2c.h"

extern void *data_0215a038;

void func_020c85d0(s32);
void func_020c85b4(s32);
void func_020c83b8(s32, u16, s32, s32);
void func_020c83a0(s32);
void func_02103650(void);

void func_021038e4(void) {
    func_020c85d0(M2C_FIELD(data_0215a038, s32 *, 0x1C));
    if (M2C_FIELD(data_0215a038, s32 *, 0x14) != 0) {
        func_020c85b4(M2C_FIELD(data_0215a038, s32 *, 0x1C));
        func_020c83b8(M2C_FIELD(data_0215a038, s32 *, 0x1C), M2C_FIELD(data_0215a038, u16 *, 0x10), 1, 0x88);
        func_020c83a0(M2C_FIELD(data_0215a038, s32 *, 0x1C));
        M2C_FIELD(data_0215a038, s32 *, 0x8) =
            M2C_FIELD(M2C_FIELD(data_0215a038, u8 **, 0x24), s8 *, 0x13) * 0x1000 / 10;
        M2C_FIELD(data_0215a038, s32 *, 0xC) =
            M2C_FIELD(M2C_FIELD(data_0215a038, u8 **, 0x24), u8 *, 0x12) * 0x1000 / 10;
        M2C_FIELD(data_0215a038, s32 *, 0x14) = 0;
        M2C_FIELD(data_0215a038, u16 *, 0x10) = 0xFFFF;
        M2C_FIELD(data_0215a038, s32 *, 0x18) = 1;
    }
    if (M2C_FIELD(data_0215a038, s32 *, 0) != 0) {
        func_02103650();
    }
}
